/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
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

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDataTypeTestGlobalStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable myBitmap ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable myEnum ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDataTypeLocationDescriptorStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull locationName ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable floorNumber ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable areaType ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDataTypeAtomicAttributeStatusStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull attributeID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull statusCode ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.2), macos(13.1), watchos(9.2), tvos(16.2))
@interface ZGMTRDescriptorClusterDeviceTypeStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull deviceType ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull type ZGMTR_DEPRECATED("Please use deviceType", ios(16.2, 16.4), macos(13.1, 13.3), watchos(9.2, 9.4), tvos(16.2, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull revision ZGMTR_AVAILABLE(ios(16.2), macos(13.1), watchos(9.2), tvos(16.2));
@end

ZGMTR_DEPRECATED("Please use MTRDescriptorClusterDeviceTypeStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRDescriptorClusterDeviceType : ZGMTRDescriptorClusterDeviceTypeStruct
@property (nonatomic, copy) NSNumber * _Nonnull revision ZGMTR_DEPRECATED("Please use MTRDescriptorClusterDeviceTypeStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDescriptorClusterSemanticTagStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable mfgCode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull namespaceID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull tag ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable label ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRBindingClusterTargetStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable node ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable group ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable endpoint ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable cluster ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRAccessControlClusterAccessRestrictionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull type ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable id ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRAccessControlClusterCommissioningAccessRestrictionEntryStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull endpoint ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull cluster ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nonnull restrictions ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRAccessControlClusterAccessRestrictionEntryStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull endpoint ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull cluster ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nonnull restrictions ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0))
@interface ZGMTRAccessControlClusterAccessControlTargetStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable cluster ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nullable endpoint ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nullable deviceType ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use MTRAccessControlClusterAccessControlTargetStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0))
@interface ZGMTRAccessControlClusterTarget : ZGMTRAccessControlClusterAccessControlTargetStruct
@property (nonatomic, copy) NSNumber * _Nullable cluster ZGMTR_DEPRECATED("Please use MTRAccessControlClusterAccessControlTargetStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nullable endpoint ZGMTR_DEPRECATED("Please use MTRAccessControlClusterAccessControlTargetStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nullable deviceType ZGMTR_DEPRECATED("Please use MTRAccessControlClusterAccessControlTargetStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRAccessControlClusterAccessControlEntryStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull privilege ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull authMode ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nullable subjects ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nullable targets ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRAccessControlClusterAccessControlEntryStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRAccessControlClusterAccessControlEntry : ZGMTRAccessControlClusterAccessControlEntryStruct
@property (nonatomic, copy) NSNumber * _Nonnull privilege ZGMTR_DEPRECATED("Please use MTRAccessControlClusterAccessControlEntryStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull authMode ZGMTR_DEPRECATED("Please use MTRAccessControlClusterAccessControlEntryStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nullable subjects ZGMTR_DEPRECATED("Please use MTRAccessControlClusterAccessControlEntryStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nullable targets ZGMTR_DEPRECATED("Please use MTRAccessControlClusterAccessControlEntryStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_DEPRECATED("Please use MTRAccessControlClusterAccessControlEntryStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRAccessControlClusterAccessControlExtensionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nonnull data ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRAccessControlClusterAccessControlExtensionStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRAccessControlClusterExtensionEntry : ZGMTRAccessControlClusterAccessControlExtensionStruct
@property (nonatomic, copy) NSData * _Nonnull data ZGMTR_DEPRECATED("Please use MTRAccessControlClusterAccessControlExtensionStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_DEPRECATED("Please use MTRAccessControlClusterAccessControlExtensionStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRAccessControlClusterAccessControlEntryChangedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable adminNodeID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable adminPasscodeID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull changeType ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) ZGMTRAccessControlClusterAccessControlEntryStruct * _Nullable latestValue ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRAccessControlClusterAccessControlExtensionChangedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable adminNodeID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable adminPasscodeID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull changeType ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) ZGMTRAccessControlClusterAccessControlExtensionStruct * _Nullable latestValue ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRAccessControlClusterFabricRestrictionReviewUpdateEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull token ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable instruction ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable arlRequestFlowUrl ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRActionsClusterActionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull actionID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull type ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull endpointListID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull supportedCommands ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull state ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRActionsClusterEndpointListStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull endpointListID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull type ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSArray * _Nonnull endpoints ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRActionsClusterStateChangedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull actionID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull invokeID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy, getter=getNewState) NSNumber * _Nonnull newState ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRActionsClusterActionFailedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull actionID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull invokeID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy, getter=getNewState) NSNumber * _Nonnull newState ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull error ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRBasicInformationClusterCapabilityMinimaStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull caseSessionsPerFabric ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull subscriptionsPerFabric ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRBasicInformationClusterCapabilityMinimaStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRBasicClusterCapabilityMinimaStruct : ZGMTRBasicInformationClusterCapabilityMinimaStruct
@property (nonatomic, copy) NSNumber * _Nonnull caseSessionsPerFabric ZGMTR_DEPRECATED("Please use MTRBasicInformationClusterCapabilityMinimaStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull subscriptionsPerFabric ZGMTR_DEPRECATED("Please use MTRBasicInformationClusterCapabilityMinimaStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0))
@interface ZGMTRBasicInformationClusterProductAppearanceStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull finish ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nullable primaryColor ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRBasicInformationClusterStartUpEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull softwareVersion ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRBasicInformationClusterStartUpEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRBasicClusterStartUpEvent : ZGMTRBasicInformationClusterStartUpEvent
@property (nonatomic, copy) NSNumber * _Nonnull softwareVersion ZGMTR_DEPRECATED("Please use MTRBasicInformationClusterStartUpEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRBasicInformationClusterShutDownEvent : NSObject <NSCopying>
@end

ZGMTR_DEPRECATED("Please use MTRBasicInformationClusterShutDownEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRBasicClusterShutDownEvent : ZGMTRBasicInformationClusterShutDownEvent
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRBasicInformationClusterLeaveEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRBasicInformationClusterLeaveEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRBasicClusterLeaveEvent : ZGMTRBasicInformationClusterLeaveEvent
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_DEPRECATED("Please use MTRBasicInformationClusterLeaveEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRBasicInformationClusterReachableChangedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull reachableNewValue ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRBasicInformationClusterReachableChangedEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRBasicClusterReachableChangedEvent : ZGMTRBasicInformationClusterReachableChangedEvent
@property (nonatomic, copy) NSNumber * _Nonnull reachableNewValue ZGMTR_DEPRECATED("Please use MTRBasicInformationClusterReachableChangedEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTROTASoftwareUpdateRequestorClusterProviderLocation : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull providerNodeID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull endpoint ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTROTASoftwareUpdateRequestorClusterProviderLocation", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTROtaSoftwareUpdateRequestorClusterProviderLocation : ZGMTROTASoftwareUpdateRequestorClusterProviderLocation
@property (nonatomic, copy) NSNumber * _Nonnull providerNodeID ZGMTR_DEPRECATED("Please use MTROTASoftwareUpdateRequestorClusterProviderLocation", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull endpoint ZGMTR_DEPRECATED("Please use MTROTASoftwareUpdateRequestorClusterProviderLocation", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_DEPRECATED("Please use MTROTASoftwareUpdateRequestorClusterProviderLocation", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTROTASoftwareUpdateRequestorClusterStateTransitionEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull previousState ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy, getter=getNewState) NSNumber * _Nonnull newState ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull reason ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable targetSoftwareVersion ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTROTASoftwareUpdateRequestorClusterStateTransitionEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTROtaSoftwareUpdateRequestorClusterStateTransitionEvent : ZGMTROTASoftwareUpdateRequestorClusterStateTransitionEvent
@property (nonatomic, copy) NSNumber * _Nonnull previousState ZGMTR_DEPRECATED("Please use MTROTASoftwareUpdateRequestorClusterStateTransitionEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy, getter=getNewState) NSNumber * _Nonnull newState ZGMTR_DEPRECATED("Please use MTROTASoftwareUpdateRequestorClusterStateTransitionEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull reason ZGMTR_DEPRECATED("Please use MTROTASoftwareUpdateRequestorClusterStateTransitionEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nullable targetSoftwareVersion ZGMTR_DEPRECATED("Please use MTROTASoftwareUpdateRequestorClusterStateTransitionEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTROTASoftwareUpdateRequestorClusterVersionAppliedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull softwareVersion ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull productID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTROTASoftwareUpdateRequestorClusterVersionAppliedEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTROtaSoftwareUpdateRequestorClusterVersionAppliedEvent : ZGMTROTASoftwareUpdateRequestorClusterVersionAppliedEvent
@property (nonatomic, copy) NSNumber * _Nonnull softwareVersion ZGMTR_DEPRECATED("Please use MTROTASoftwareUpdateRequestorClusterVersionAppliedEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull productID ZGMTR_DEPRECATED("Please use MTROTASoftwareUpdateRequestorClusterVersionAppliedEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTROTASoftwareUpdateRequestorClusterDownloadErrorEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull softwareVersion ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull bytesDownloaded ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable progressPercent ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable platformCode ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTROTASoftwareUpdateRequestorClusterDownloadErrorEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTROtaSoftwareUpdateRequestorClusterDownloadErrorEvent : ZGMTROTASoftwareUpdateRequestorClusterDownloadErrorEvent
@property (nonatomic, copy) NSNumber * _Nonnull softwareVersion ZGMTR_DEPRECATED("Please use MTROTASoftwareUpdateRequestorClusterDownloadErrorEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull bytesDownloaded ZGMTR_DEPRECATED("Please use MTROTASoftwareUpdateRequestorClusterDownloadErrorEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nullable progressPercent ZGMTR_DEPRECATED("Please use MTROTASoftwareUpdateRequestorClusterDownloadErrorEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nullable platformCode ZGMTR_DEPRECATED("Please use MTROTASoftwareUpdateRequestorClusterDownloadErrorEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_DEPRECATED("This struct is unused and will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRPowerSourceClusterBatChargeFaultChangeType : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current ZGMTR_DEPRECATED("Please use MTRPowerSourceClusterBatChargeFaultChangeType", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nonnull previous ZGMTR_DEPRECATED("Please use MTRPowerSourceClusterBatChargeFaultChangeType", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_DEPRECATED("This struct is unused and will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRPowerSourceClusterBatFaultChangeType : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current ZGMTR_DEPRECATED("Please use MTRPowerSourceClusterBatFaultChangeType", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nonnull previous ZGMTR_DEPRECATED("Please use MTRPowerSourceClusterBatFaultChangeType", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_DEPRECATED("This struct is unused and will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRPowerSourceClusterWiredFaultChangeType : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current ZGMTR_DEPRECATED("Please use MTRPowerSourceClusterWiredFaultChangeType", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nonnull previous ZGMTR_DEPRECATED("Please use MTRPowerSourceClusterWiredFaultChangeType", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRPowerSourceClusterWiredFaultChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull previous ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRPowerSourceClusterBatFaultChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull previous ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRPowerSourceClusterBatChargeFaultChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull previous ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGeneralCommissioningClusterBasicCommissioningInfo : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull failSafeExpiryLengthSeconds ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull maxCumulativeFailsafeSeconds ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0))
@interface ZGMTRNetworkCommissioningClusterNetworkInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nonnull networkID ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull connected ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSData * _Nullable networkIdentifier ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSData * _Nullable clientIdentifier ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterNetworkInfoStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0))
@interface ZGMTRNetworkCommissioningClusterNetworkInfo : ZGMTRNetworkCommissioningClusterNetworkInfoStruct
@property (nonatomic, copy) NSData * _Nonnull networkID ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterNetworkInfoStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull connected ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterNetworkInfoStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@end

ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0))
@interface ZGMTRNetworkCommissioningClusterThreadInterfaceScanResultStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull panId ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull extendedPanId ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSString * _Nonnull networkName ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull channel ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull version ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSData * _Nonnull extendedAddress ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull rssi ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull lqi ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterThreadInterfaceScanResultStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0))
@interface ZGMTRNetworkCommissioningClusterThreadInterfaceScanResult : ZGMTRNetworkCommissioningClusterThreadInterfaceScanResultStruct
@property (nonatomic, copy) NSNumber * _Nonnull panId ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterThreadInterfaceScanResultStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull extendedPanId ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterThreadInterfaceScanResultStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSString * _Nonnull networkName ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterThreadInterfaceScanResultStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull channel ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterThreadInterfaceScanResultStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull version ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterThreadInterfaceScanResultStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSData * _Nonnull extendedAddress ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterThreadInterfaceScanResultStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull rssi ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterThreadInterfaceScanResultStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull lqi ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterThreadInterfaceScanResultStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@end

ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0))
@interface ZGMTRNetworkCommissioningClusterWiFiInterfaceScanResultStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull security ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSData * _Nonnull ssid ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSData * _Nonnull bssid ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull channel ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull wiFiBand ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull rssi ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterWiFiInterfaceScanResultStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0))
@interface ZGMTRNetworkCommissioningClusterWiFiInterfaceScanResult : ZGMTRNetworkCommissioningClusterWiFiInterfaceScanResultStruct
@property (nonatomic, copy) NSNumber * _Nonnull security ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterWiFiInterfaceScanResultStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSData * _Nonnull ssid ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterWiFiInterfaceScanResultStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSData * _Nonnull bssid ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterWiFiInterfaceScanResultStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull channel ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterWiFiInterfaceScanResultStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull wiFiBand ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterWiFiInterfaceScanResultStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull rssi ZGMTR_DEPRECATED("Please use MTRNetworkCommissioningClusterWiFiInterfaceScanResultStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRGeneralDiagnosticsClusterNetworkInterface : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull isOperational ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable offPremiseServicesReachableIPv4 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable offPremiseServicesReachableIPv6 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSData * _Nonnull hardwareAddress ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull iPv4Addresses ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull iPv6Addresses ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull type ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRGeneralDiagnosticsClusterNetworkInterface", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRGeneralDiagnosticsClusterNetworkInterfaceType : ZGMTRGeneralDiagnosticsClusterNetworkInterface
@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_DEPRECATED("Please use MTRGeneralDiagnosticsClusterNetworkInterface", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull isOperational ZGMTR_DEPRECATED("Please use MTRGeneralDiagnosticsClusterNetworkInterface", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nullable offPremiseServicesReachableIPv4 ZGMTR_DEPRECATED("Please use MTRGeneralDiagnosticsClusterNetworkInterface", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nullable offPremiseServicesReachableIPv6 ZGMTR_DEPRECATED("Please use MTRGeneralDiagnosticsClusterNetworkInterface", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSData * _Nonnull hardwareAddress ZGMTR_DEPRECATED("Please use MTRGeneralDiagnosticsClusterNetworkInterface", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nonnull iPv4Addresses ZGMTR_DEPRECATED("Please use MTRGeneralDiagnosticsClusterNetworkInterface", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nonnull iPv6Addresses ZGMTR_DEPRECATED("Please use MTRGeneralDiagnosticsClusterNetworkInterface", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull type ZGMTR_DEPRECATED("Please use MTRGeneralDiagnosticsClusterNetworkInterface", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGeneralDiagnosticsClusterHardwareFaultChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSArray * _Nonnull previous ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGeneralDiagnosticsClusterRadioFaultChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSArray * _Nonnull previous ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGeneralDiagnosticsClusterNetworkFaultChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSArray * _Nonnull previous ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGeneralDiagnosticsClusterBootReasonEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull bootReason ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRSoftwareDiagnosticsClusterThreadMetricsStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull id ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable name ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable stackFreeCurrent ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable stackFreeMinimum ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable stackSize ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRSoftwareDiagnosticsClusterThreadMetricsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRSoftwareDiagnosticsClusterThreadMetrics : ZGMTRSoftwareDiagnosticsClusterThreadMetricsStruct
@property (nonatomic, copy) NSNumber * _Nonnull id ZGMTR_DEPRECATED("Please use MTRSoftwareDiagnosticsClusterThreadMetricsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSString * _Nullable name ZGMTR_DEPRECATED("Please use MTRSoftwareDiagnosticsClusterThreadMetricsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nullable stackFreeCurrent ZGMTR_DEPRECATED("Please use MTRSoftwareDiagnosticsClusterThreadMetricsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nullable stackFreeMinimum ZGMTR_DEPRECATED("Please use MTRSoftwareDiagnosticsClusterThreadMetricsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nullable stackSize ZGMTR_DEPRECATED("Please use MTRSoftwareDiagnosticsClusterThreadMetricsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRSoftwareDiagnosticsClusterSoftwareFaultEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull id ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSString * _Nullable name ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSData * _Nullable faultRecording ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0))
@interface ZGMTRThreadNetworkDiagnosticsClusterNeighborTableStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull extAddress ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull age ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull rloc16 ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull linkFrameCounter ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull mleFrameCounter ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull lqi ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nullable averageRssi ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nullable lastRssi ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull frameErrorRate ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull messageErrorRate ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull rxOnWhenIdle ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull fullThreadDevice ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull fullNetworkData ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull isChild ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterNeighborTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0))
@interface ZGMTRThreadNetworkDiagnosticsClusterNeighborTable : ZGMTRThreadNetworkDiagnosticsClusterNeighborTableStruct
@property (nonatomic, copy) NSNumber * _Nonnull extAddress ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterNeighborTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull age ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterNeighborTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull rloc16 ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterNeighborTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull linkFrameCounter ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterNeighborTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull mleFrameCounter ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterNeighborTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull lqi ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterNeighborTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nullable averageRssi ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterNeighborTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nullable lastRssi ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterNeighborTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull frameErrorRate ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterNeighborTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull messageErrorRate ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterNeighborTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull rxOnWhenIdle ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterNeighborTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull fullThreadDevice ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterNeighborTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull fullNetworkData ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterNeighborTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull isChild ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterNeighborTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRThreadNetworkDiagnosticsClusterOperationalDatasetComponents : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull activeTimestampPresent ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull pendingTimestampPresent ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull masterKeyPresent ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull networkNamePresent ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull extendedPanIdPresent ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull meshLocalPrefixPresent ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull delayPresent ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull panIdPresent ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull channelPresent ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull pskcPresent ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull securityPolicyPresent ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull channelMaskPresent ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0))
@interface ZGMTRThreadNetworkDiagnosticsClusterRouteTableStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull extAddress ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull rloc16 ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull routerId ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull nextHop ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull pathCost ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull lqiIn ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull lqiOut ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull age ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull allocated ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nonnull linkEstablished ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterRouteTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0))
@interface ZGMTRThreadNetworkDiagnosticsClusterRouteTable : ZGMTRThreadNetworkDiagnosticsClusterRouteTableStruct
@property (nonatomic, copy) NSNumber * _Nonnull extAddress ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterRouteTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull rloc16 ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterRouteTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull routerId ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterRouteTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull nextHop ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterRouteTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull pathCost ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterRouteTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull lqiIn ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterRouteTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull lqiOut ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterRouteTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull age ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterRouteTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull allocated ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterRouteTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@property (nonatomic, copy) NSNumber * _Nonnull linkEstablished ZGMTR_DEPRECATED("Please use MTRThreadNetworkDiagnosticsClusterRouteTableStruct", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRThreadNetworkDiagnosticsClusterSecurityPolicy : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull rotationTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull flags ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRThreadNetworkDiagnosticsClusterConnectionStatusEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull connectionStatus ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRThreadNetworkDiagnosticsClusterNetworkFaultChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSArray * _Nonnull previous ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRWiFiNetworkDiagnosticsClusterDisconnectionEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull reasonCode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRWiFiNetworkDiagnosticsClusterAssociationFailureEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull associationFailureCause ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSNumber * _Nonnull associationFailure ZGMTR_DEPRECATED("Please use associationFailureCause", ios(16.1, 17.4), macos(13.0, 14.4), watchos(9.1, 10.4), tvos(16.1, 17.4));
@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRWiFiNetworkDiagnosticsClusterConnectionStatusEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull connectionStatus ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.5), macos(13.4), watchos(9.5), tvos(16.5))
@interface ZGMTRTimeSynchronizationClusterDSTOffsetStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull offset ZGMTR_AVAILABLE(ios(16.5), macos(13.4), watchos(9.5), tvos(16.5));
@property (nonatomic, copy) NSNumber * _Nonnull validStarting ZGMTR_AVAILABLE(ios(16.5), macos(13.4), watchos(9.5), tvos(16.5));
@property (nonatomic, copy) NSNumber * _Nullable validUntil ZGMTR_AVAILABLE(ios(16.5), macos(13.4), watchos(9.5), tvos(16.5));
@end

ZGMTR_DEPRECATED("Please use MTRTimeSynchronizationClusterDSTOffsetStruct", ios(16.1, 16.5), macos(13.0, 13.4), watchos(9.1, 9.5), tvos(16.1, 16.5))
@interface ZGMTRTimeSynchronizationClusterDstOffsetType : ZGMTRTimeSynchronizationClusterDSTOffsetStruct
@property (nonatomic, copy) NSNumber * _Nonnull offset ZGMTR_DEPRECATED("Please use MTRTimeSynchronizationClusterDSTOffsetStruct", ios(16.1, 16.5), macos(13.0, 13.4), watchos(9.1, 9.5), tvos(16.1, 16.5));
@property (nonatomic, copy) NSNumber * _Nonnull validStarting ZGMTR_DEPRECATED("Please use MTRTimeSynchronizationClusterDSTOffsetStruct", ios(16.1, 16.5), macos(13.0, 13.4), watchos(9.1, 9.5), tvos(16.1, 16.5));
@property (nonatomic, copy) NSNumber * _Nullable validUntil ZGMTR_DEPRECATED("Please use MTRTimeSynchronizationClusterDSTOffsetStruct", ios(16.1, 16.5), macos(13.0, 13.4), watchos(9.1, 9.5), tvos(16.1, 16.5));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRTimeSynchronizationClusterFabricScopedTrustedTimeSourceStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull nodeID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull endpoint ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.5), macos(13.4), watchos(9.5), tvos(16.5))
@interface ZGMTRTimeSynchronizationClusterTimeZoneStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull offset ZGMTR_AVAILABLE(ios(16.5), macos(13.4), watchos(9.5), tvos(16.5));
@property (nonatomic, copy) NSNumber * _Nonnull validAt ZGMTR_AVAILABLE(ios(16.5), macos(13.4), watchos(9.5), tvos(16.5));
@property (nonatomic, copy) NSString * _Nullable name ZGMTR_AVAILABLE(ios(16.5), macos(13.4), watchos(9.5), tvos(16.5));
@end

ZGMTR_DEPRECATED("Please use MTRTimeSynchronizationClusterTimeZoneStruct", ios(16.1, 16.5), macos(13.0, 13.4), watchos(9.1, 9.5), tvos(16.1, 16.5))
@interface ZGMTRTimeSynchronizationClusterTimeZoneType : ZGMTRTimeSynchronizationClusterTimeZoneStruct
@property (nonatomic, copy) NSNumber * _Nonnull offset ZGMTR_DEPRECATED("Please use MTRTimeSynchronizationClusterTimeZoneStruct", ios(16.1, 16.5), macos(13.0, 13.4), watchos(9.1, 9.5), tvos(16.1, 16.5));
@property (nonatomic, copy) NSNumber * _Nonnull validAt ZGMTR_DEPRECATED("Please use MTRTimeSynchronizationClusterTimeZoneStruct", ios(16.1, 16.5), macos(13.0, 13.4), watchos(9.1, 9.5), tvos(16.1, 16.5));
@property (nonatomic, copy) NSString * _Nullable name ZGMTR_DEPRECATED("Please use MTRTimeSynchronizationClusterTimeZoneStruct", ios(16.1, 16.5), macos(13.0, 13.4), watchos(9.1, 9.5), tvos(16.1, 16.5));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRTimeSynchronizationClusterTrustedTimeSourceStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull nodeID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull endpoint ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRTimeSynchronizationClusterDSTTableEmptyEvent : NSObject <NSCopying>
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRTimeSynchronizationClusterDSTStatusEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull dstOffsetActive ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRTimeSynchronizationClusterTimeZoneStatusEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull offset ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable name ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRTimeSynchronizationClusterTimeFailureEvent : NSObject <NSCopying>
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRTimeSynchronizationClusterMissingTrustedTimeSourceEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0))
@interface ZGMTRBridgedDeviceBasicInformationClusterProductAppearanceStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull finish ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@property (nonatomic, copy) NSNumber * _Nullable primaryColor ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRBridgedDeviceBasicInformationClusterStartUpEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull softwareVersion ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRBridgedDeviceBasicInformationClusterStartUpEvent", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0))
@interface ZGMTRBridgedDeviceBasicClusterStartUpEvent : ZGMTRBridgedDeviceBasicInformationClusterStartUpEvent
@property (nonatomic, copy) NSNumber * _Nonnull softwareVersion ZGMTR_DEPRECATED("Please use MTRBridgedDeviceBasicInformationClusterStartUpEvent", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRBridgedDeviceBasicInformationClusterShutDownEvent : NSObject <NSCopying>
@end

ZGMTR_DEPRECATED("Please use MTRBridgedDeviceBasicInformationClusterShutDownEvent", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0))
@interface ZGMTRBridgedDeviceBasicClusterShutDownEvent : ZGMTRBridgedDeviceBasicInformationClusterShutDownEvent
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRBridgedDeviceBasicInformationClusterLeaveEvent : NSObject <NSCopying>
@end

ZGMTR_DEPRECATED("Please use MTRBridgedDeviceBasicInformationClusterLeaveEvent", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0))
@interface ZGMTRBridgedDeviceBasicClusterLeaveEvent : ZGMTRBridgedDeviceBasicInformationClusterLeaveEvent
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRBridgedDeviceBasicInformationClusterReachableChangedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull reachableNewValue ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRBridgedDeviceBasicInformationClusterReachableChangedEvent", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0))
@interface ZGMTRBridgedDeviceBasicClusterReachableChangedEvent : ZGMTRBridgedDeviceBasicInformationClusterReachableChangedEvent
@property (nonatomic, copy) NSNumber * _Nonnull reachableNewValue ZGMTR_DEPRECATED("Please use MTRBridgedDeviceBasicInformationClusterReachableChangedEvent", ios(16.1, 17.0), macos(13.0, 14.0), watchos(9.1, 10.0), tvos(16.1, 17.0));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRBridgedDeviceBasicInformationClusterActiveChangedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull promisedActiveDuration ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRSwitchClusterSwitchLatchedEvent : NSObject <NSCopying>
@property (nonatomic, copy, getter=getNewPosition) NSNumber * _Nonnull newPosition ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRSwitchClusterInitialPressEvent : NSObject <NSCopying>
@property (nonatomic, copy, getter=getNewPosition) NSNumber * _Nonnull newPosition ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRSwitchClusterLongPressEvent : NSObject <NSCopying>
@property (nonatomic, copy, getter=getNewPosition) NSNumber * _Nonnull newPosition ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRSwitchClusterShortReleaseEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull previousPosition ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRSwitchClusterLongReleaseEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull previousPosition ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRSwitchClusterMultiPressOngoingEvent : NSObject <NSCopying>
@property (nonatomic, copy, getter=getNewPosition) NSNumber * _Nonnull newPosition ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull currentNumberOfPressesCounted ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRSwitchClusterMultiPressCompleteEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull previousPosition ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy, getter=getNewPosition) NSNumber * _Nonnull newPosition ZGMTR_DEPRECATED("Please use previousPosition", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull totalNumberOfPressesCounted ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTROperationalCredentialsClusterFabricDescriptorStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nonnull rootPublicKey ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull vendorID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull vendorId ZGMTR_DEPRECATED("Please use vendorID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricId ZGMTR_DEPRECATED("Please use fabricID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull nodeID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull nodeId ZGMTR_DEPRECATED("Please use nodeID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@property (nonatomic, copy) NSString * _Nonnull label ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTROperationalCredentialsClusterFabricDescriptorStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTROperationalCredentialsClusterFabricDescriptor : ZGMTROperationalCredentialsClusterFabricDescriptorStruct
@property (nonatomic, copy) NSData * _Nonnull rootPublicKey ZGMTR_DEPRECATED("Please use MTROperationalCredentialsClusterFabricDescriptorStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSString * _Nonnull label ZGMTR_DEPRECATED("Please use MTROperationalCredentialsClusterFabricDescriptorStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_DEPRECATED("Please use MTROperationalCredentialsClusterFabricDescriptorStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROperationalCredentialsClusterNOCStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nonnull noc ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSData * _Nullable icac ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupKeyManagementClusterGroupInfoMapStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull groupId ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSArray * _Nonnull endpoints ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSString * _Nullable groupName ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupKeyManagementClusterGroupKeyMapStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull groupId ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull groupKeySetID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupKeyManagementClusterGroupKeySetStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull groupKeySetID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull groupKeySecurityPolicy ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSData * _Nullable epochKey0 ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable epochStartTime0 ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSData * _Nullable epochKey1 ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable epochStartTime1 ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSData * _Nullable epochKey2 ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable epochStartTime2 ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRFixedLabelClusterLabelStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull label ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSString * _Nonnull value ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRUserLabelClusterLabelStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull label ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSString * _Nonnull value ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRBooleanStateClusterStateChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull stateValue ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRICDManagementClusterMonitoringRegistrationStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull checkInNodeID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull monitoredSubject ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull clientType ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTROvenCavityOperationalStateClusterErrorStateStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull errorStateID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable errorStateLabel ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable errorStateDetails ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTROvenCavityOperationalStateClusterOperationalStateStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull operationalStateID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable operationalStateLabel ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTROvenCavityOperationalStateClusterOperationalErrorEvent : NSObject <NSCopying>
@property (nonatomic, copy) ZGMTROvenCavityOperationalStateClusterErrorStateStruct * _Nonnull errorState ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTROvenCavityOperationalStateClusterOperationCompletionEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull completionErrorCode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable totalOperationalTime ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable pausedTime ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTROvenModeClusterModeTagStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable mfgCode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTROvenModeClusterModeOptionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull label ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull mode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nonnull modeTags ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRModeSelectClusterSemanticTagStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull mfgCode ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRModeSelectClusterSemanticTagStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRModeSelectClusterSemanticTag : ZGMTRModeSelectClusterSemanticTagStruct
@property (nonatomic, copy) NSNumber * _Nonnull mfgCode ZGMTR_DEPRECATED("Please use MTRModeSelectClusterSemanticTagStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_DEPRECATED("Please use MTRModeSelectClusterSemanticTagStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRModeSelectClusterModeOptionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull label ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull mode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSArray * _Nonnull semanticTags ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRLaundryWasherModeClusterModeTagStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable mfgCode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRLaundryWasherModeClusterModeOptionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull label ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull mode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nonnull modeTags ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRRefrigeratorAndTemperatureControlledCabinetModeClusterModeTagStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable mfgCode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRRefrigeratorAndTemperatureControlledCabinetModeClusterModeOptionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull label ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull mode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nonnull modeTags ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTRRVCRunModeClusterModeTagStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable mfgCode ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTRRVCRunModeClusterModeOptionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull label ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSNumber * _Nonnull mode ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSArray * _Nonnull modeTags ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTRRVCCleanModeClusterModeTagStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable mfgCode ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTRRVCCleanModeClusterModeOptionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull label ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSNumber * _Nonnull mode ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSArray * _Nonnull modeTags ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRRefrigeratorAlarmClusterNotifyEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull active ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull inactive ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull state ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull mask ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDishwasherModeClusterModeTagStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable mfgCode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDishwasherModeClusterModeOptionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull label ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull mode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nonnull modeTags ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRSmokeCOAlarmClusterSmokeAlarmEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull alarmSeverityLevel ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRSmokeCOAlarmClusterCOAlarmEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull alarmSeverityLevel ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRSmokeCOAlarmClusterLowBatteryEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull alarmSeverityLevel ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRSmokeCOAlarmClusterHardwareFaultEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRSmokeCOAlarmClusterEndOfServiceEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRSmokeCOAlarmClusterSelfTestCompleteEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRSmokeCOAlarmClusterAlarmMutedEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRSmokeCOAlarmClusterMuteEndedEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRSmokeCOAlarmClusterInterconnectSmokeAlarmEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull alarmSeverityLevel ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRSmokeCOAlarmClusterInterconnectCOAlarmEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull alarmSeverityLevel ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRSmokeCOAlarmClusterAllClearEvent : NSObject <NSCopying>
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDishwasherAlarmClusterNotifyEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull active ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull inactive ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull state ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull mask ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRMicrowaveOvenModeClusterModeTagStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable mfgCode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRMicrowaveOvenModeClusterModeOptionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull label ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull mode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nonnull modeTags ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTROperationalStateClusterErrorStateStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull errorStateID ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSString * _Nullable errorStateLabel ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSString * _Nullable errorStateDetails ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTROperationalStateClusterOperationalStateStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull operationalStateID ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSString * _Nullable operationalStateLabel ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTROperationalStateClusterOperationalErrorEvent : NSObject <NSCopying>
@property (nonatomic, copy) ZGMTROperationalStateClusterErrorStateStruct * _Nonnull errorState ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTROperationalStateClusterOperationCompletionEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull completionErrorCode ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSNumber * _Nullable totalOperationalTime ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSNumber * _Nullable pausedTime ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTRRVCOperationalStateClusterErrorStateStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull errorStateID ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSString * _Nullable errorStateLabel ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSString * _Nullable errorStateDetails ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTRRVCOperationalStateClusterOperationalStateStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull operationalStateID ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSString * _Nullable operationalStateLabel ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTRRVCOperationalStateClusterOperationalErrorEvent : NSObject <NSCopying>
@property (nonatomic, copy) ZGMTRRVCOperationalStateClusterErrorStateStruct * _Nonnull errorState ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTRRVCOperationalStateClusterOperationCompletionEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull completionErrorCode ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSNumber * _Nullable totalOperationalTime ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSNumber * _Nullable pausedTime ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRScenesManagementClusterAttributeValuePairStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull attributeID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable valueUnsigned8 ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable valueSigned8 ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable valueUnsigned16 ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable valueSigned16 ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable valueUnsigned32 ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable valueSigned32 ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable valueUnsigned64 ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable valueSigned64 ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRScenesManagementClusterExtensionFieldSet : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull clusterID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nonnull attributeValueList ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRScenesManagementClusterSceneInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull sceneCount ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull currentScene ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull currentGroup ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull sceneValid ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull remainingCapacity ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRHEPAFilterMonitoringClusterReplacementProductStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull productIdentifierType ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSString * _Nonnull productIdentifierValue ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRActivatedCarbonFilterMonitoringClusterReplacementProductStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull productIdentifierType ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSString * _Nonnull productIdentifierValue ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRBooleanStateConfigurationClusterAlarmsStateChangedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull alarmsActive ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable alarmsSuppressed ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRBooleanStateConfigurationClusterSensorFaultEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull sensorFault ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRValveConfigurationAndControlClusterValveStateChangedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull valveState ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable valveLevel ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRValveConfigurationAndControlClusterValveFaultEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull valveFault ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRElectricalPowerMeasurementClusterMeasurementAccuracyRangeStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull rangeMin ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nonnull rangeMax ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable percentMax ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable percentMin ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable percentTypical ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable fixedMax ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable fixedMin ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable fixedTypical ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRElectricalPowerMeasurementClusterMeasurementAccuracyStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull measurementType ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nonnull measured ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nonnull minMeasuredValue ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nonnull maxMeasuredValue ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSArray * _Nonnull accuracyRanges ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRElectricalPowerMeasurementClusterHarmonicMeasurementStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull order ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable measurement ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRElectricalPowerMeasurementClusterMeasurementRangeStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull measurementType ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nonnull min ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nonnull max ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable startTimestamp ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable endTimestamp ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable minTimestamp ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable maxTimestamp ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable startSystime ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable endSystime ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable minSystime ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable maxSystime ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRElectricalPowerMeasurementClusterMeasurementPeriodRangesEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull ranges ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRElectricalEnergyMeasurementClusterMeasurementAccuracyRangeStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull rangeMin ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nonnull rangeMax ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable percentMax ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable percentMin ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable percentTypical ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable fixedMax ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable fixedMin ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable fixedTypical ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRElectricalEnergyMeasurementClusterMeasurementAccuracyStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull measurementType ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nonnull measured ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nonnull minMeasuredValue ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nonnull maxMeasuredValue ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSArray * _Nonnull accuracyRanges ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRElectricalEnergyMeasurementClusterCumulativeEnergyResetStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable importedResetTimestamp ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable exportedResetTimestamp ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable importedResetSystime ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable exportedResetSystime ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull energy ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable startTimestamp ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable endTimestamp ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable startSystime ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) NSNumber * _Nullable endSystime ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRElectricalEnergyMeasurementClusterCumulativeEnergyMeasuredEvent : NSObject <NSCopying>
@property (nonatomic, copy) ZGMTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct * _Nullable energyImported ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) ZGMTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct * _Nullable energyExported ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRElectricalEnergyMeasurementClusterPeriodicEnergyMeasuredEvent : NSObject <NSCopying>
@property (nonatomic, copy) ZGMTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct * _Nullable energyImported ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@property (nonatomic, copy) ZGMTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct * _Nullable energyExported ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWaterHeaterManagementClusterWaterHeaterBoostInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull duration ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable oneShot ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable emergencyBoost ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable temporarySetpoint ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable targetPercentage ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable targetReheat ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWaterHeaterManagementClusterBoostStartedEvent : NSObject <NSCopying>
@property (nonatomic, copy) ZGMTRWaterHeaterManagementClusterWaterHeaterBoostInfoStruct * _Nonnull boostInfo ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWaterHeaterManagementClusterBoostEndedEvent : NSObject <NSCopying>
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDemandResponseLoadControlClusterHeatingSourceControlStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull heatingSource ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDemandResponseLoadControlClusterPowerSavingsControlStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull powerSavings ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDemandResponseLoadControlClusterDutyCycleControlStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull dutyCycle ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDemandResponseLoadControlClusterAverageLoadControlStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull loadAdjustment ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDemandResponseLoadControlClusterTemperatureControlStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable coolingTempOffset ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable heatingtTempOffset ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable coolingTempSetpoint ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable heatingTempSetpoint ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDemandResponseLoadControlClusterLoadControlEventTransitionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull duration ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull control ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRDemandResponseLoadControlClusterTemperatureControlStruct * _Nullable temperatureControl ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRDemandResponseLoadControlClusterAverageLoadControlStruct * _Nullable averageLoadControl ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRDemandResponseLoadControlClusterDutyCycleControlStruct * _Nullable dutyCycleControl ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRDemandResponseLoadControlClusterPowerSavingsControlStruct * _Nullable powerSavingsControl ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRDemandResponseLoadControlClusterHeatingSourceControlStruct * _Nullable heatingSourceControl ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDemandResponseLoadControlClusterLoadControlEventStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nonnull eventID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSData * _Nullable programID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull control ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull deviceClass ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable enrollmentGroup ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull criticality ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable startTime ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nonnull transitions ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDemandResponseLoadControlClusterLoadControlProgramStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nonnull programID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable enrollmentGroup ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable randomStartMinutes ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable randomDurationMinutes ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDemandResponseLoadControlClusterLoadControlEventStatusChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nonnull eventID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable transitionIndex ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull criticality ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull control ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRDemandResponseLoadControlClusterTemperatureControlStruct * _Nullable temperatureControl ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRDemandResponseLoadControlClusterAverageLoadControlStruct * _Nullable averageLoadControl ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRDemandResponseLoadControlClusterDutyCycleControlStruct * _Nullable dutyCycleControl ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRDemandResponseLoadControlClusterPowerSavingsControlStruct * _Nullable powerSavingsControl ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRDemandResponseLoadControlClusterHeatingSourceControlStruct * _Nullable heatingSourceControl ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRMessagesClusterMessageResponseOptionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable messageResponseID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable label ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRMessagesClusterMessageStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nonnull messageID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull priority ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull messageControl ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable startTime ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable duration ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nonnull messageText ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nullable responses ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRMessagesClusterMessageQueuedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nonnull messageID ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRMessagesClusterMessagePresentedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nonnull messageID ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRMessagesClusterMessageCompleteEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nonnull messageID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable responseID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable reply ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable futureMessagesPreference ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterCostStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull costType ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull decimalPoints ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable currency ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterPowerAdjustStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull minPower ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull maxPower ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull minDuration ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull maxDuration ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterPowerAdjustCapabilityStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nullable powerAdjustCapability ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull cause ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterSlotStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull minDuration ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull maxDuration ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull defaultDuration ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull elapsedSlotTime ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull remainingSlotTime ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable slotIsPausable ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable minPauseDuration ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable maxPauseDuration ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable manufacturerESAState ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable nominalPower ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable minPower ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable maxPower ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable nominalEnergy ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nullable costs ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable minPowerAdjustment ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable maxPowerAdjustment ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable minDurationAdjustment ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable maxDurationAdjustment ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterForecastStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull forecastID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable activeSlotNumber ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull startTime ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull endTime ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable earliestStartTime ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable latestEndTime ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull isPausable ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nonnull slots ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull forecastUpdateReason ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterConstraintsStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull startTime ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull duration ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable nominalPower ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable maximumEnergy ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable loadControl ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterSlotAdjustmentStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull slotIndex ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable nominalPower ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull duration ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterPowerAdjustStartEvent : NSObject <NSCopying>
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterPowerAdjustEndEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull cause ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull duration ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull energyUse ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterPausedEvent : NSObject <NSCopying>
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterResumedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull cause ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEClusterChargingTargetStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull targetTimeMinutesPastMidnight ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable targetSoC ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable addedEnergy ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEClusterChargingTargetScheduleStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull dayOfWeekForSequence ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nonnull chargingTargets ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEClusterEVConnectedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull sessionID ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEClusterEVNotDetectedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull sessionID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull state ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull sessionDuration ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull sessionEnergyCharged ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable sessionEnergyDischarged ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEClusterEnergyTransferStartedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull sessionID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull state ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull maximumCurrent ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable maximumDischargeCurrent ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEClusterEnergyTransferStoppedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull sessionID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull state ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull reason ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull energyTransferred ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable energyDischarged ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEClusterFaultEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable sessionID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull state ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull faultStatePreviousState ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull faultStateCurrentState ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEClusterRFIDEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nonnull uid ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyPreferenceClusterBalanceStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull step ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable label ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEModeClusterModeTagStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable mfgCode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEModeClusterModeOptionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull label ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull mode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nonnull modeTags ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWaterHeaterModeClusterModeTagStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable mfgCode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWaterHeaterModeClusterModeOptionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull label ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull mode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nonnull modeTags ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementModeClusterModeTagStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable mfgCode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementModeClusterModeOptionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull label ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull mode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nonnull modeTags ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRDoorLockClusterCredentialStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull credentialType ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull credentialIndex ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRDoorLockClusterCredentialStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRDoorLockClusterDlCredential : ZGMTRDoorLockClusterCredentialStruct
@property (nonatomic, copy) NSNumber * _Nonnull credentialType ZGMTR_DEPRECATED("Please use MTRDoorLockClusterCredentialStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull credentialIndex ZGMTR_DEPRECATED("Please use MTRDoorLockClusterCredentialStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterDoorLockAlarmEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull alarmCode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterDoorStateChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull doorState ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterLockOperationEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull lockOperationType ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull operationSource ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable userIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable fabricIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable sourceNode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSArray * _Nullable credentials ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterLockOperationErrorEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull lockOperationType ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull operationSource ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull operationError ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable userIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable fabricIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable sourceNode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSArray * _Nullable credentials ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterLockUserChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull lockDataType ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull dataOperationType ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull operationSource ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable userIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable fabricIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable sourceNode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable dataIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRServiceAreaClusterLandmarkInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull landmarkTag ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable relativePositionTag ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRServiceAreaClusterAreaInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) ZGMTRDataTypeLocationDescriptorStruct * _Nullable locationInfo ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRServiceAreaClusterLandmarkInfoStruct * _Nullable landmarkInfo ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRServiceAreaClusterAreaStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull areaID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable mapID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRServiceAreaClusterAreaInfoStruct * _Nonnull areaInfo ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRServiceAreaClusterMapStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull mapID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRServiceAreaClusterProgressStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull areaID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable totalOperationalTime ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable estimatedTime ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRPumpConfigurationAndControlClusterSupplyVoltageLowEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRPumpConfigurationAndControlClusterSupplyVoltageHighEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRPumpConfigurationAndControlClusterPowerMissingPhaseEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRPumpConfigurationAndControlClusterSystemPressureLowEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRPumpConfigurationAndControlClusterSystemPressureHighEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRPumpConfigurationAndControlClusterDryRunningEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRPumpConfigurationAndControlClusterMotorTemperatureHighEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRPumpConfigurationAndControlClusterPumpMotorFatalFailureEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRPumpConfigurationAndControlClusterElectronicTemperatureHighEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRPumpConfigurationAndControlClusterPumpBlockedEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRPumpConfigurationAndControlClusterSensorFailureEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRPumpConfigurationAndControlClusterElectronicNonFatalFailureEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRPumpConfigurationAndControlClusterElectronicFatalFailureEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRPumpConfigurationAndControlClusterGeneralFaultEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRPumpConfigurationAndControlClusterLeakageEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRPumpConfigurationAndControlClusterAirDetectionEvent : NSObject <NSCopying>
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRPumpConfigurationAndControlClusterTurbineOperationEvent : NSObject <NSCopying>
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThermostatClusterScheduleTransitionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull dayOfWeek ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull transitionTime ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSData * _Nullable presetHandle ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable systemMode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable coolingSetpoint ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable heatingSetpoint ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThermostatClusterScheduleStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nullable scheduleHandle ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull systemMode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable name ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSData * _Nullable presetHandle ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nonnull transitions ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable builtIn ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThermostatClusterPresetStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nullable presetHandle ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull presetScenario ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable name ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable coolingSetpoint ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable heatingSetpoint ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable builtIn ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThermostatClusterPresetTypeStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull presetScenario ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull numberOfPresets ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull presetTypeFeatures ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThermostatClusterScheduleTypeStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull systemMode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull numberOfSchedules ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull scheduleTypeFeatures ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTRThermostatClusterWeeklyScheduleTransitionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull transitionTime ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSNumber * _Nullable heatSetpoint ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@property (nonatomic, copy) NSNumber * _Nullable coolSetpoint ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@end

ZGMTR_DEPRECATED("Please use MTRThermostatClusterWeeklyScheduleTransitionStruct", ios(16.1, 17.4), macos(13.0, 14.4), watchos(9.1, 10.4), tvos(16.1, 17.4))
@interface ZGMTRThermostatClusterThermostatScheduleTransition : ZGMTRThermostatClusterWeeklyScheduleTransitionStruct
@property (nonatomic, copy) NSNumber * _Nonnull transitionTime ZGMTR_DEPRECATED("Please use MTRThermostatClusterWeeklyScheduleTransitionStruct", ios(16.1, 17.4), macos(13.0, 14.4), watchos(9.1, 10.4), tvos(16.1, 17.4));
@property (nonatomic, copy) NSNumber * _Nullable heatSetpoint ZGMTR_DEPRECATED("Please use MTRThermostatClusterWeeklyScheduleTransitionStruct", ios(16.1, 17.4), macos(13.0, 14.4), watchos(9.1, 10.4), tvos(16.1, 17.4));
@property (nonatomic, copy) NSNumber * _Nullable coolSetpoint ZGMTR_DEPRECATED("Please use MTRThermostatClusterWeeklyScheduleTransitionStruct", ios(16.1, 17.4), macos(13.0, 14.4), watchos(9.1, 10.4), tvos(16.1, 17.4));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTROccupancySensingClusterHoldTimeLimitsStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull holdTimeMin ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull holdTimeMax ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull holdTimeDefault ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTROccupancySensingClusterOccupancyChangedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull occupancy ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThreadNetworkDirectoryClusterThreadNetworkStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nonnull extendedPanID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nonnull networkName ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull channel ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull activeTimestamp ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRChannelClusterProgramCastStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nonnull role ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRChannelClusterProgramCategoryStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull category ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable subCategory ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRChannelClusterSeriesInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull season ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nonnull episode ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRChannelClusterChannelInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull majorNumber ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull minorNumber ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable name ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable callSign ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable affiliateCallSign ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable identifier ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable type ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_DEPRECATED("Please use MTRChannelClusterChannelInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRChannelClusterChannelInfo : ZGMTRChannelClusterChannelInfoStruct
@property (nonatomic, copy) NSNumber * _Nonnull majorNumber ZGMTR_DEPRECATED("Please use MTRChannelClusterChannelInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull minorNumber ZGMTR_DEPRECATED("Please use MTRChannelClusterChannelInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSString * _Nullable name ZGMTR_DEPRECATED("Please use MTRChannelClusterChannelInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSString * _Nullable callSign ZGMTR_DEPRECATED("Please use MTRChannelClusterChannelInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSString * _Nullable affiliateCallSign ZGMTR_DEPRECATED("Please use MTRChannelClusterChannelInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRChannelClusterProgramStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull identifier ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRChannelClusterChannelInfoStruct * _Nonnull channel ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull startTime ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull endTime ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nonnull title ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable subtitle ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable descriptionString ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nullable audioLanguages ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nullable ratings ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable thumbnailUrl ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable posterArtUrl ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable dvbiUrl ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable releaseDate ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable parentalGuidanceText ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable recordingFlag ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRChannelClusterSeriesInfoStruct * _Nullable seriesInfo ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nullable categoryList ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nullable castList ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nullable externalIDList ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRChannelClusterPageTokenStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable limit ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable after ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable before ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRChannelClusterChannelPagingStruct : NSObject <NSCopying>
@property (nonatomic, copy) ZGMTRChannelClusterPageTokenStruct * _Nullable previousToken ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRChannelClusterPageTokenStruct * _Nullable nextToken ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRChannelClusterAdditionalInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nonnull value ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRChannelClusterLineupInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull operatorName ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable lineupName ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable postalCode ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull lineupInfoType ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRChannelClusterLineupInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRChannelClusterLineupInfo : ZGMTRChannelClusterLineupInfoStruct
@property (nonatomic, copy) NSString * _Nonnull operatorName ZGMTR_DEPRECATED("Please use MTRChannelClusterLineupInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSString * _Nullable lineupName ZGMTR_DEPRECATED("Please use MTRChannelClusterLineupInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSString * _Nullable postalCode ZGMTR_DEPRECATED("Please use MTRChannelClusterLineupInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull lineupInfoType ZGMTR_DEPRECATED("Please use MTRChannelClusterLineupInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRTargetNavigatorClusterTargetInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull identifier ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRTargetNavigatorClusterTargetInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTargetNavigatorClusterTargetInfo : ZGMTRTargetNavigatorClusterTargetInfoStruct
@property (nonatomic, copy) NSNumber * _Nonnull identifier ZGMTR_DEPRECATED("Please use MTRTargetNavigatorClusterTargetInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_DEPRECATED("Please use MTRTargetNavigatorClusterTargetInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRTargetNavigatorClusterTargetUpdatedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull targetList ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull currentTarget ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSData * _Nonnull data ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRMediaPlaybackClusterTrackAttributesStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull languageCode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable displayName ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRMediaPlaybackClusterTrackStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull id ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRMediaPlaybackClusterTrackAttributesStruct * _Nullable trackAttributes ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRMediaPlaybackClusterPlaybackPositionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull updatedAt ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable position ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRMediaPlaybackClusterPlaybackPositionStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRMediaPlaybackClusterPlaybackPosition : ZGMTRMediaPlaybackClusterPlaybackPositionStruct
@property (nonatomic, copy) NSNumber * _Nonnull updatedAt ZGMTR_DEPRECATED("Please use MTRMediaPlaybackClusterPlaybackPositionStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nullable position ZGMTR_DEPRECATED("Please use MTRMediaPlaybackClusterPlaybackPositionStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRMediaPlaybackClusterStateChangedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull currentState ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull startTime ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull duration ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRMediaPlaybackClusterPlaybackPositionStruct * _Nonnull sampledPosition ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull playbackSpeed ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull seekRangeEnd ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull seekRangeStart ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSData * _Nullable data ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull audioAdvanceUnmuted ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRMediaInputClusterInputInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull index ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull inputType ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull descriptionString ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRMediaInputClusterInputInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRMediaInputClusterInputInfo : ZGMTRMediaInputClusterInputInfoStruct
@property (nonatomic, copy) NSNumber * _Nonnull index ZGMTR_DEPRECATED("Please use MTRMediaInputClusterInputInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull inputType ZGMTR_DEPRECATED("Please use MTRMediaInputClusterInputInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_DEPRECATED("Please use MTRMediaInputClusterInputInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSString * _Nonnull descriptionString ZGMTR_DEPRECATED("Please use MTRMediaInputClusterInputInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRContentLauncherClusterDimensionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull width ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull height ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull metric ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterDimensionStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRContentLauncherClusterDimension : ZGMTRContentLauncherClusterDimensionStruct
@property (nonatomic, copy) NSNumber * _Nonnull width ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterDimensionStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull height ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterDimensionStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull metric ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterDimensionStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRContentLauncherClusterTrackPreferenceStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull languageCode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nullable characteristics ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull audioOutputIndex ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRContentLauncherClusterPlaybackPreferencesStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull playbackPosition ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRContentLauncherClusterTrackPreferenceStruct * _Nonnull textTrack ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nullable audioTracks ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRContentLauncherClusterAdditionalInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull value ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterAdditionalInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRContentLauncherClusterAdditionalInfo : ZGMTRContentLauncherClusterAdditionalInfoStruct
@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterAdditionalInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSString * _Nonnull value ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterAdditionalInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRContentLauncherClusterParameterStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull type ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull value ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nullable externalIDList ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterParameterStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRContentLauncherClusterParameter : ZGMTRContentLauncherClusterParameterStruct
@property (nonatomic, copy) NSNumber * _Nonnull type ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterParameterStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSString * _Nonnull value ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterParameterStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nullable externalIDList ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterParameterStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRContentLauncherClusterContentSearchStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull parameterList ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterContentSearchStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRContentLauncherClusterContentSearch : ZGMTRContentLauncherClusterContentSearchStruct
@property (nonatomic, copy) NSArray * _Nonnull parameterList ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterContentSearchStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRContentLauncherClusterStyleInformationStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nullable imageURL ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable imageUrl ZGMTR_DEPRECATED("Please use imageURL", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@property (nonatomic, copy) NSString * _Nullable color ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) ZGMTRContentLauncherClusterDimensionStruct * _Nullable size ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterStyleInformationStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRContentLauncherClusterStyleInformation : ZGMTRContentLauncherClusterStyleInformationStruct
@property (nonatomic, copy) NSString * _Nullable color ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterStyleInformationStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) ZGMTRContentLauncherClusterDimensionStruct * _Nullable size ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterStyleInformationStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRContentLauncherClusterBrandingInformationStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull providerName ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) ZGMTRContentLauncherClusterStyleInformationStruct * _Nullable background ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) ZGMTRContentLauncherClusterStyleInformationStruct * _Nullable logo ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) ZGMTRContentLauncherClusterStyleInformationStruct * _Nullable progressBar ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) ZGMTRContentLauncherClusterStyleInformationStruct * _Nullable splash ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) ZGMTRContentLauncherClusterStyleInformationStruct * _Nullable waterMark ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterBrandingInformationStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRContentLauncherClusterBrandingInformation : ZGMTRContentLauncherClusterBrandingInformationStruct
@property (nonatomic, copy) NSString * _Nonnull providerName ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterBrandingInformationStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) ZGMTRContentLauncherClusterStyleInformationStruct * _Nullable background ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterBrandingInformationStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) ZGMTRContentLauncherClusterStyleInformationStruct * _Nullable logo ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterBrandingInformationStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) ZGMTRContentLauncherClusterStyleInformationStruct * _Nullable progressBar ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterBrandingInformationStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) ZGMTRContentLauncherClusterStyleInformationStruct * _Nullable splash ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterBrandingInformationStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) ZGMTRContentLauncherClusterStyleInformationStruct * _Nullable waterMark ZGMTR_DEPRECATED("Please use MTRContentLauncherClusterBrandingInformationStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRAudioOutputClusterOutputInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull index ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull outputType ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRAudioOutputClusterOutputInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRAudioOutputClusterOutputInfo : ZGMTRAudioOutputClusterOutputInfoStruct
@property (nonatomic, copy) NSNumber * _Nonnull index ZGMTR_DEPRECATED("Please use MTRAudioOutputClusterOutputInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull outputType ZGMTR_DEPRECATED("Please use MTRAudioOutputClusterOutputInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_DEPRECATED("Please use MTRAudioOutputClusterOutputInfoStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRApplicationLauncherClusterApplicationStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull catalogVendorID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull catalogVendorId ZGMTR_DEPRECATED("Please use catalogVendorID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@property (nonatomic, copy) NSString * _Nonnull applicationID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull applicationId ZGMTR_DEPRECATED("Please use applicationID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@end

ZGMTR_DEPRECATED("Please use MTRApplicationLauncherClusterApplicationStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRApplicationLauncherClusterApplication : ZGMTRApplicationLauncherClusterApplicationStruct
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRApplicationLauncherClusterApplicationEPStruct : NSObject <NSCopying>
@property (nonatomic, copy) ZGMTRApplicationLauncherClusterApplicationStruct * _Nonnull application ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable endpoint ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRApplicationLauncherClusterApplicationEPStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRApplicationLauncherClusterApplicationEP : ZGMTRApplicationLauncherClusterApplicationEPStruct
@property (nonatomic, copy) ZGMTRApplicationLauncherClusterApplicationStruct * _Nonnull application ZGMTR_DEPRECATED("Please use MTRApplicationLauncherClusterApplicationEPStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nullable endpoint ZGMTR_DEPRECATED("Please use MTRApplicationLauncherClusterApplicationEPStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRApplicationBasicClusterApplicationStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull catalogVendorID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull catalogVendorId ZGMTR_DEPRECATED("Please use catalogVendorID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@property (nonatomic, copy) NSString * _Nonnull applicationID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull applicationId ZGMTR_DEPRECATED("Please use applicationID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@end

ZGMTR_DEPRECATED("Please use MTRApplicationBasicClusterApplicationStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRApplicationBasicClusterApplicationBasicApplication : ZGMTRApplicationBasicClusterApplicationStruct
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRAccountLoginClusterLoggedOutEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable node ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRContentControlClusterRatingNameStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull ratingName ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable ratingNameDesc ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRContentControlClusterRemainingScreenTimeExpiredEvent : NSObject <NSCopying>
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWebRTCTransportProviderClusterICEServerStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull urls ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable username ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nullable credential ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable caid ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWebRTCTransportProviderClusterWebRTCSessionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull id ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull peerNodeID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull peerFabricIndex ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull streamType ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable videoStreamID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable audioStreamID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull metadataOptions ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRChimeClusterChimeSoundStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull chimeID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREcosystemInformationClusterDeviceTypeStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull deviceType ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull revision ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREcosystemInformationClusterEcosystemDeviceStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nullable deviceName ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable deviceNameLastEdit ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull bridgedEndpoint ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull originalEndpoint ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nonnull deviceTypes ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSArray * _Nonnull uniqueLocationIDs ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull uniqueLocationIDsLastEdit ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREcosystemInformationClusterEcosystemLocationStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull uniqueLocationID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) ZGMTRDataTypeLocationDescriptorStruct * _Nonnull locationDescriptor ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull locationDescriptorLastEdit ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRCommissionerControlClusterCommissioningRequestResultEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull requestID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull clientNodeID ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull statusCode ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterSimpleStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull a ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull b ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull c ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSData * _Nonnull d ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull e ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull f ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull g ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull h ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable i ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterSimpleStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterSimpleStruct : ZGMTRUnitTestingClusterSimpleStruct
@property (nonatomic, copy) NSNumber * _Nonnull a ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterSimpleStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull b ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterSimpleStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull c ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterSimpleStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSData * _Nonnull d ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterSimpleStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSString * _Nonnull e ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterSimpleStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull f ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterSimpleStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull g ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterSimpleStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull h ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterSimpleStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestFabricScoped : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull fabricSensitiveInt8u ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable optionalFabricSensitiveInt8u ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable nullableFabricSensitiveInt8u ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable nullableOptionalFabricSensitiveInt8u ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull fabricSensitiveCharString ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nonnull fabricSensitiveStruct ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull fabricSensitiveInt8uList ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestFabricScoped", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestFabricScoped : ZGMTRUnitTestingClusterTestFabricScoped
@property (nonatomic, copy) NSNumber * _Nonnull fabricSensitiveInt8u ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestFabricScoped", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nullable optionalFabricSensitiveInt8u ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestFabricScoped", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nullable nullableFabricSensitiveInt8u ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestFabricScoped", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nullable nullableOptionalFabricSensitiveInt8u ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestFabricScoped", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSString * _Nonnull fabricSensitiveCharString ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestFabricScoped", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) ZGMTRTestClusterClusterSimpleStruct * _Nonnull fabricSensitiveStruct ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestFabricScoped", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nonnull fabricSensitiveInt8uList ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestFabricScoped", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestFabricScoped", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterNullablesAndOptionalsStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable nullableInt ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable optionalInt ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable nullableOptionalInt ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable nullableString ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable optionalString ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable nullableOptionalString ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nullable nullableStruct ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nullable optionalStruct ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nullable nullableOptionalStruct ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nullable nullableList ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nullable optionalList ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nullable nullableOptionalList ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNullablesAndOptionalsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterNullablesAndOptionalsStruct : ZGMTRUnitTestingClusterNullablesAndOptionalsStruct
@property (nonatomic, copy) NSNumber * _Nullable nullableInt ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNullablesAndOptionalsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nullable optionalInt ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNullablesAndOptionalsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nullable nullableOptionalInt ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNullablesAndOptionalsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSString * _Nullable nullableString ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNullablesAndOptionalsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSString * _Nullable optionalString ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNullablesAndOptionalsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSString * _Nullable nullableOptionalString ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNullablesAndOptionalsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) ZGMTRTestClusterClusterSimpleStruct * _Nullable nullableStruct ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNullablesAndOptionalsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) ZGMTRTestClusterClusterSimpleStruct * _Nullable optionalStruct ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNullablesAndOptionalsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) ZGMTRTestClusterClusterSimpleStruct * _Nullable nullableOptionalStruct ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNullablesAndOptionalsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nullable nullableList ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNullablesAndOptionalsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nullable optionalList ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNullablesAndOptionalsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nullable nullableOptionalList ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNullablesAndOptionalsStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterNestedStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull a ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull b ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nonnull c ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) ZGMTRDataTypeTestGlobalStruct * _Nullable d ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNestedStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterNestedStruct : ZGMTRUnitTestingClusterNestedStruct
@property (nonatomic, copy) NSNumber * _Nonnull a ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNestedStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull b ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNestedStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) ZGMTRTestClusterClusterSimpleStruct * _Nonnull c ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNestedStruct", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterNestedStructList : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull a ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull b ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nonnull c ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull d ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull e ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull f ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull g ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNestedStructList", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterNestedStructList : ZGMTRUnitTestingClusterNestedStructList
@property (nonatomic, copy) NSNumber * _Nonnull a ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNestedStructList", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull b ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNestedStructList", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) ZGMTRTestClusterClusterSimpleStruct * _Nonnull c ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNestedStructList", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nonnull d ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNestedStructList", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nonnull e ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNestedStructList", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nonnull f ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNestedStructList", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nonnull g ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterNestedStructList", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterDoubleNestedStructList : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull a ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterDoubleNestedStructList", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterDoubleNestedStructList : ZGMTRUnitTestingClusterDoubleNestedStructList
@property (nonatomic, copy) NSArray * _Nonnull a ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterDoubleNestedStructList", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestListStructOctet : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull member1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSData * _Nonnull member2 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestListStructOctet", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestListStructOctet : ZGMTRUnitTestingClusterTestListStructOctet
@property (nonatomic, copy) NSNumber * _Nonnull member1 ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestListStructOctet", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSData * _Nonnull member2 ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestListStructOctet", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestEventEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull arg2 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull arg3 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nonnull arg4 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull arg5 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull arg6 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestEventEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestEventEvent : ZGMTRUnitTestingClusterTestEventEvent
@property (nonatomic, copy) NSNumber * _Nonnull arg1 ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestEventEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull arg2 ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestEventEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull arg3 ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestEventEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) ZGMTRTestClusterClusterSimpleStruct * _Nonnull arg4 ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestEventEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nonnull arg5 ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestEventEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nonnull arg6 ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestEventEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestFabricScopedEventEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
@end

ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestFabricScopedEventEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestFabricScopedEventEvent : ZGMTRUnitTestingClusterTestFabricScopedEventEvent
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_DEPRECATED("Please use MTRUnitTestingClusterTestFabricScopedEventEvent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRUnitTestingClusterTestDifferentVendorMeiEventEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull arg1 ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRSampleMEIClusterPingCountEventEvent : NSObject <NSCopying>
@property (nonatomic, copy, getter=getCount) NSNumber * _Nonnull count ZGMTR_PROVISIONALLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_PROVISIONALLY_AVAILABLE;
@end

NS_ASSUME_NONNULL_END
