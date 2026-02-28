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

#import <ZGMatter/ZGMTRCluster.h>
#import <ZGMatter/ZGMTRDefines.h>
#import <ZGMatter/ZGMTRDeviceController.h>
#import <ZGMatter/ZGMTRDiagnosticLogsType.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSXPCConnection * _Nonnull (^ZGMTRXPCConnectBlock)(void);

typedef void (^ZGMTRDeviceControllerGetterHandler)(id _Nullable controller, NSError * _Nullable error);

typedef void (^ZGMTRValuesHandler)(id _Nullable values, NSError * _Nullable error);

/**
 * Extended methods for ZGMTRDeviceController object over XPC
 */
@interface ZGMTRDeviceController (XPC)

/**
 * Returns a shared device controller proxy for the controller object over XPC connection.
 *
 * @param controllerID    an implementation specific id in case multiple shared device controllers are available over XPC connection
 * @param xpcConnectBlock block to connect to an XPC listener serving the shared device controllers in an implementation specific
 * way
 */
+ (ZGMTRDeviceController *)sharedControllerWithID:(id<NSCopying> _Nullable)controllerID
                                xpcConnectBlock:(ZGMTRXPCConnectBlock)xpcConnectBlock
    ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

/**
 * Returns an encoded values object to send over XPC for read, write and command interactions
 */
+ (NSArray<NSDictionary<NSString *, id> *> * _Nullable)encodeXPCResponseValues:
    (NSArray<NSDictionary<NSString *, id> *> * _Nullable)values;

/**
 * Returns a decoded values object from a values object received from XPC for read, write and command interactions
 */
+ (NSArray<NSDictionary<NSString *, id> *> * _Nullable)decodeXPCResponseValues:
    (NSArray<NSDictionary<NSString *, id> *> * _Nullable)values;

/**
 * Returns a serialized read parameter object to send over XPC
 */
+ (NSDictionary<NSString *, id> * _Nullable)encodeXPCReadParams:(ZGMTRReadParams *)params;

/**
 * Returns a deserialized read parameter object from an object received over XPC
 */
+ (ZGMTRReadParams * _Nullable)decodeXPCReadParams:(NSDictionary<NSString *, id> * _Nullable)params;

/**
 * Returns a serialized subscribe parameter object to send over XPC
 */
+ (NSDictionary<NSString *, id> * _Nullable)encodeXPCSubscribeParams:(ZGMTRSubscribeParams * _Nullable)params;

/**
 * Returns a deserialized subscribe parameter object from an object received over XPC
 */
+ (ZGMTRSubscribeParams * _Nullable)decodeXPCSubscribeParams:(NSDictionary<NSString *, id> * _Nullable)params;

/**
 * Returns an NSXPCInterface configured for ZGMTRDeviceControllerServerProtocol.
 */
+ (NSXPCInterface *)xpcInterfaceForServerProtocol ZGMTR_AVAILABLE(ios(16.5), macos(13.4), watchos(9.5), tvos(16.5));

/**
 * Returns an NSXPCInterface configured for ZGMTRDeviceControllerClientProtocol.
 */
+ (NSXPCInterface *)xpcInterfaceForClientProtocol ZGMTR_AVAILABLE(ios(16.5), macos(13.4), watchos(9.5), tvos(16.5));
@end

/**
 * Protocol that remote object must support over XPC
 */
@protocol ZGMTRDeviceControllerServerProtocol <NSObject>

@required
/**
 * Gets any available device controller ID
 */
- (void)getAnyDeviceControllerWithCompletion:(ZGMTRDeviceControllerGetterHandler)completion;

/**
 * Requests reading attribute
 */
- (void)readAttributeWithController:(id _Nullable)controller
                             nodeId:(uint64_t)nodeId
                         endpointId:(NSNumber * _Nullable)endpointId
                          clusterId:(NSNumber * _Nullable)clusterId
                        attributeId:(NSNumber * _Nullable)attributeId
                             params:(NSDictionary<NSString *, id> * _Nullable)params
                         completion:(ZGMTRValuesHandler)completion;

/**
 * Requests writing attribute
 */
