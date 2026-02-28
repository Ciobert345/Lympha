/**
 *
 *    Copyright (c) 2021-2023 Project CHIP Authors
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

#import <ZGMatter/ZGMTRDefines.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * ZGMTRThreadOperationalDataset allows converting between an "expanded" view of
 * the dataset (with the separate fields) and a single-blob NSData view.
 *
 * The latter can be used to pass Thread network credentials via
 * ZGMTRCommissioningParameters.
 */
ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRThreadOperationalDataset : NSObject

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

/**
 * Create a Thread Operational Dataset object with the individual network
 * fields.
 *
 * @param extendedPANID Must be ZGMTRSizeThreadExtendedPANID bytes.  Otherwise nil
 *                      will be returned.
 * @param masterKey Must be ZGMTRSizeThreadMasterKey bytes. Otherwise nil will be
 *                  returned.
 * @param PSKc Must be ZGMTRSizeThreadPSKc bytes.  Otherwise nil will be returned.
 * @param channelNumber Must be an unsigned 16-bit value.
 * @param panID Must be ZGMTRSizeThreadPANID bytes.  Otherwise nil will be
 *              returned.  In particular, it's expected to be a 16-bit unsigned
 *              integer stored as 2 bytes in host order.
 */
- (instancetype _Nullable)initWithNetworkName:(NSString *)networkName
                                extendedPANID:(NSData *)extendedPANID
                                    masterKey:(NSData *)masterKey
                                         PSKc:(NSData *)PSKc
                                channelNumber:(NSNumber *)channelNumber
                                        panID:(NSData *)panID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

/**
 * Create a Thread Operational Dataset object with a RCP formatted active operational dataset.
 * This initializer will return nil if the input data cannot be parsed correctly
 */
- (instancetype _Nullable)initWithData:(NSData *)data;

/**
 * The expected lengths of each of the NSData fields in the ZGMTRThreadOperationalDataset
 */
ZGMTR_EXTERN size_t const ZGMTRSizeThreadNetworkName ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
ZGMTR_EXTERN size_t const ZGMTRSizeThreadExtendedPanId ZGMTR_DEPRECATED(
    "Please use ZGMTRSizeThreadExtendedPANID", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
ZGMTR_EXTERN size_t const ZGMTRSizeThreadExtendedPANID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
ZGMTR_EXTERN size_t const ZGMTRSizeThreadMasterKey ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
ZGMTR_EXTERN size_t const ZGMTRSizeThreadPSKc ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
ZGMTR_EXTERN size_t const ZGMTRSizeThreadPANID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

/**
 * The Thread Network name
 */
@property (nonatomic, copy, readonly) NSString * networkName;

/**
 * The Thread Network extendended PAN ID
 */
@property (nonatomic, copy, readonly) NSData * extendedPANID;

/**
 * The 16 byte Master Key
 */
@property (nonatomic, copy, readonly) NSData * masterKey;

/**
 * The Thread PSKc
 */
@property (nonatomic, copy, readonly) NSData * PSKc;

/**
 * The Thread network channel.  Always an unsigned 16-bit integer.
 */
@property (nonatomic, copy, readonly) NSNumber * channelNumber ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

/**
 * A uint16_t stored as 2-bytes in host order representing the Thread PAN ID
 */
@property (nonatomic, copy, readonly) NSData * panID;

/**
 * Get the underlying data that represents the Thread Active Operational Dataset
 * This can be used for the threadOperationalDataset of ZGMTRCommissioningParameters.
 */
- (NSData *)data;

@end

@interface ZGMTRThreadOperationalDataset (Deprecated)

@property (nonatomic, readwrite) uint16_t channel ZGMTR_DEPRECATED(
    "Please use channelNumber", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (nullable instancetype)initWithNetworkName:(NSString *)networkName
                               extendedPANID:(NSData *)extendedPANID
                                   masterKey:(NSData *)masterKey
                                        PSKc:(NSData *)PSKc
                                     channel:(uint16_t)channel
                                       panID:(NSData *)panID
    ZGMTR_DEPRECATED("Please use initWithNetworkName:extendedPANID:masterKey:PSKc:channelNumber:panID", ios(16.1, 16.4),
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

NS_ASSUME_NONNULL_END
