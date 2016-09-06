///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBTEAMGroupMemberInfo;

#pragma mark - API Object

///
/// The `GroupsMembersListResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMGroupsMembersListResult : NSObject <DBSerializable>

#pragma mark - Instance fields

/// (no description).
@property(nonatomic, readonly) NSArray<DBTEAMGroupMemberInfo *> * _Nonnull members;

/// Pass the cursor into `groupsMembersListContinue` to obtain additional group members.
@property(nonatomic, readonly, copy) NSString * _Nonnull cursor;

/// Is true if there are additional group members that have not been returned yet. An additional
/// call to `groupsMembersListContinue` can retrieve them.
@property(nonatomic, readonly) NSNumber * _Nonnull hasMore;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param members (no description).
/// @param cursor Pass the cursor into `groupsMembersListContinue` to obtain additional group
/// members.
/// @param hasMore Is true if there are additional group members that have not been returned yet. An
/// additional call to `groupsMembersListContinue` can retrieve them.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithMembers:(NSArray<DBTEAMGroupMemberInfo *> * _Nonnull)members
                                 cursor:(NSString * _Nonnull)cursor
                                hasMore:(NSNumber * _Nonnull)hasMore;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupsMembersListResult` struct.
///
@interface DBTEAMGroupsMembersListResultSerializer : NSObject

///
/// Serializes `DBTEAMGroupsMembersListResult` instances.
///
/// @param instance An instance of the `DBTEAMGroupsMembersListResult` API object.
///
/// @return A json-compatible dictionary representation of the `DBTEAMGroupsMembersListResult` API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMGroupsMembersListResult * _Nonnull)instance;

///
/// Deserializes `DBTEAMGroupsMembersListResult` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBTEAMGroupsMembersListResult`
/// API object.
///
/// @return An instantiation of the `DBTEAMGroupsMembersListResult` object.
///
+ (DBTEAMGroupsMembersListResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