- (void)writeAttributeWithController:(id _Nullable)controller
                              nodeId:(uint64_t)nodeId
                          endpointId:(NSNumber *)endpointId
                           clusterId:(NSNumber *)clusterId
                         attributeId:(NSNumber *)attributeId
                               value:(id)value
                   timedWriteTimeout:(NSNumber * _Nullable)timeoutMs
                          completion:(ZGMTRValuesHandler)completion;

/**
 * Requests invoking command
 */
- (void)invokeCommandWithController:(id _Nullable)controller
                             nodeId:(uint64_t)nodeId
                         endpointId:(NSNumber *)endpointId
                          clusterId:(NSNumber *)clusterId
                          commandId:(NSNumber *)commandId
                             fields:(id)fields
                 timedInvokeTimeout:(NSNumber * _Nullable)timeoutMs
                         completion:(ZGMTRValuesHandler)completion;

/**
 * Requests subscribing attribute.  The minInterval/maxInterval arguments
 * override whatever intervals might be present in params.
 */
- (void)subscribeAttributeWithController:(id _Nullable)controller
                                  nodeId:(uint64_t)nodeId
                              endpointId:(NSNumber * _Nullable)endpointId
                               clusterId:(NSNumber * _Nullable)clusterId
                             attributeId:(NSNumber * _Nullable)attributeId
                             minInterval:(NSNumber *)minInterval
                             maxInterval:(NSNumber *)maxInterval
                                  params:(NSDictionary<NSString *, id> * _Nullable)params
                      establishedHandler:(dispatch_block_t)establishedHandler;

/**
 * Requests to stop reporting
 */
- (void)stopReportsWithController:(id _Nullable)controller nodeId:(uint64_t)nodeId completion:(dispatch_block_t)completion;

/**
 * Requests subscription of all attributes.  The minInterval/maxInterval
 * arguments override whatever intervals might be present in params.
 */
- (void)subscribeWithController:(id _Nullable)controller
                         nodeId:(uint64_t)nodeId
                    minInterval:(NSNumber *)minInterval
                    maxInterval:(NSNumber *)maxInterval
                         params:(NSDictionary<NSString *, id> * _Nullable)params
                    shouldCache:(BOOL)shouldCache
                     completion:(ZGMTRStatusCompletion)completion;

/**
 * Requests reading attribute cache
 */
- (void)readAttributeCacheWithController:(id _Nullable)controller
                                  nodeId:(uint64_t)nodeId
                              endpointId:(NSNumber * _Nullable)endpointId
                               clusterId:(NSNumber * _Nullable)clusterId
                             attributeId:(NSNumber * _Nullable)attributeId
                              completion:(ZGMTRValuesHandler)completion;

@optional

/**
 * Gets device controller ID corresponding to a specific fabric ID
 */
- (void)getDeviceControllerWithFabricId:(uint64_t)fabricId
                             completion:(ZGMTRDeviceControllerGetterHandler)completion
    ZGMTR_DEPRECATED("This never called.", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Requests downloading some logs
 */
- (void)downloadLogWithController:(id _Nullable)controller
                           nodeId:(NSNumber *)nodeId
                             type:(ZGMTRDiagnosticLogType)type
                          timeout:(NSTimeInterval)timeout
                       completion:(void (^)(NSString * _Nullable url, NSError * _Nullable error))completion ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));

@end

/**
 * Protocol that the XPC client local object must support
 */
@protocol ZGMTRDeviceControllerClientProtocol <NSObject>

/**
 * Handles a report received by a device controller
 */
- (void)handleReportWithController:(id _Nullable)controller
                            nodeId:(uint64_t)nodeId
                            values:(id _Nullable)values
                             error:(NSError * _Nullable)error;

@end

@interface ZGMTRDeviceController (Deprecated_XPC)

+ (ZGMTRDeviceController *)sharedControllerWithId:(id<NSCopying> _Nullable)controllerID
                                xpcConnectBlock:(ZGMTRXPCConnectBlock)xpcConnectBlock
    ZGMTR_DEPRECATED("Please use sharedControllerWithID:xpcConnectBlock:", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4),
        tvos(16.1, 16.4));

@end

NS_ASSUME_NONNULL_END
