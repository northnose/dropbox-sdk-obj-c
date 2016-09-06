///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBTEAMRemovedStatus;

#pragma mark - API Object

///
/// The `TeamMemberStatus` union.
///
/// The user's status as a member of a specific team.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMTeamMemberStatus : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBTEAMTeamMemberStatusTag` enum type represents the possible tag states with which the
/// `DBTEAMTeamMemberStatus` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMTeamMemberStatusTag) {
  /// User has successfully joined the team.
  DBTEAMTeamMemberStatusActive,

  /// User has been invited to a team, but has not joined the team yet.
  DBTEAMTeamMemberStatusInvited,

  /// User is no longer a member of the team, but the account can be un-suspended, re-establishing
  /// the user as a team member.
  DBTEAMTeamMemberStatusSuspended,

  /// User is no longer a member of the team. Removed users are only listed when include_removed
  /// is true in members/list.
  DBTEAMTeamMemberStatusRemoved,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBTEAMTeamMemberStatusTag tag;

/// User is no longer a member of the team. Removed users are only listed when include_removed is
/// true in members/list. @note Ensure the `isRemoved` method returns true before accessing,
/// otherwise a runtime exception will be raised.
@property(nonatomic, readonly) DBTEAMRemovedStatus * _Nonnull removed;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "active".
///
/// Description of the "active" tag state: User has successfully joined the team.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithActive;

///
/// Initializes union class with tag state of "invited".
///
/// Description of the "invited" tag state: User has been invited to a team, but has not joined the
/// team yet.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithInvited;

///
/// Initializes union class with tag state of "suspended".
///
/// Description of the "suspended" tag state: User is no longer a member of the team, but the
/// account can be un-suspended, re-establishing the user as a team member.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithSuspended;

///
/// Initializes union class with tag state of "removed".
///
/// Description of the "removed" tag state: User is no longer a member of the team. Removed users
/// are only listed when include_removed is true in members/list.
///
/// @param removed User is no longer a member of the team. Removed users are only listed when
/// include_removed is true in members/list.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithRemoved:(DBTEAMRemovedStatus * _Nonnull)removed;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "active".
///
/// @return Whether the union's current tag state has value "active".
///
- (BOOL)isActive;

///
/// Retrieves whether the union's current tag state has value "invited".
///
/// @return Whether the union's current tag state has value "invited".
///
- (BOOL)isInvited;

///
/// Retrieves whether the union's current tag state has value "suspended".
///
/// @return Whether the union's current tag state has value "suspended".
///
- (BOOL)isSuspended;

///
/// Retrieves whether the union's current tag state has value "removed".
///
/// @note Call this method and ensure it returns true before accessing the `removed` property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "removed".
///
- (BOOL)isRemoved;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMTeamMemberStatus` union.
///
@interface DBTEAMTeamMemberStatusSerializer : NSObject

///
/// Serializes `DBTEAMTeamMemberStatus` instances.
///
/// @param instance An instance of the `DBTEAMTeamMemberStatus` API object.
///
/// @return A json-compatible dictionary representation of the `DBTEAMTeamMemberStatus` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMTeamMemberStatus * _Nonnull)instance;

///
/// Deserializes `DBTEAMTeamMemberStatus` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBTEAMTeamMemberStatus` API
/// object.
///
/// @return An instantiation of the `DBTEAMTeamMemberStatus` object.
///
+ (DBTEAMTeamMemberStatus * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
