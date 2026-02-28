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

#import <Foundation/Foundation.h>
#import <ZGMatter/ZGMTRDefines.h>

NS_ASSUME_NONNULL_BEGIN

@class ZGMTRSetupPayload;

typedef NS_ENUM(NSUInteger, ZGMTROnboardingPayloadType) {
    ZGMTROnboardingPayloadTypeQRCode = 0,
    ZGMTROnboardingPayloadTypeManualCode,
    ZGMTROnboardingPayloadTypeNFC
} ZGMTR_DEPRECATED("ZGMTROnboardingPayloadType is unused", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));

ZGMTR_DEPRECATED("Please use [ZGMTRSetupPayload initWithPayload:]", ios(16.1, 17.0), macos(13.0, 14.0),
    watchos(9.1, 10.0), tvos(16.1, 17.0))
@interface ZGMTROnboardingPayloadParser : NSObject

+ (ZGMTRSetupPayload * _Nullable)setupPayloadForOnboardingPayload:(NSString *)onboardingPayload
                                                          error:(NSError * __autoreleasing *)error;

@end

NS_ASSUME_NONNULL_END
