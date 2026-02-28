/**
 *    Copyright (c) 2022-2023 Project CHIP Authors
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

#import <ZGMatter/ZGMTRBaseDevice.h>
#import <ZGMatter/ZGMTRDefines.h>
#import <ZGMatter/ZGMTRDeviceController.h>

NS_ASSUME_NONNULL_BEGIN

@class ZGMTRSubscribeParams;

/**
 * An object that holds a cluster state cache.  It can be passed to
 * ZGMTRBaseDevice's subscribeWithQueue to fill the cache with data the
 * subscription returns.  Then reads can happen against the cache without going
 * out to the network.
 */
ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRClusterStateCacheContainer : NSObject

/**
 * Reads the given attributes from the cluster state cache inside
 * this cache container.
 *
 * @param endpointID  endpoint ID of the attributes. Nil means wildcard.
 * @param clusterID  cluster ID of the attributes. Nil means wildcard.
 * @param attributeID  attribute ID of the attributes. Nil means wildcard.
 * @param queue  client queue to dispatch the completion handler through
 * @param completion  block to receive the result.
 *                   "values" received by the block will have the same format of object as the one received by the completion block
 *                   of the ZGMTRBaseDevice readAttributesWithEndpointID:clusterID:attributeID:queue:completion method.
 *
 * @note: not all combinations of wildcards might be supported.
 */
- (void)readAttributesWithEndpointID:(NSNumber * _Nullable)endpointID
                           clusterID:(NSNumber * _Nullable)clusterID
                         attributeID:(NSNumber * _Nullable)attributeID
                               queue:(dispatch_queue_t)queue
                          completion:(ZGMTRDeviceResponseHandler)completion;

@end

ZGMTR_DEPRECATED("Please use ZGMTRClusterStateCacheContainer", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRAttributeCacheContainer : NSObject

- (void)readAttributeWithEndpointId:(NSNumber * _Nullable)endpointId
                          clusterId:(NSNumber * _Nullable)clusterId
                        attributeId:(NSNumber * _Nullable)attributeId
                        clientQueue:(dispatch_queue_t)clientQueue
                         completion:(ZGMTRDeviceResponseHandler)completion;

@end

NS_ASSUME_NONNULL_END
