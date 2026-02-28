/**
 *
 *    Copyright (c) 2020 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#import "DefaultsUtils.h"
#import "FabricKeys.h"

NSString * const ZGMTRToolDefaultsDomain = @"com.matter.CHIPTool";
NSString * const kNetworkSSIDDefaultsKey = @"networkSSID";
NSString * const kNetworkPasswordDefaultsKey = @"networkPassword";
NSString * const ZGMTRNextAvailableDeviceIDKey = @"nextDeviceID";
NSString * const kFabricIdKey = @"fabricId";
NSString * const kDevicePairedKey = @"Paired";

id ZGMTRGetDomainValueForKey(NSString * domain, NSString * key)
{
    id value = (id) CFBridgingRelease(CFPreferencesCopyAppValue((CFStringRef) key, (CFStringRef) domain));
    if (value) {
        return value;
    }
    return nil;
}

BOOL ZGMTRSetDomainValueForKey(NSString * domain, NSString * key, id value)
{
    CFPreferencesSetAppValue((CFStringRef) key, (__bridge CFPropertyListRef _Nullable)(value), (CFStringRef) domain);
    return CFPreferencesAppSynchronize((CFStringRef) domain) == true;
}

void ZGMTRRemoveDomainValueForKey(NSString * domain, NSString * key)
{
    CFPreferencesSetAppValue((CFStringRef) key, NULL, (CFStringRef) domain);
    CFPreferencesAppSynchronize((CFStringRef) domain);
}

uint64_t ZGMTRGetNextAvailableDeviceID(void)
{
    uint64_t nextAvailableDeviceIdentifier = 1;
    NSNumber * value = ZGMTRGetDomainValueForKey(ZGMTRToolDefaultsDomain, ZGMTRNextAvailableDeviceIDKey);
    if (!value) {
        ZGMTRSetDomainValueForKey(ZGMTRToolDefaultsDomain, ZGMTRNextAvailableDeviceIDKey,
            [NSNumber numberWithUnsignedLongLong:nextAvailableDeviceIdentifier]);
    } else {
        nextAvailableDeviceIdentifier = [value unsignedLongLongValue];
    }

    return nextAvailableDeviceIdentifier;
}

void ZGMTRSetNextAvailableDeviceID(uint64_t id)
{
    ZGMTRSetDomainValueForKey(ZGMTRToolDefaultsDomain, ZGMTRNextAvailableDeviceIDKey, [NSNumber numberWithUnsignedLongLong:id]);
}

static CHIPToolPersistentStorageDelegate * storage = nil;

static uint16_t kTestVendorId = 0xFFF4u;

static ZGMTRDeviceController * sController = nil;

ZGMTRDeviceController * InitializeZGMTR(void)
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        CHIPToolPersistentStorageDelegate * storage = [[CHIPToolPersistentStorageDelegate alloc] init];
        __auto_type * factory = [ZGMTRControllerFactory sharedInstance];
        __auto_type * factoryParams = [[ZGMTRControllerFactoryParams alloc] initWithStorage:storage];
        if (![factory startup:factoryParams]) {
            return;
        }

        __auto_type * keys = [[FabricKeys alloc] init];
        if (keys == nil) {
            return;
        }

        __auto_type * params = [[ZGMTRDeviceControllerStartupParams alloc] initWithSigningKeypair:keys fabricId:1 ipk:keys.ipk];
        params.vendorId = @(kTestVendorId);
        // We're not sure whether we have a fabric configured already; try as if
        // we did, and if not fall back to creating a new one.
        sController = [factory startControllerOnExistingFabric:params];
        if (sController == nil) {
            sController = [factory startControllerOnNewFabric:params];
        }
    });

    return sController;
}

ZGMTRDeviceController * ZGMTRRestartController(ZGMTRDeviceController * controller)
{
    __auto_type * keys = [[FabricKeys alloc] init];
    if (keys == nil) {
        NSLog(@"No keys, can't restart controller");
        return controller;
    }

    NSLog(@"Shutting down the stack");
    [controller shutdown];

    NSLog(@"Starting up the stack");
    __auto_type * params = [[ZGMTRDeviceControllerStartupParams alloc] initWithSigningKeypair:keys fabricId:1 ipk:keys.ipk];

    sController = [[ZGMTRControllerFactory sharedInstance] startControllerOnExistingFabric:params];

    return sController;
}

uint64_t ZGMTRGetLastPairedDeviceId(void)
{
    uint64_t deviceId = ZGMTRGetNextAvailableDeviceID();
    if (deviceId > 1) {
        deviceId--;
    }
    return deviceId;
}

BOOL ZGMTRGetConnectedDevice(ZGMTRDeviceConnectionCallback completionHandler)
{
    ZGMTRDeviceController * controller = InitializeZGMTR();

    // Let's use the last device that was paired
    uint64_t deviceId = ZGMTRGetLastPairedDeviceId();
    return [controller getBaseDevice:deviceId queue:dispatch_get_main_queue() completionHandler:completionHandler];
}

ZGMTRBaseDevice * ZGMTRGetDeviceBeingCommissioned(void)
{
    NSError * error;
    ZGMTRDeviceController * controller = InitializeZGMTR();
    ZGMTRBaseDevice * device = [controller getDeviceBeingCommissioned:ZGMTRGetLastPairedDeviceId() error:&error];
    if (error) {
        NSLog(@"Error retrieving device being commissioned for deviceId %llu", ZGMTRGetLastPairedDeviceId());
        return nil;
    }
    return device;
}

BOOL ZGMTRGetConnectedDeviceWithID(uint64_t deviceId, ZGMTRDeviceConnectionCallback completionHandler)
{
    ZGMTRDeviceController * controller = InitializeZGMTR();

    return [controller getBaseDevice:deviceId queue:dispatch_get_main_queue() completionHandler:completionHandler];
}

BOOL ZGMTRIsDevicePaired(uint64_t deviceId)
{
    NSString * PairedString = ZGMTRGetDomainValueForKey(ZGMTRToolDefaultsDomain, KeyForPairedDevice(deviceId));
    return [PairedString boolValue];
}

void ZGMTRSetDevicePaired(uint64_t deviceId, BOOL paired)
{
    ZGMTRSetDomainValueForKey(ZGMTRToolDefaultsDomain, KeyForPairedDevice(deviceId), paired ? @"YES" : @"NO");
}

NSString * KeyForPairedDevice(uint64_t deviceId) { return [NSString stringWithFormat:@"%@%llu", kDevicePairedKey, deviceId]; }

void ZGMTRUnpairDeviceWithID(uint64_t deviceId)
{
    ZGMTRSetDevicePaired(deviceId, NO);
    ZGMTRGetConnectedDeviceWithID(deviceId, ^(ZGMTRBaseDevice * _Nullable device, NSError * _Nullable error) {
        if (error) {
            NSLog(@"Failed to unpair device %llu still removing from CHIPTool. %@", deviceId, error);
            return;
        }
        NSLog(@"Attempting to unpair device %llu", deviceId);
        ZGMTRBaseClusterOperationalCredentials * opCredsCluster =
            [[ZGMTRBaseClusterOperationalCredentials alloc] initWithDevice:device endpoint:0 queue:dispatch_get_main_queue()];
        [opCredsCluster
            readAttributeCurrentFabricIndexWithCompletionHandler:^(NSNumber * _Nullable value, NSError * _Nullable error) {
                if (error) {
                    NSLog(@"Failed to get current fabric index for device %llu still removing from CHIPTool. %@", deviceId, error);
                    return;
                }
                ZGMTROperationalCredentialsClusterRemoveFabricParams * params =
                    [[ZGMTROperationalCredentialsClusterRemoveFabricParams alloc] init];
                params.fabricIndex = value;
                [opCredsCluster removeFabricWithParams:params
                                     completionHandler:^(ZGMTROperationalCredentialsClusterNOCResponseParams * _Nullable data,
                                         NSError * _Nullable error) {
                                         if (error) {
                                             NSLog(@"Failed to remove current fabric index %@ for device %llu. %@",
                                                 params.fabricIndex, deviceId, error);
                                             return;
                                         }
                                         NSLog(@"Successfully unpaired deviceId %llu", deviceId);
                                     }];
            }];
    });
}

@implementation CHIPToolPersistentStorageDelegate

// MARK: ZGMTRPersistentStorageDelegate

- (nullable NSData *)storageDataForKey:(NSString *)key
{
    NSData * value = ZGMTRGetDomainValueForKey(ZGMTRToolDefaultsDomain, key);
    NSLog(@"ZGMTRPersistentStorageDelegate Get Value for Key: %@, value %@", key, value);
    return value;
}

- (BOOL)setStorageData:(NSData *)value forKey:(NSString *)key
{
    return ZGMTRSetDomainValueForKey(ZGMTRToolDefaultsDomain, key, value);
}

- (BOOL)removeStorageDataForKey:(NSString *)key
{
    if (ZGMTRGetDomainValueForKey(ZGMTRToolDefaultsDomain, key) == nil) {
        return NO;
    }
    ZGMTRRemoveDomainValueForKey(ZGMTRToolDefaultsDomain, key);
    return YES;
}

@end
