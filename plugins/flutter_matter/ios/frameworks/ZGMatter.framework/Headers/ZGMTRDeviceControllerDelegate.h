/**
 *
 *    Copyright (c) 2020-2023 Project CHIP Authors
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

#import <Foundation/Foundation.h>
#import <ZGMatter/ZGMTRDefines.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, ZGMTRCommissioningStatus) {
    ZGMTRCommissioningStatusUnknown = 0,
    ZGMTRCommissioningStatusSuccess = 1,
    ZGMTRCommissioningStatusFailed = 2,
    ZGMTRCommissioningStatusDiscoveringMoreDevices ZGMTR_DEPRECATED("ZGMTRCommissioningStatusDiscoveringMoreDevices is not used.",
        ios(16.1, 16.5), macos(13.0, 13.4), watchos(9.1, 9.5), tvos(16.1, 16.5))
    = 3,
} ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

/**
 * A representation of a (vendor, product) pair that identifies a specific product.
 */
ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0))
@interface ZGMTRProductIdentity : NSObject

@property (nonatomic, copy, readonly) NSNumber * vendorID;

@property (nonatomic, copy, readonly) NSNumber * productID;

- (instancetype)initWithVendorID:(NSNumber *)vendorID productID:(NSNumber *)productID;
@end

@class ZGMTRDeviceController;
@class ZGMTRMetrics;

/**
 * The protocol definition for the ZGMTRDeviceControllerDelegate.
 *
 * All delegate methods will be called on the supplied Delegate Queue.
 */
ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@protocol ZGMTRDeviceControllerDelegate <NSObject>
@optional
/**
 * Notify the delegate when commissioning status gets updated.
 */
- (void)controller:(ZGMTRDeviceController *)controller statusUpdate:(ZGMTRCommissioningStatus)status;

/**
 * Notify the delegate when a commissioning session is established or the
 * establishment has errored out.
 */
- (void)controller:(ZGMTRDeviceController *)controller commissioningSessionEstablishmentDone:(NSError * _Nullable)error;

/**
 * Notify the delegate when commissioning is completed.
 */
- (void)controller:(ZGMTRDeviceController *)controller
    commissioningComplete:(NSError * _Nullable)error
    ZGMTR_DEPRECATED("Please use controller:commissioningComplete:nodeID:", ios(16.4, 17.0), macos(13.3, 14.0), watchos(9.4, 10.0),
        tvos(16.4, 17.0));

/**
 * Notify the delegate when commissioning is completed.
 *
 * Exactly one of error and nodeID will be nil.
 *
 * If nodeID is not nil, then it represents the node id the node was assigned, as encoded in its operational certificate.
 */
- (void)controller:(ZGMTRDeviceController *)controller
    commissioningComplete:(NSError * _Nullable)error
                   nodeID:(NSNumber * _Nullable)nodeID ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));

/**
 * Notify the delegate when commissioning is completed.
 *
 * Exactly one of error and nodeID will be nil.
 *
 * If nodeID is not nil, then it represents the node id the node was assigned, as encoded in its operational certificate.
 *
 * The metrics object contains information corresponding to the commissioning session.
 */
- (void)controller:(ZGMTRDeviceController *)controller
    commissioningComplete:(NSError * _Nullable)error
                   nodeID:(NSNumber * _Nullable)nodeID
                  metrics:(ZGMTRMetrics *)metrics ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));

/**
 * Notify the delegate when commissioning infomation has been read from the Basic
 * Information cluster of the commissionee.
 *
 * At the point when this notification happens, device attestation has not been performed yet,
 * so the information delivered by this notification should not be trusted.
 */
- (void)controller:(ZGMTRDeviceController *)controller
    readCommissioningInfo:(ZGMTRProductIdentity *)info ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));

- (void)controller:(ZGMTRDeviceController *)controller
            nodeID:(NSNumber * _Nullable)nodeID
commissioningStage:(NSString * _Nullable)commissioningStage
             error:(NSError * _Nullable)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));

/**
 * Notify the delegate when the suspended state changed of the controller, after this happens
 * the controller will be in the specified state.
 */
- (void)controller:(ZGMTRDeviceController *)controller
    suspendedChangedTo:(BOOL)suspended ZGMTR_NEWLY_AVAILABLE;
@end

typedef NS_ENUM(NSUInteger, ZGMTRPairingStatus) {
    ZGMTRPairingStatusUnknown ZGMTR_DEPRECATED(
        "Please use ZGMTRCommissioningStatusUnknown", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0,
    ZGMTRPairingStatusSuccess ZGMTR_DEPRECATED(
        "Please use ZGMTRCommissioningStatusSuccess", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 1,
    ZGMTRPairingStatusFailed ZGMTR_DEPRECATED(
        "Please use ZGMTRCommissioningStatusFailed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 2,
    ZGMTRPairingStatusDiscoveringMoreDevices ZGMTR_DEPRECATED("ZGMTRPairingStatusDiscoveringMoreDevices is not used.", ios(16.1, 16.4),
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 3
} ZGMTR_DEPRECATED("Please use ZGMTRCommissioningStatus", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

ZGMTR_DEPRECATED("Please use ZGMTRDeviceControllerDelegate", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@protocol ZGMTRDevicePairingDelegate <NSObject>
@optional
- (void)onStatusUpdate:(ZGMTRPairingStatus)status;
- (void)onPairingComplete:(NSError * _Nullable)error;
- (void)onCommissioningComplete:(NSError * _Nullable)error;
//- (void)onCommissioningCompleteWithNodeID:(NSNumber * _Nullable)nodeID error(NSError * _Nullable)error;
- (void)onPairingDeleted:(NSError * _Nullable)error;
- (void)onCommissioningStatusUpdate:(NSNumber * _Nullable)nodeId commissioningStage:(NSString *)commissioningStage error:(NSError * _Nullable)error;
@end

NS_ASSUME_NONNULL_END
