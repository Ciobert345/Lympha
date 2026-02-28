/**
 *
 *    Copyright (c) 2024 Project CHIP Authors
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

#import <ZGMatter/ZGMTRBlePlatformDelegate.h>
#import <ZGMatter/ZGMTRDefines.h>

NS_ASSUME_NONNULL_BEGIN

ZGMTR_EXPORT
@interface ZGMTRBleManager : NSObject

+ (BOOL)setBlePlatformDelegate:(id<ZGMTRBlePlatformDelegate>)platformDelegate;

+ (BOOL)handleSubscribeCompleteWithConnection:(id)connObj
                                      serviceId:(NSData *)svcId
                             characteristicId:(NSData *)charId;

+ (BOOL)handleUnsubscribeCompleteWithConnection:(id)connObj
                                      serviceId:(NSData *)svcId
                              characteristicId:(NSData *)charId;

+ (BOOL)handleWriteConfirmationWithConnection:(id)connObj
                                     serviceId:(NSData *)svcId
                                 characteristicId:(NSData *)charId;

+ (BOOL)handleIndicationReceivedWithConnection:(id)connObj
                                      serviceId:(NSData *)svcId
                              characteristicId:(NSData *)charId
                                   payloadData:(NSData *)pBuf;

+ (void)handleConnectionErrorWithConnection:(id)connObj;

@end

NS_ASSUME_NONNULL_END
