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
#import <ZGMatter/ZGMTRStructsObjc.h>

NS_ASSUME_NONNULL_BEGIN

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRIdentifyClusterIdentifyParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull identifyTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRIdentifyClusterTriggerEffectParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull effectIdentifier ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull effectVariant ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupsClusterAddGroupParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSString * _Nonnull groupName ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface ZGMTRGroupsClusterAddGroupParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId ZGMTR_DEPRECATED("Please use groupID", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupsClusterAddGroupResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRGroupsClusterAddGroupResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

@interface ZGMTRGroupsClusterAddGroupResponseParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId ZGMTR_DEPRECATED("Please use groupID", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupsClusterViewGroupParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface ZGMTRGroupsClusterViewGroupParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId ZGMTR_DEPRECATED("Please use groupID", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupsClusterViewGroupResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSString * _Nonnull groupName ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRGroupsClusterViewGroupResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

@interface ZGMTRGroupsClusterViewGroupResponseParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId ZGMTR_DEPRECATED("Please use groupID", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupsClusterGetGroupMembershipParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull groupList ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupsClusterGetGroupMembershipResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nullable capacity ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSArray * _Nonnull groupList ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRGroupsClusterGetGroupMembershipResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupsClusterRemoveGroupParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface ZGMTRGroupsClusterRemoveGroupParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId ZGMTR_DEPRECATED("Please use groupID", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupsClusterRemoveGroupResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRGroupsClusterRemoveGroupResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

@interface ZGMTRGroupsClusterRemoveGroupResponseParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId ZGMTR_DEPRECATED("Please use groupID", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupsClusterRemoveAllGroupsParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupsClusterAddGroupIfIdentifyingParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSString * _Nonnull groupName ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface ZGMTRGroupsClusterAddGroupIfIdentifyingParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId ZGMTR_DEPRECATED("Please use groupID", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROnOffClusterOffParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROnOffClusterOnParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROnOffClusterToggleParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROnOffClusterOffWithEffectParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull effectIdentifier ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull effectVariant ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface ZGMTROnOffClusterOffWithEffectParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull effectId ZGMTR_DEPRECATED("Please use effectIdentifier", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROnOffClusterOnWithRecallGlobalSceneParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROnOffClusterOnWithTimedOffParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull onOffControl ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull onTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull offWaitTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRLevelControlClusterMoveToLevelParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull level ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable transitionTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRLevelControlClusterMoveParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull moveMode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable rate ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRLevelControlClusterStepParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull stepMode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull stepSize ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable transitionTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRLevelControlClusterStopParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRLevelControlClusterMoveToLevelWithOnOffParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull level ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable transitionTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRLevelControlClusterMoveWithOnOffParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull moveMode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable rate ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRLevelControlClusterStepWithOnOffParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull stepMode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull stepSize ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable transitionTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRLevelControlClusterStopWithOnOffParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRLevelControlClusterMoveToClosestFrequencyParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull frequency ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRAccessControlClusterReviewFabricRestrictionsParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull arl ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRAccessControlClusterReviewFabricRestrictionsResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull token ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRAccessControlClusterReviewFabricRestrictionsResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRActionsClusterInstantActionParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRActionsClusterInstantActionWithTransitionParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRActionsClusterStartActionParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRActionsClusterStartActionWithDurationParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull duration ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRActionsClusterStopActionParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRActionsClusterPauseActionParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRActionsClusterPauseActionWithDurationParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull duration ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRActionsClusterResumeActionParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRActionsClusterEnableActionParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRActionsClusterEnableActionWithDurationParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull duration ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRActionsClusterDisableActionParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRActionsClusterDisableActionWithDurationParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull duration ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("This command has been removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRBasicClusterMfgSpecificPingParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTROTASoftwareUpdateProviderClusterQueryImageParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull vendorID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull productID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull softwareVersion ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nonnull protocolsSupported ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable hardwareVersion ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSString * _Nullable location ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable requestorCanConsent ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSData * _Nullable metadataForProvider ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTROTASoftwareUpdateProviderClusterQueryImageParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTROtaSoftwareUpdateProviderClusterQueryImageParams : ZGMTROTASoftwareUpdateProviderClusterQueryImageParams

@property (nonatomic, copy) NSNumber * _Nonnull softwareVersion ZGMTR_DEPRECATED("The softwareVersion field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSArray * _Nonnull protocolsSupported ZGMTR_DEPRECATED("The protocolsSupported field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable hardwareVersion ZGMTR_DEPRECATED("The hardwareVersion field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSString * _Nullable location ZGMTR_DEPRECATED("The location field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable requestorCanConsent ZGMTR_DEPRECATED("The requestorCanConsent field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSData * _Nullable metadataForProvider ZGMTR_DEPRECATED("The metadataForProvider field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface ZGMTROTASoftwareUpdateProviderClusterQueryImageParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull vendorId ZGMTR_DEPRECATED("Please use vendorID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull productId ZGMTR_DEPRECATED("Please use productID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTROTASoftwareUpdateProviderClusterQueryImageResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable delayedActionTime ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSString * _Nullable imageURI ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable softwareVersion ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSString * _Nullable softwareVersionString ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSData * _Nullable updateToken ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable userConsentNeeded ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSData * _Nullable metadataForRequestor ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTROTASoftwareUpdateProviderClusterQueryImageResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use ZGMTROTASoftwareUpdateProviderClusterQueryImageResponseParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTROtaSoftwareUpdateProviderClusterQueryImageResponseParams : ZGMTROTASoftwareUpdateProviderClusterQueryImageResponseParams

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_DEPRECATED("The status field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable delayedActionTime ZGMTR_DEPRECATED("The delayedActionTime field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSString * _Nullable imageURI ZGMTR_DEPRECATED("The imageURI field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable softwareVersion ZGMTR_DEPRECATED("The softwareVersion field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSString * _Nullable softwareVersionString ZGMTR_DEPRECATED("The softwareVersionString field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSData * _Nullable updateToken ZGMTR_DEPRECATED("The updateToken field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable userConsentNeeded ZGMTR_DEPRECATED("The userConsentNeeded field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSData * _Nullable metadataForRequestor ZGMTR_DEPRECATED("The metadataForRequestor field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTROTASoftwareUpdateProviderClusterApplyUpdateRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull updateToken ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy, getter=getNewVersion) NSNumber * _Nonnull newVersion ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTROTASoftwareUpdateProviderClusterApplyUpdateRequestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTROtaSoftwareUpdateProviderClusterApplyUpdateRequestParams : ZGMTROTASoftwareUpdateProviderClusterApplyUpdateRequestParams

@property (nonatomic, copy) NSData * _Nonnull updateToken ZGMTR_DEPRECATED("The updateToken field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy, getter=getNewVersion) NSNumber * _Nonnull newVersion ZGMTR_DEPRECATED("The newVersion field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTROTASoftwareUpdateProviderClusterApplyUpdateResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull action ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull delayedActionTime ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTROTASoftwareUpdateProviderClusterApplyUpdateResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use ZGMTROTASoftwareUpdateProviderClusterApplyUpdateResponseParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTROtaSoftwareUpdateProviderClusterApplyUpdateResponseParams : ZGMTROTASoftwareUpdateProviderClusterApplyUpdateResponseParams

@property (nonatomic, copy) NSNumber * _Nonnull action ZGMTR_DEPRECATED("The action field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull delayedActionTime ZGMTR_DEPRECATED("The delayedActionTime field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTROTASoftwareUpdateProviderClusterNotifyUpdateAppliedParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull updateToken ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull softwareVersion ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTROTASoftwareUpdateProviderClusterNotifyUpdateAppliedParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTROtaSoftwareUpdateProviderClusterNotifyUpdateAppliedParams : ZGMTROTASoftwareUpdateProviderClusterNotifyUpdateAppliedParams

@property (nonatomic, copy) NSData * _Nonnull updateToken ZGMTR_DEPRECATED("The updateToken field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull softwareVersion ZGMTR_DEPRECATED("The softwareVersion field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTROTASoftwareUpdateRequestorClusterAnnounceOTAProviderParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull providerNodeID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull vendorID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull announcementReason ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSData * _Nullable metadataForNode ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull endpoint ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTROTASoftwareUpdateRequestorClusterAnnounceOTAProviderParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTROtaSoftwareUpdateRequestorClusterAnnounceOtaProviderParams : ZGMTROTASoftwareUpdateRequestorClusterAnnounceOTAProviderParams

@property (nonatomic, copy) NSNumber * _Nonnull announcementReason ZGMTR_DEPRECATED("The announcementReason field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSData * _Nullable metadataForNode ZGMTR_DEPRECATED("The metadataForNode field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull endpoint ZGMTR_DEPRECATED("The endpoint field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface ZGMTROTASoftwareUpdateRequestorClusterAnnounceOTAProviderParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull providerNodeId ZGMTR_DEPRECATED("Please use providerNodeID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull vendorId ZGMTR_DEPRECATED("Please use vendorID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGeneralCommissioningClusterArmFailSafeParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull expiryLengthSeconds ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull breadcrumb ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGeneralCommissioningClusterArmFailSafeResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull errorCode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nonnull debugText ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRGeneralCommissioningClusterArmFailSafeResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGeneralCommissioningClusterSetRegulatoryConfigParams : NSObject <NSCopying>

@property (nonatomic, copy, getter=getNewRegulatoryConfig) NSNumber * _Nonnull newRegulatoryConfig ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nonnull countryCode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull breadcrumb ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGeneralCommissioningClusterSetRegulatoryConfigResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull errorCode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nonnull debugText ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRGeneralCommissioningClusterSetRegulatoryConfigResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGeneralCommissioningClusterCommissioningCompleteParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGeneralCommissioningClusterCommissioningCompleteResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull errorCode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nonnull debugText ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRGeneralCommissioningClusterCommissioningCompleteResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRGeneralCommissioningClusterSetTCAcknowledgementsParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull tcVersion ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull tcUserResponse ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRGeneralCommissioningClusterSetTCAcknowledgementsResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull errorCode ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRGeneralCommissioningClusterSetTCAcknowledgementsResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRNetworkCommissioningClusterScanNetworksParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nullable ssid ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable breadcrumb ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRNetworkCommissioningClusterScanNetworksResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull networkingStatus ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable debugText ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSArray * _Nullable wiFiScanResults ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSArray * _Nullable threadScanResults ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRNetworkCommissioningClusterScanNetworksResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRNetworkCommissioningClusterAddOrUpdateWiFiNetworkParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull ssid ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nonnull credentials ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable breadcrumb ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nullable networkIdentity ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSData * _Nullable clientIdentifier ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSData * _Nullable possessionNonce ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRNetworkCommissioningClusterAddOrUpdateThreadNetworkParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull operationalDataset ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable breadcrumb ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRNetworkCommissioningClusterRemoveNetworkParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull networkID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable breadcrumb ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRNetworkCommissioningClusterNetworkConfigResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull networkingStatus ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable debugText ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable networkIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nullable clientIdentity ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSData * _Nullable possessionSignature ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRNetworkCommissioningClusterNetworkConfigResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRNetworkCommissioningClusterConnectNetworkParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull networkID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable breadcrumb ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRNetworkCommissioningClusterConnectNetworkResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull networkingStatus ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable debugText ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable errorValue ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRNetworkCommissioningClusterConnectNetworkResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRNetworkCommissioningClusterReorderNetworkParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull networkID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull networkIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable breadcrumb ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRNetworkCommissioningClusterQueryIdentityParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull keyIdentifier ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSData * _Nullable possessionNonce ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRNetworkCommissioningClusterQueryIdentityResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull identity ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSData * _Nullable possessionSignature ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRNetworkCommissioningClusterQueryIdentityResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDiagnosticLogsClusterRetrieveLogsRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull intent ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull requestedProtocol ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable transferFileDesignator ZGMTR_AVAILABLE(ios(16.5), macos(13.4), watchos(9.5), tvos(16.5));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDiagnosticLogsClusterRetrieveLogsResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nonnull logContent ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable utcTimeStamp ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable timeSinceBoot ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRDiagnosticLogsClusterRetrieveLogsResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

@interface ZGMTRDiagnosticLogsClusterRetrieveLogsResponseParams (Deprecated)

@property (nonatomic, copy) NSData * _Nonnull content ZGMTR_DEPRECATED("Please use logContent", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable timeStamp ZGMTR_DEPRECATED("Please use utcTimeStamp", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGeneralDiagnosticsClusterTestEventTriggerParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull enableKey ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull eventTrigger ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRGeneralDiagnosticsClusterTimeSnapshotParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRGeneralDiagnosticsClusterTimeSnapshotResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull systemTimeMs ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable posixTimeMs ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRGeneralDiagnosticsClusterTimeSnapshotResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRGeneralDiagnosticsClusterPayloadTestRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull enableKey ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy, getter=getCount) NSNumber * _Nonnull count ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRGeneralDiagnosticsClusterPayloadTestResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull payload ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRGeneralDiagnosticsClusterPayloadTestResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRSoftwareDiagnosticsClusterResetWatermarksParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRThreadNetworkDiagnosticsClusterResetCountsParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRWiFiNetworkDiagnosticsClusterResetCountsParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTREthernetNetworkDiagnosticsClusterResetCountsParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(17.2), macos(14.2), watchos(10.2), tvos(17.2))
@interface ZGMTRTimeSynchronizationClusterSetUTCTimeParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull utcTime ZGMTR_AVAILABLE(ios(17.2), macos(14.2), watchos(10.2), tvos(17.2));

@property (nonatomic, copy) NSNumber * _Nonnull granularity ZGMTR_AVAILABLE(ios(17.2), macos(14.2), watchos(10.2), tvos(17.2));

@property (nonatomic, copy) NSNumber * _Nullable timeSource ZGMTR_AVAILABLE(ios(17.2), macos(14.2), watchos(10.2), tvos(17.2));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRTimeSynchronizationClusterSetUtcTimeParams : ZGMTRTimeSynchronizationClusterSetUTCTimeParams

@property (nonatomic, copy) NSNumber * _Nonnull utcTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull granularity ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable timeSource ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRTimeSynchronizationClusterSetTrustedTimeSourceParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRTimeSynchronizationClusterFabricScopedTrustedTimeSourceStruct * _Nullable trustedTimeSource ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRTimeSynchronizationClusterSetTimeZoneParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull timeZone ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRTimeSynchronizationClusterSetTimeZoneResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull dstOffsetRequired ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRTimeSynchronizationClusterSetTimeZoneResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRTimeSynchronizationClusterSetDSTOffsetParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull dstOffset ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRTimeSynchronizationClusterSetDefaultNTPParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nullable defaultNTP ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRBridgedDeviceBasicInformationClusterKeepActiveParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull stayActiveDuration ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull timeoutMs ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRAdministratorCommissioningClusterOpenCommissioningWindowParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull commissioningTimeout ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nonnull pakePasscodeVerifier ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull discriminator ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull iterations ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nonnull salt ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface ZGMTRAdministratorCommissioningClusterOpenCommissioningWindowParams (Deprecated)

@property (nonatomic, copy) NSData * _Nonnull pakeVerifier ZGMTR_DEPRECATED("Please use pakePasscodeVerifier", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRAdministratorCommissioningClusterOpenBasicCommissioningWindowParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull commissioningTimeout ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRAdministratorCommissioningClusterRevokeCommissioningParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROperationalCredentialsClusterAttestationRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull attestationNonce ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROperationalCredentialsClusterAttestationResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull attestationElements ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nonnull attestationSignature ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTROperationalCredentialsClusterAttestationResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

@interface ZGMTROperationalCredentialsClusterAttestationResponseParams (Deprecated)

@property (nonatomic, copy) NSData * _Nonnull signature ZGMTR_DEPRECATED("Please use attestationSignature", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROperationalCredentialsClusterCertificateChainRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull certificateType ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROperationalCredentialsClusterCertificateChainResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull certificate ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTROperationalCredentialsClusterCertificateChainResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROperationalCredentialsClusterCSRRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull csrNonce ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable isForUpdateNOC ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROperationalCredentialsClusterCSRResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull nocsrElements ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nonnull attestationSignature ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTROperationalCredentialsClusterCSRResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROperationalCredentialsClusterAddNOCParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull nocValue ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nullable icacValue ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nonnull ipkValue ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull caseAdminSubject ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull adminVendorId ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROperationalCredentialsClusterUpdateNOCParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull nocValue ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nullable icacValue ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROperationalCredentialsClusterNOCResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull statusCode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable fabricIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable debugText ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTROperationalCredentialsClusterNOCResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROperationalCredentialsClusterUpdateFabricLabelParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nonnull label ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROperationalCredentialsClusterRemoveFabricParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTROperationalCredentialsClusterAddTrustedRootCertificateParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull rootCACertificate ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface ZGMTROperationalCredentialsClusterAddTrustedRootCertificateParams (Deprecated)

@property (nonatomic, copy) NSData * _Nonnull rootCertificate ZGMTR_DEPRECATED("Please use rootCACertificate", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupKeyManagementClusterKeySetWriteParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRGroupKeyManagementClusterGroupKeySetStruct * _Nonnull groupKeySet ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupKeyManagementClusterKeySetReadParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupKeySetID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupKeyManagementClusterKeySetReadResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRGroupKeyManagementClusterGroupKeySetStruct * _Nonnull groupKeySet ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRGroupKeyManagementClusterKeySetReadResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupKeyManagementClusterKeySetRemoveParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupKeySetID ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupKeyManagementClusterKeySetReadAllIndicesParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRGroupKeyManagementClusterKeySetReadAllIndicesResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull groupKeySetIDs ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRGroupKeyManagementClusterKeySetReadAllIndicesResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRICDManagementClusterRegisterClientParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull checkInNodeID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull monitoredSubject ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSData * _Nonnull key ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSData * _Nullable verificationKey ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull clientType ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRICDManagementClusterRegisterClientResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull icdCounter ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRICDManagementClusterRegisterClientResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRICDManagementClusterUnregisterClientParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull checkInNodeID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSData * _Nullable verificationKey ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRICDManagementClusterStayActiveRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull stayActiveDuration ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRICDManagementClusterStayActiveResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull promisedActiveDuration ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRICDManagementClusterStayActiveResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRTimerClusterSetTimerParams : NSObject <NSCopying>

@property (nonatomic, copy, getter=getNewTime) NSNumber * _Nonnull newTime ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRTimerClusterResetTimerParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRTimerClusterAddTimeParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull additionalTime ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRTimerClusterReduceTimeParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull timeReduction ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTROvenCavityOperationalStateClusterPauseParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTROvenCavityOperationalStateClusterStopParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTROvenCavityOperationalStateClusterStartParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTROvenCavityOperationalStateClusterResumeParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTROvenCavityOperationalStateClusterOperationalCommandResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTROvenCavityOperationalStateClusterErrorStateStruct * _Nonnull commandResponseState ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTROvenCavityOperationalStateClusterOperationalCommandResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTROvenModeClusterChangeToModeParams : NSObject <NSCopying>

@property (nonatomic, copy, getter=getNewMode) NSNumber * _Nonnull newMode ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTROvenModeClusterChangeToModeResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nullable statusText ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTROvenModeClusterChangeToModeResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRModeSelectClusterChangeToModeParams : NSObject <NSCopying>

@property (nonatomic, copy, getter=getNewMode) NSNumber * _Nonnull newMode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRLaundryWasherModeClusterChangeToModeParams : NSObject <NSCopying>

@property (nonatomic, copy, getter=getNewMode) NSNumber * _Nonnull newMode ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRLaundryWasherModeClusterChangeToModeResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nullable statusText ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRLaundryWasherModeClusterChangeToModeResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRRefrigeratorAndTemperatureControlledCabinetModeClusterChangeToModeParams : NSObject <NSCopying>

@property (nonatomic, copy, getter=getNewMode) NSNumber * _Nonnull newMode ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRRefrigeratorAndTemperatureControlledCabinetModeClusterChangeToModeResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nullable statusText ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRRefrigeratorAndTemperatureControlledCabinetModeClusterChangeToModeResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTRRVCRunModeClusterChangeToModeParams : NSObject <NSCopying>

@property (nonatomic, copy, getter=getNewMode) NSNumber * _Nonnull newMode ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTRRVCRunModeClusterChangeToModeResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));

@property (nonatomic, copy) NSString * _Nullable statusText ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));

/**
 * Initialize an ZGMTRRVCRunModeClusterChangeToModeResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTRRVCCleanModeClusterChangeToModeParams : NSObject <NSCopying>

@property (nonatomic, copy, getter=getNewMode) NSNumber * _Nonnull newMode ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTRRVCCleanModeClusterChangeToModeResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));

@property (nonatomic, copy) NSString * _Nullable statusText ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));

/**
 * Initialize an ZGMTRRVCCleanModeClusterChangeToModeResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRTemperatureControlClusterSetTemperatureParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nullable targetTemperature ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable targetTemperatureLevel ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDishwasherModeClusterChangeToModeParams : NSObject <NSCopying>

@property (nonatomic, copy, getter=getNewMode) NSNumber * _Nonnull newMode ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDishwasherModeClusterChangeToModeResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nullable statusText ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRDishwasherModeClusterChangeToModeResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRSmokeCOAlarmClusterSelfTestRequestParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDishwasherAlarmClusterResetParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull alarms ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDishwasherAlarmClusterModifyEnabledAlarmsParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull mask ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRMicrowaveOvenControlClusterSetCookingParametersParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nullable cookMode ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable cookTime ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable powerSetting ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable wattSettingIndex ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable startAfterSetting ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRMicrowaveOvenControlClusterAddMoreTimeParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull timeToAdd ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTROperationalStateClusterPauseParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTROperationalStateClusterStopParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTROperationalStateClusterStartParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTROperationalStateClusterResumeParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTROperationalStateClusterOperationalCommandResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTROperationalStateClusterErrorStateStruct * _Nonnull commandResponseState ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));

/**
 * Initialize an ZGMTROperationalStateClusterOperationalCommandResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTRRVCOperationalStateClusterPauseParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTRRVCOperationalStateClusterResumeParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4))
@interface ZGMTRRVCOperationalStateClusterOperationalCommandResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRRVCOperationalStateClusterErrorStateStruct * _Nonnull commandResponseState ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));

/**
 * Initialize an ZGMTRRVCOperationalStateClusterOperationalCommandResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.4), macos(14.4), watchos(10.4), tvos(17.4));
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRRVCOperationalStateClusterGoHomeParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRScenesManagementClusterAddSceneParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull sceneID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nonnull sceneName ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSArray * _Nonnull extensionFieldSets ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRScenesManagementClusterAddSceneResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull sceneID ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRScenesManagementClusterAddSceneResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRScenesManagementClusterViewSceneParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull sceneID ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRScenesManagementClusterViewSceneResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull sceneID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable transitionTime ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nullable sceneName ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSArray * _Nullable extensionFieldSets ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRScenesManagementClusterViewSceneResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRScenesManagementClusterRemoveSceneParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull sceneID ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRScenesManagementClusterRemoveSceneResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull sceneID ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRScenesManagementClusterRemoveSceneResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRScenesManagementClusterRemoveAllScenesParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRScenesManagementClusterRemoveAllScenesResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRScenesManagementClusterRemoveAllScenesResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRScenesManagementClusterStoreSceneParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull sceneID ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRScenesManagementClusterStoreSceneResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull sceneID ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRScenesManagementClusterStoreSceneResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRScenesManagementClusterRecallSceneParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull sceneID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable transitionTime ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRScenesManagementClusterGetSceneMembershipParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRScenesManagementClusterGetSceneMembershipResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable capacity ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull groupID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSArray * _Nullable sceneList ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRScenesManagementClusterGetSceneMembershipResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRScenesManagementClusterCopySceneParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull mode ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull groupIdentifierFrom ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull sceneIdentifierFrom ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull groupIdentifierTo ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull sceneIdentifierTo ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRScenesManagementClusterCopySceneResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull groupIdentifierFrom ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull sceneIdentifierFrom ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRScenesManagementClusterCopySceneResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRHEPAFilterMonitoringClusterResetConditionParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRActivatedCarbonFilterMonitoringClusterResetConditionParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRBooleanStateConfigurationClusterSuppressAlarmParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull alarmsToSuppress ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRBooleanStateConfigurationClusterEnableDisableAlarmParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull alarmsToEnableDisable ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRValveConfigurationAndControlClusterOpenParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nullable openDuration ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));

@property (nonatomic, copy) NSNumber * _Nullable targetLevel ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRValveConfigurationAndControlClusterCloseParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWaterHeaterManagementClusterBoostParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRWaterHeaterManagementClusterWaterHeaterBoostInfoStruct * _Nonnull boostInfo ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWaterHeaterManagementClusterCancelBoostParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDemandResponseLoadControlClusterRegisterLoadControlProgramRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRDemandResponseLoadControlClusterLoadControlProgramStruct * _Nonnull loadControlProgram ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDemandResponseLoadControlClusterUnregisterLoadControlProgramRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull loadControlProgramID ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDemandResponseLoadControlClusterAddLoadControlEventRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRDemandResponseLoadControlClusterLoadControlEventStruct * _Nonnull event ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDemandResponseLoadControlClusterRemoveLoadControlEventRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull eventID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull cancelControl ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDemandResponseLoadControlClusterClearLoadControlEventsRequestParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRMessagesClusterPresentMessagesRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull messageID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull priority ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull messageControl ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable startTime ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable duration ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nonnull messageText ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSArray * _Nullable responses ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRMessagesClusterCancelMessagesRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull messageIDs ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterPowerAdjustRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull power ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull duration ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull cause ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterCancelPowerAdjustRequestParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterStartTimeAdjustRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull requestedStartTime ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull cause ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterPauseRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull duration ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull cause ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterResumeRequestParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterModifyForecastRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull forecastID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSArray * _Nonnull slotAdjustments ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull cause ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterRequestConstraintBasedForecastParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull constraints ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull cause ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementClusterCancelRequestParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEClusterGetTargetsResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull chargingTargetSchedules ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTREnergyEVSEClusterGetTargetsResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEClusterDisableParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEClusterEnableChargingParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nullable chargingEnabledUntil ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull minimumChargeCurrent ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull maximumChargeCurrent ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEClusterEnableDischargingParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nullable dischargingEnabledUntil ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull maximumDischargeCurrent ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEClusterStartDiagnosticsParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEClusterSetTargetsParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull chargingTargetSchedules ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEClusterGetTargetsParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEClusterClearTargetsParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEModeClusterChangeToModeParams : NSObject <NSCopying>

@property (nonatomic, copy, getter=getNewMode) NSNumber * _Nonnull newMode ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTREnergyEVSEModeClusterChangeToModeResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nullable statusText ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTREnergyEVSEModeClusterChangeToModeResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWaterHeaterModeClusterChangeToModeParams : NSObject <NSCopying>

@property (nonatomic, copy, getter=getNewMode) NSNumber * _Nonnull newMode ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWaterHeaterModeClusterChangeToModeResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nullable statusText ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRWaterHeaterModeClusterChangeToModeResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementModeClusterChangeToModeParams : NSObject <NSCopying>

@property (nonatomic, copy, getter=getNewMode) NSNumber * _Nonnull newMode ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDeviceEnergyManagementModeClusterChangeToModeResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nullable statusText ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRDeviceEnergyManagementModeClusterChangeToModeResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterLockDoorParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nullable pinCode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterUnlockDoorParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nullable pinCode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterUnlockWithTimeoutParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull timeout ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nullable pinCode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterSetWeekDayScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull weekDayIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull userIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull daysMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull startHour ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull startMinute ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull endHour ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull endMinute ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterGetWeekDayScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull weekDayIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull userIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterGetWeekDayScheduleResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull weekDayIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull userIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable daysMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable startHour ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable startMinute ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable endHour ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable endMinute ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRDoorLockClusterGetWeekDayScheduleResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterClearWeekDayScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull weekDayIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull userIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterSetYearDayScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull yearDayIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull userIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull localStartTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull localEndTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterGetYearDayScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull yearDayIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull userIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterGetYearDayScheduleResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull yearDayIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull userIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable localStartTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable localEndTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRDoorLockClusterGetYearDayScheduleResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterClearYearDayScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull yearDayIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull userIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterSetHolidayScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull holidayIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull localStartTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull localEndTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull operatingMode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterGetHolidayScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull holidayIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterGetHolidayScheduleResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull holidayIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable localStartTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable localEndTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable operatingMode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRDoorLockClusterGetHolidayScheduleResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterClearHolidayScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull holidayIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterSetUserParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull operationType ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull userIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable userName ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable userUniqueID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable userStatus ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable userType ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable credentialRule ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface ZGMTRDoorLockClusterSetUserParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nullable userUniqueId ZGMTR_DEPRECATED("Please use userUniqueID", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterGetUserParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull userIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterGetUserResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull userIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable userName ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable userUniqueID ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable userStatus ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable userType ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable credentialRule ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSArray * _Nullable credentials ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable creatorFabricIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable lastModifiedFabricIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable nextUserIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRDoorLockClusterGetUserResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

@interface ZGMTRDoorLockClusterGetUserResponseParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nullable userUniqueId ZGMTR_DEPRECATED("Please use userUniqueID", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterClearUserParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull userIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterSetCredentialParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull operationType ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) ZGMTRDoorLockClusterCredentialStruct * _Nonnull credential ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nonnull credentialData ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable userIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable userStatus ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable userType ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterSetCredentialResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable userIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable nextCredentialIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRDoorLockClusterSetCredentialResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterGetCredentialStatusParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRDoorLockClusterCredentialStruct * _Nonnull credential ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterGetCredentialStatusResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull credentialExists ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable userIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable creatorFabricIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable lastModifiedFabricIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable nextCredentialIndex ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nullable credentialData ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRDoorLockClusterGetCredentialStatusResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRDoorLockClusterClearCredentialParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRDoorLockClusterCredentialStruct * _Nullable credential ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDoorLockClusterUnboltDoorParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nullable pinCode ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDoorLockClusterSetAliroReaderConfigParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull signingKey ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSData * _Nonnull verificationKey ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSData * _Nonnull groupIdentifier ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSData * _Nullable groupResolvingKey ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRDoorLockClusterClearAliroReaderConfigParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRWindowCoveringClusterUpOrOpenParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRWindowCoveringClusterDownOrCloseParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRWindowCoveringClusterStopMotionParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRWindowCoveringClusterGoToLiftValueParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull liftValue ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRWindowCoveringClusterGoToLiftPercentageParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull liftPercent100thsValue ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRWindowCoveringClusterGoToTiltValueParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull tiltValue ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRWindowCoveringClusterGoToTiltPercentageParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull tiltPercent100thsValue ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRServiceAreaClusterSelectAreasParams : NSObject <NSCopying>

@property (nonatomic, copy, getter=getNewAreas) NSArray * _Nonnull newAreas ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRServiceAreaClusterSelectAreasResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nonnull statusText ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRServiceAreaClusterSelectAreasResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRServiceAreaClusterSkipAreaParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull skippedArea ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRServiceAreaClusterSkipAreaResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nonnull statusText ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRServiceAreaClusterSkipAreaResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRThermostatClusterSetpointRaiseLowerParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull mode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull amount ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRThermostatClusterGetWeeklyScheduleResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull numberOfTransitionsForSequence ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull dayOfWeekForSequence ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull modeForSequence ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSArray * _Nonnull transitions ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRThermostatClusterGetWeeklyScheduleResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRThermostatClusterSetWeeklyScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull numberOfTransitionsForSequence ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull dayOfWeekForSequence ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull modeForSequence ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSArray * _Nonnull transitions ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRThermostatClusterGetWeeklyScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull daysToReturn ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull modeToReturn ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRThermostatClusterClearWeeklyScheduleParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThermostatClusterSetActiveScheduleRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull scheduleHandle ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThermostatClusterSetActivePresetRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nullable presetHandle ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThermostatClusterAtomicResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull statusCode ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSArray * _Nonnull attributeStatus ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable timeout ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRThermostatClusterAtomicResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThermostatClusterAtomicRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull requestType ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSArray * _Nonnull attributeRequests ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable timeout ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6))
@interface ZGMTRFanControlClusterStepParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull direction ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));

@property (nonatomic, copy) NSNumber * _Nullable wrap ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));

@property (nonatomic, copy) NSNumber * _Nullable lowestOff ZGMTR_AVAILABLE(ios(17.6), macos(14.6), watchos(10.6), tvos(17.6));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterMoveToHueParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull hue ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull direction ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterMoveHueParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull moveMode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull rate ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterStepHueParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull stepMode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull stepSize ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterMoveToSaturationParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull saturation ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterMoveSaturationParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull moveMode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull rate ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterStepSaturationParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull stepMode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull stepSize ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterMoveToHueAndSaturationParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull hue ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull saturation ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterMoveToColorParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull colorX ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull colorY ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterMoveColorParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull rateX ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull rateY ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterStepColorParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull stepX ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull stepY ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterMoveToColorTemperatureParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull colorTemperatureMireds ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface ZGMTRColorControlClusterMoveToColorTemperatureParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull colorTemperature ZGMTR_DEPRECATED("Please use colorTemperatureMireds", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterEnhancedMoveToHueParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull enhancedHue ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull direction ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterEnhancedMoveHueParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull moveMode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull rate ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterEnhancedStepHueParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull stepMode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull stepSize ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterEnhancedMoveToHueAndSaturationParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull enhancedHue ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull saturation ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterColorLoopSetParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull updateFlags ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull action ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull direction ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull time ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull startHue ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterStopMoveStepParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterMoveColorTemperatureParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull moveMode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull rate ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull colorTemperatureMinimumMireds ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull colorTemperatureMaximumMireds ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRColorControlClusterStepColorTemperatureParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull stepMode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull stepSize ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull colorTemperatureMinimumMireds ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull colorTemperatureMaximumMireds ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWiFiNetworkManagementClusterNetworkPassphraseRequestParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWiFiNetworkManagementClusterNetworkPassphraseResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull passphrase ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRWiFiNetworkManagementClusterNetworkPassphraseResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThreadBorderRouterManagementClusterGetActiveDatasetRequestParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThreadBorderRouterManagementClusterGetPendingDatasetRequestParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThreadBorderRouterManagementClusterDatasetResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull dataset ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRThreadBorderRouterManagementClusterDatasetResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThreadBorderRouterManagementClusterSetActiveDatasetRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull activeDataset ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable breadcrumb ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThreadBorderRouterManagementClusterSetPendingDatasetRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull pendingDataset ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThreadNetworkDirectoryClusterAddNetworkParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull operationalDataset ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThreadNetworkDirectoryClusterRemoveNetworkParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull extendedPanID ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThreadNetworkDirectoryClusterGetOperationalDatasetParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull extendedPanID ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRThreadNetworkDirectoryClusterOperationalDatasetResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull operationalDataset ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRThreadNetworkDirectoryClusterOperationalDatasetResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRChannelClusterChangeChannelParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nonnull match ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRChannelClusterChangeChannelResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable data ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRChannelClusterChangeChannelResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRChannelClusterChangeChannelByNumberParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull majorNumber ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull minorNumber ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRChannelClusterSkipChannelParams : NSObject <NSCopying>

@property (nonatomic, copy, getter=getCount) NSNumber * _Nonnull count ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRChannelClusterGetProgramGuideParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nullable startTime ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable endTime ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSArray * _Nullable channelList ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) ZGMTRChannelClusterPageTokenStruct * _Nullable pageToken ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable recordingFlag ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSArray * _Nullable externalIDList ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSData * _Nullable data ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRChannelClusterProgramGuideResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRChannelClusterChannelPagingStruct * _Nonnull paging ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSArray * _Nonnull programList ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRChannelClusterProgramGuideResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRChannelClusterRecordProgramParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nonnull programIdentifier ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull shouldRecordSeries ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSArray * _Nonnull externalIDList ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSData * _Nonnull data ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRChannelClusterCancelRecordProgramParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nonnull programIdentifier ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull shouldRecordSeries ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSArray * _Nonnull externalIDList ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSData * _Nonnull data ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRTargetNavigatorClusterNavigateTargetParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull target ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable data ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRTargetNavigatorClusterNavigateTargetResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable data ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRTargetNavigatorClusterNavigateTargetResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRMediaPlaybackClusterPlayParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRMediaPlaybackClusterPauseParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRMediaPlaybackClusterStopParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRMediaPlaybackClusterStopParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRMediaPlaybackClusterStopPlaybackParams : ZGMTRMediaPlaybackClusterStopParams
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRMediaPlaybackClusterStartOverParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRMediaPlaybackClusterPreviousParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRMediaPlaybackClusterNextParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRMediaPlaybackClusterRewindParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nullable audioAdvanceUnmuted ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRMediaPlaybackClusterFastForwardParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nullable audioAdvanceUnmuted ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRMediaPlaybackClusterSkipForwardParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull deltaPositionMilliseconds ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRMediaPlaybackClusterSkipBackwardParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull deltaPositionMilliseconds ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRMediaPlaybackClusterPlaybackResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable data ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRMediaPlaybackClusterPlaybackResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRMediaPlaybackClusterSeekParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull position ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRMediaPlaybackClusterActivateAudioTrackParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nonnull trackID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull audioOutputIndex ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRMediaPlaybackClusterActivateTextTrackParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nonnull trackID ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRMediaPlaybackClusterDeactivateTextTrackParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRMediaInputClusterSelectInputParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull index ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRMediaInputClusterShowInputStatusParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRMediaInputClusterHideInputStatusParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRMediaInputClusterRenameInputParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull index ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRLowPowerClusterSleepParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRKeypadInputClusterSendKeyParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull keyCode ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRKeypadInputClusterSendKeyResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRKeypadInputClusterSendKeyResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRContentLauncherClusterLaunchContentParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRContentLauncherClusterContentSearchStruct * _Nonnull search ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull autoPlay ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable data ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) ZGMTRContentLauncherClusterPlaybackPreferencesStruct * _Nullable playbackPreferences ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable useCurrentContext ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRContentLauncherClusterLaunchURLParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nonnull contentURL ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable displayString ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) ZGMTRContentLauncherClusterBrandingInformationStruct * _Nullable brandingInformation ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRContentLauncherClusterLauncherResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSString * _Nullable data ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRContentLauncherClusterLauncherResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use ZGMTRContentLauncherClusterLauncherResponseParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRContentLauncherClusterLaunchResponseParams : ZGMTRContentLauncherClusterLauncherResponseParams

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_DEPRECATED("The status field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSString * _Nullable data ZGMTR_DEPRECATED("The data field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRAudioOutputClusterSelectOutputParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull index ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRAudioOutputClusterRenameOutputParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull index ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nonnull name ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRApplicationLauncherClusterLaunchAppParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRApplicationLauncherClusterApplicationStruct * _Nullable application ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nullable data ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRApplicationLauncherClusterStopAppParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRApplicationLauncherClusterApplicationStruct * _Nullable application ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRApplicationLauncherClusterHideAppParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRApplicationLauncherClusterApplicationStruct * _Nullable application ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRApplicationLauncherClusterLauncherResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nullable data ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRApplicationLauncherClusterLauncherResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRAccountLoginClusterGetSetupPINParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nonnull tempAccountIdentifier ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRAccountLoginClusterGetSetupPINResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nonnull setupPIN ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRAccountLoginClusterGetSetupPINResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRAccountLoginClusterLoginParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nonnull tempAccountIdentifier ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nonnull setupPIN ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable node ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.1), macos(13.0), watchos(9.1), tvos(16.1))
@interface ZGMTRAccountLoginClusterLogoutParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nullable node ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRContentControlClusterUpdatePINParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nullable oldPIN ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy, getter=getNewPIN) NSString * _Nonnull newPIN ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRContentControlClusterResetPINParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRContentControlClusterResetPINResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nonnull pinCode ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRContentControlClusterResetPINResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRContentControlClusterEnableParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRContentControlClusterDisableParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRContentControlClusterAddBonusTimeParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nullable pinCode ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable bonusTime ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRContentControlClusterSetScreenDailyTimeParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull screenTime ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRContentControlClusterBlockUnratedContentParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRContentControlClusterUnblockUnratedContentParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRContentControlClusterSetOnDemandRatingThresholdParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nonnull rating ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRContentControlClusterSetScheduledContentRatingThresholdParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nonnull rating ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRContentAppObserverClusterContentAppMessageParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nullable data ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nonnull encodingHint ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRContentAppObserverClusterContentAppMessageResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nullable data ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nullable encodingHint ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRContentAppObserverClusterContentAppMessageResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWebRTCTransportProviderClusterSolicitOfferParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull streamType ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable videoStreamID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable audioStreamID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSArray * _Nullable iceServers ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nullable iceTransportPolicy ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable metadataOptions ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWebRTCTransportProviderClusterSolicitOfferResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull webRTCSessionID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull deferredOffer ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable videoStreamID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable audioStreamID ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRWebRTCTransportProviderClusterSolicitOfferResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWebRTCTransportProviderClusterProvideOfferParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nullable webRTCSessionID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nonnull sdp ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull streamType ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable videoStreamID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable audioStreamID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSArray * _Nullable iceServers ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nullable iceTransportPolicy ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nullable metadataOptions ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWebRTCTransportProviderClusterProvideOfferResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull webRTCSessionID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull videoStreamID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull audioStreamID ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRWebRTCTransportProviderClusterProvideOfferResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWebRTCTransportProviderClusterProvideAnswerParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull webRTCSessionID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nonnull sdp ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWebRTCTransportProviderClusterProvideICECandidateParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull webRTCSessionID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nonnull iceCandidate ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRWebRTCTransportProviderClusterEndSessionParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull webRTCSessionID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull reason ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRChimeClusterPlayChimeSoundParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRCommissionerControlClusterRequestCommissioningApprovalParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull requestID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull vendorID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull productID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSString * _Nullable label ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRCommissionerControlClusterCommissionNodeParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull requestID ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull responseTimeoutSeconds ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRCommissionerControlClusterReverseOpenCommissioningWindowParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull commissioningTimeout ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSData * _Nonnull pakePasscodeVerifier ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull discriminator ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull iterations ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSData * _Nonnull salt ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRCommissionerControlClusterReverseOpenCommissioningWindowParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestParams : ZGMTRUnitTestingClusterTestParams
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestSpecificResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull returnValue ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRUnitTestingClusterTestSpecificResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestSpecificResponseParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestSpecificResponseParams : ZGMTRUnitTestingClusterTestSpecificResponseParams

@property (nonatomic, copy) NSNumber * _Nonnull returnValue ZGMTR_DEPRECATED("The returnValue field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestNotHandledParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestNotHandledParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestNotHandledParams : ZGMTRUnitTestingClusterTestNotHandledParams
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestAddArgumentsResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull returnValue ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRUnitTestingClusterTestAddArgumentsResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestAddArgumentsResponseParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestAddArgumentsResponseParams : ZGMTRUnitTestingClusterTestAddArgumentsResponseParams

@property (nonatomic, copy) NSNumber * _Nonnull returnValue ZGMTR_DEPRECATED("The returnValue field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestSpecificParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestSpecificParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestSpecificParams : ZGMTRUnitTestingClusterTestSpecificParams
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestSimpleArgumentResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull returnValue ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRUnitTestingClusterTestSimpleArgumentResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestSimpleArgumentResponseParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestSimpleArgumentResponseParams : ZGMTRUnitTestingClusterTestSimpleArgumentResponseParams

@property (nonatomic, copy) NSNumber * _Nonnull returnValue ZGMTR_DEPRECATED("The returnValue field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestUnknownCommandParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestUnknownCommandParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestUnknownCommandParams : ZGMTRUnitTestingClusterTestUnknownCommandParams
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestStructArrayArgumentResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nonnull arg2 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nonnull arg3 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nonnull arg4 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg5 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg6 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRUnitTestingClusterTestStructArrayArgumentResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestStructArrayArgumentResponseParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestStructArrayArgumentResponseParams : ZGMTRUnitTestingClusterTestStructArrayArgumentResponseParams

@property (nonatomic, copy) NSArray * _Nonnull arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSArray * _Nonnull arg2 ZGMTR_DEPRECATED("The arg2 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSArray * _Nonnull arg3 ZGMTR_DEPRECATED("The arg3 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSArray * _Nonnull arg4 ZGMTR_DEPRECATED("The arg4 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg5 ZGMTR_DEPRECATED("The arg5 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg6 ZGMTR_DEPRECATED("The arg6 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestAddArgumentsParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg2 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestAddArgumentsParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestAddArgumentsParams : ZGMTRUnitTestingClusterTestAddArgumentsParams

@property (nonatomic, copy) NSNumber * _Nonnull arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg2 ZGMTR_DEPRECATED("The arg2 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestListInt8UReverseResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRUnitTestingClusterTestListInt8UReverseResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestListInt8UReverseResponseParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestListInt8UReverseResponseParams : ZGMTRUnitTestingClusterTestListInt8UReverseResponseParams

@property (nonatomic, copy) NSArray * _Nonnull arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestSimpleArgumentRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestSimpleArgumentRequestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestSimpleArgumentRequestParams : ZGMTRUnitTestingClusterTestSimpleArgumentRequestParams

@property (nonatomic, copy) NSNumber * _Nonnull arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestEnumsResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg2 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRUnitTestingClusterTestEnumsResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestEnumsResponseParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestEnumsResponseParams : ZGMTRUnitTestingClusterTestEnumsResponseParams

@property (nonatomic, copy) NSNumber * _Nonnull arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg2 ZGMTR_DEPRECATED("The arg2 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestStructArrayArgumentRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nonnull arg2 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nonnull arg3 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nonnull arg4 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg5 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg6 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestStructArrayArgumentRequestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestStructArrayArgumentRequestParams : ZGMTRUnitTestingClusterTestStructArrayArgumentRequestParams

@property (nonatomic, copy) NSArray * _Nonnull arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSArray * _Nonnull arg2 ZGMTR_DEPRECATED("The arg2 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSArray * _Nonnull arg3 ZGMTR_DEPRECATED("The arg3 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSArray * _Nonnull arg4 ZGMTR_DEPRECATED("The arg4 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg5 ZGMTR_DEPRECATED("The arg5 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg6 ZGMTR_DEPRECATED("The arg6 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestNullableOptionalResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull wasPresent ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable wasNull ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable value ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable originalValue ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRUnitTestingClusterTestNullableOptionalResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestNullableOptionalResponseParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestNullableOptionalResponseParams : ZGMTRUnitTestingClusterTestNullableOptionalResponseParams

@property (nonatomic, copy) NSNumber * _Nonnull wasPresent ZGMTR_DEPRECATED("The wasPresent field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable wasNull ZGMTR_DEPRECATED("The wasNull field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable value ZGMTR_DEPRECATED("The value field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable originalValue ZGMTR_DEPRECATED("The originalValue field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestStructArgumentRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestStructArgumentRequestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestStructArgumentRequestParams : ZGMTRUnitTestingClusterTestStructArgumentRequestParams

@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nonnull arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestComplexNullableOptionalResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull nullableIntWasNull ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable nullableIntValue ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull optionalIntWasPresent ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable optionalIntValue ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull nullableOptionalIntWasPresent ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable nullableOptionalIntWasNull ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable nullableOptionalIntValue ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull nullableStringWasNull ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSString * _Nullable nullableStringValue ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull optionalStringWasPresent ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSString * _Nullable optionalStringValue ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull nullableOptionalStringWasPresent ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable nullableOptionalStringWasNull ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSString * _Nullable nullableOptionalStringValue ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull nullableStructWasNull ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nullable nullableStructValue ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull optionalStructWasPresent ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nullable optionalStructValue ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull nullableOptionalStructWasPresent ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable nullableOptionalStructWasNull ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nullable nullableOptionalStructValue ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull nullableListWasNull ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nullable nullableListValue ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull optionalListWasPresent ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nullable optionalListValue ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull nullableOptionalListWasPresent ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable nullableOptionalListWasNull ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nullable nullableOptionalListValue ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRUnitTestingClusterTestComplexNullableOptionalResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestComplexNullableOptionalResponseParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestComplexNullableOptionalResponseParams : ZGMTRUnitTestingClusterTestComplexNullableOptionalResponseParams

@property (nonatomic, copy) NSNumber * _Nonnull nullableIntWasNull ZGMTR_DEPRECATED("The nullableIntWasNull field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable nullableIntValue ZGMTR_DEPRECATED("The nullableIntValue field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull optionalIntWasPresent ZGMTR_DEPRECATED("The optionalIntWasPresent field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable optionalIntValue ZGMTR_DEPRECATED("The optionalIntValue field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull nullableOptionalIntWasPresent ZGMTR_DEPRECATED("The nullableOptionalIntWasPresent field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable nullableOptionalIntWasNull ZGMTR_DEPRECATED("The nullableOptionalIntWasNull field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable nullableOptionalIntValue ZGMTR_DEPRECATED("The nullableOptionalIntValue field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull nullableStringWasNull ZGMTR_DEPRECATED("The nullableStringWasNull field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSString * _Nullable nullableStringValue ZGMTR_DEPRECATED("The nullableStringValue field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull optionalStringWasPresent ZGMTR_DEPRECATED("The optionalStringWasPresent field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSString * _Nullable optionalStringValue ZGMTR_DEPRECATED("The optionalStringValue field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull nullableOptionalStringWasPresent ZGMTR_DEPRECATED("The nullableOptionalStringWasPresent field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable nullableOptionalStringWasNull ZGMTR_DEPRECATED("The nullableOptionalStringWasNull field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSString * _Nullable nullableOptionalStringValue ZGMTR_DEPRECATED("The nullableOptionalStringValue field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull nullableStructWasNull ZGMTR_DEPRECATED("The nullableStructWasNull field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nullable nullableStructValue ZGMTR_DEPRECATED("The nullableStructValue field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull optionalStructWasPresent ZGMTR_DEPRECATED("The optionalStructWasPresent field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nullable optionalStructValue ZGMTR_DEPRECATED("The optionalStructValue field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull nullableOptionalStructWasPresent ZGMTR_DEPRECATED("The nullableOptionalStructWasPresent field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable nullableOptionalStructWasNull ZGMTR_DEPRECATED("The nullableOptionalStructWasNull field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nullable nullableOptionalStructValue ZGMTR_DEPRECATED("The nullableOptionalStructValue field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull nullableListWasNull ZGMTR_DEPRECATED("The nullableListWasNull field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSArray * _Nullable nullableListValue ZGMTR_DEPRECATED("The nullableListValue field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull optionalListWasPresent ZGMTR_DEPRECATED("The optionalListWasPresent field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSArray * _Nullable optionalListValue ZGMTR_DEPRECATED("The optionalListValue field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull nullableOptionalListWasPresent ZGMTR_DEPRECATED("The nullableOptionalListWasPresent field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable nullableOptionalListWasNull ZGMTR_DEPRECATED("The nullableOptionalListWasNull field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSArray * _Nullable nullableOptionalListValue ZGMTR_DEPRECATED("The nullableOptionalListValue field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestNestedStructArgumentRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRUnitTestingClusterNestedStruct * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestNestedStructArgumentRequestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestNestedStructArgumentRequestParams : ZGMTRUnitTestingClusterTestNestedStructArgumentRequestParams

@property (nonatomic, copy) ZGMTRUnitTestingClusterNestedStruct * _Nonnull arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterBooleanResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRUnitTestingClusterBooleanResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterBooleanResponseParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterBooleanResponseParams : ZGMTRUnitTestingClusterBooleanResponseParams

@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_DEPRECATED("The value field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestListStructArgumentRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestListStructArgumentRequestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestListStructArgumentRequestParams : ZGMTRUnitTestingClusterTestListStructArgumentRequestParams

@property (nonatomic, copy) NSArray * _Nonnull arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterSimpleStructResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRUnitTestingClusterSimpleStructResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterSimpleStructResponseParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterSimpleStructResponseParams : ZGMTRUnitTestingClusterSimpleStructResponseParams

@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nonnull arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestListInt8UArgumentRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestListInt8UArgumentRequestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestListInt8UArgumentRequestParams : ZGMTRUnitTestingClusterTestListInt8UArgumentRequestParams

@property (nonatomic, copy) NSArray * _Nonnull arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestEmitTestEventResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRUnitTestingClusterTestEmitTestEventResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestEmitTestEventResponseParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestEmitTestEventResponseParams : ZGMTRUnitTestingClusterTestEmitTestEventResponseParams

@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_DEPRECATED("The value field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestNestedStructListArgumentRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRUnitTestingClusterNestedStructList * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestNestedStructListArgumentRequestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestNestedStructListArgumentRequestParams : ZGMTRUnitTestingClusterTestNestedStructListArgumentRequestParams

@property (nonatomic, copy) ZGMTRUnitTestingClusterNestedStructList * _Nonnull arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestEmitTestFabricScopedEventResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Initialize an ZGMTRUnitTestingClusterTestEmitTestFabricScopedEventResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_AVAILABLE(ios(17.0), macos(14.0), watchos(10.0), tvos(17.0));
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestEmitTestFabricScopedEventResponseParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestEmitTestFabricScopedEventResponseParams : ZGMTRUnitTestingClusterTestEmitTestFabricScopedEventResponseParams

@property (nonatomic, copy) NSNumber * _Nonnull value ZGMTR_DEPRECATED("The value field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs ZGMTR_DEPRECATED("Timed invoke does not make sense for server to client commands", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestListNestedStructListArgumentRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestListNestedStructListArgumentRequestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestListNestedStructListArgumentRequestParams : ZGMTRUnitTestingClusterTestListNestedStructListArgumentRequestParams

@property (nonatomic, copy) NSArray * _Nonnull arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRUnitTestingClusterTestBatchHelperResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull buffer ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRUnitTestingClusterTestBatchHelperResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestListInt8UReverseRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestListInt8UReverseRequestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestListInt8UReverseRequestParams : ZGMTRUnitTestingClusterTestListInt8UReverseRequestParams

@property (nonatomic, copy) NSArray * _Nonnull arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRUnitTestingClusterStringEchoResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull payload ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRUnitTestingClusterStringEchoResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestEnumsRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg2 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestEnumsRequestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestEnumsRequestParams : ZGMTRUnitTestingClusterTestEnumsRequestParams

@property (nonatomic, copy) NSNumber * _Nonnull arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg2 ZGMTR_DEPRECATED("The arg2 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRUnitTestingClusterGlobalEchoResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRDataTypeTestGlobalStruct * _Nonnull field1 ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull field2 ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRUnitTestingClusterGlobalEchoResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestNullableOptionalRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nullable arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestNullableOptionalRequestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestNullableOptionalRequestParams : ZGMTRUnitTestingClusterTestNullableOptionalRequestParams

@property (nonatomic, copy) NSNumber * _Nullable arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestComplexNullableOptionalRequestParams : NSObject <NSCopying>

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
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestComplexNullableOptionalRequestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestComplexNullableOptionalRequestParams : ZGMTRUnitTestingClusterTestComplexNullableOptionalRequestParams

@property (nonatomic, copy) NSNumber * _Nullable nullableInt ZGMTR_DEPRECATED("The nullableInt field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable optionalInt ZGMTR_DEPRECATED("The optionalInt field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable nullableOptionalInt ZGMTR_DEPRECATED("The nullableOptionalInt field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSString * _Nullable nullableString ZGMTR_DEPRECATED("The nullableString field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSString * _Nullable optionalString ZGMTR_DEPRECATED("The optionalString field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSString * _Nullable nullableOptionalString ZGMTR_DEPRECATED("The nullableOptionalString field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nullable nullableStruct ZGMTR_DEPRECATED("The nullableStruct field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nullable optionalStruct ZGMTR_DEPRECATED("The optionalStruct field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nullable nullableOptionalStruct ZGMTR_DEPRECATED("The nullableOptionalStruct field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSArray * _Nullable nullableList ZGMTR_DEPRECATED("The nullableList field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSArray * _Nullable optionalList ZGMTR_DEPRECATED("The optionalList field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSArray * _Nullable nullableOptionalList ZGMTR_DEPRECATED("The nullableOptionalList field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterSimpleStructEchoRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterSimpleStructEchoRequestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterSimpleStructEchoRequestParams : ZGMTRUnitTestingClusterSimpleStructEchoRequestParams

@property (nonatomic, copy) ZGMTRUnitTestingClusterSimpleStruct * _Nonnull arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTimedInvokeRequestParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTimedInvokeRequestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTimedInvokeRequestParams : ZGMTRUnitTestingClusterTimedInvokeRequestParams
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestSimpleOptionalArgumentRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nullable arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestSimpleOptionalArgumentRequestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestSimpleOptionalArgumentRequestParams : ZGMTRUnitTestingClusterTestSimpleOptionalArgumentRequestParams

@property (nonatomic, copy) NSNumber * _Nullable arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestEmitTestEventRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg2 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg3 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestEmitTestEventRequestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestEmitTestEventRequestParams : ZGMTRUnitTestingClusterTestEmitTestEventRequestParams

@property (nonatomic, copy) NSNumber * _Nonnull arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg2 ZGMTR_DEPRECATED("The arg2 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg3 ZGMTR_DEPRECATED("The arg3 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4))
@interface ZGMTRUnitTestingClusterTestEmitTestFabricScopedEventRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull arg1 ZGMTR_AVAILABLE(ios(16.4), macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_DEPRECATED("Please use ZGMTRUnitTestingClusterTestEmitTestFabricScopedEventRequestParams", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface ZGMTRTestClusterClusterTestEmitTestFabricScopedEventRequestParams : ZGMTRUnitTestingClusterTestEmitTestFabricScopedEventRequestParams

@property (nonatomic, copy) NSNumber * _Nonnull arg1 ZGMTR_DEPRECATED("The arg1 field will be removed", ios(16.1, 16.4), macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRUnitTestingClusterTestBatchHelperRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull sleepBeforeResponseTimeMs ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull sizeOfResponseBuffer ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull fillCharacter ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRUnitTestingClusterTestSecondBatchHelperRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull sleepBeforeResponseTimeMs ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull sizeOfResponseBuffer ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull fillCharacter ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRUnitTestingClusterStringEchoRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull payload ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRUnitTestingClusterGlobalEchoRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) ZGMTRDataTypeTestGlobalStruct * _Nonnull field1 ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull field2 ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRUnitTestingClusterTestDifferentVendorMeiRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull arg1 ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRUnitTestingClusterTestDifferentVendorMeiResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull arg1 ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull eventNumber ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRUnitTestingClusterTestDifferentVendorMeiResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRSampleMEIClusterPingParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRSampleMEIClusterAddArgumentsResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull returnValue ZGMTR_PROVISIONALLY_AVAILABLE;

/**
 * Initialize an ZGMTRSampleMEIClusterAddArgumentsResponseParams with a response-value dictionary
 * of the sort that ZGMTRDeviceResponseHandler would receive.
 *
 * Will return nil and hand out an error if the response-value dictionary is not
 * a command data response or is not the right command response.
 *
 * Will return nil and hand out an error if the data response does not match the known
 * schema for this command.
 */
- (nullable instancetype)initWithResponseValue:(NSDictionary<NSString *, id> *)responseValue
                                         error:(NSError * __autoreleasing *)error ZGMTR_PROVISIONALLY_AVAILABLE;
@end

ZGMTR_PROVISIONALLY_AVAILABLE
@interface ZGMTRSampleMEIClusterAddArgumentsParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull arg1 ZGMTR_PROVISIONALLY_AVAILABLE;

@property (nonatomic, copy) NSNumber * _Nonnull arg2 ZGMTR_PROVISIONALLY_AVAILABLE;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

NS_ASSUME_NONNULL_END
