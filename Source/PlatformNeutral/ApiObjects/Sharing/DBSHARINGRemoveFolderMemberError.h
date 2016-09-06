///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGSharedFolderAccessError;
@class DBSHARINGSharedFolderMemberError;

#pragma mark - API Object

///
/// The `RemoveFolderMemberError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGRemoveFolderMemberError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBSHARINGRemoveFolderMemberErrorTag` enum type represents the possible tag states with
/// which the `DBSHARINGRemoveFolderMemberError` union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGRemoveFolderMemberErrorTag) {
  /// (no description).
  DBSHARINGRemoveFolderMemberErrorAccessError,

  /// (no description).
  DBSHARINGRemoveFolderMemberErrorMemberError,

  /// The target user is the owner of the shared folder. You can't remove this user until
  /// ownership has been transferred to another member.
  DBSHARINGRemoveFolderMemberErrorFolderOwner,

  /// The target user has access to the shared folder via a group.
  DBSHARINGRemoveFolderMemberErrorGroupAccess,

  /// This action cannot be performed on a team shared folder.
  DBSHARINGRemoveFolderMemberErrorTeamFolder,

  /// The current user does not have permission to perform this action.
  DBSHARINGRemoveFolderMemberErrorNoPermission,

  /// (no description).
  DBSHARINGRemoveFolderMemberErrorOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBSHARINGRemoveFolderMemberErrorTag tag;

/// (no description). @note Ensure the `isAccessError` method returns true before accessing,
/// otherwise a runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGSharedFolderAccessError * _Nonnull accessError;

/// (no description). @note Ensure the `isMemberError` method returns true before accessing,
/// otherwise a runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGSharedFolderMemberError * _Nonnull memberError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "access_error".
///
/// @param accessError (no description).
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithAccessError:(DBSHARINGSharedFolderAccessError * _Nonnull)accessError;

///
/// Initializes union class with tag state of "member_error".
///
/// @param memberError (no description).
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithMemberError:(DBSHARINGSharedFolderMemberError * _Nonnull)memberError;

///
/// Initializes union class with tag state of "folder_owner".
///
/// Description of the "folder_owner" tag state: The target user is the owner of the shared folder.
/// You can't remove this user until ownership has been transferred to another member.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithFolderOwner;

///
/// Initializes union class with tag state of "group_access".
///
/// Description of the "group_access" tag state: The target user has access to the shared folder via
/// a group.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithGroupAccess;

///
/// Initializes union class with tag state of "team_folder".
///
/// Description of the "team_folder" tag state: This action cannot be performed on a team shared
/// folder.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTeamFolder;

///
/// Initializes union class with tag state of "no_permission".
///
/// Description of the "no_permission" tag state: The current user does not have permission to
/// perform this action.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithNoPermission;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "access_error".
///
/// @note Call this method and ensure it returns true before accessing the `accessError` property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "access_error".
///
- (BOOL)isAccessError;

///
/// Retrieves whether the union's current tag state has value "member_error".
///
/// @note Call this method and ensure it returns true before accessing the `memberError` property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "member_error".
///
- (BOOL)isMemberError;

///
/// Retrieves whether the union's current tag state has value "folder_owner".
///
/// @return Whether the union's current tag state has value "folder_owner".
///
- (BOOL)isFolderOwner;

///
/// Retrieves whether the union's current tag state has value "group_access".
///
/// @return Whether the union's current tag state has value "group_access".
///
- (BOOL)isGroupAccess;

///
/// Retrieves whether the union's current tag state has value "team_folder".
///
/// @return Whether the union's current tag state has value "team_folder".
///
- (BOOL)isTeamFolder;

///
/// Retrieves whether the union's current tag state has value "no_permission".
///
/// @return Whether the union's current tag state has value "no_permission".
///
- (BOOL)isNoPermission;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBSHARINGRemoveFolderMemberError` union.
///
@interface DBSHARINGRemoveFolderMemberErrorSerializer : NSObject

///
/// Serializes `DBSHARINGRemoveFolderMemberError` instances.
///
/// @param instance An instance of the `DBSHARINGRemoveFolderMemberError` API object.
///
/// @return A json-compatible dictionary representation of the `DBSHARINGRemoveFolderMemberError`
/// API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGRemoveFolderMemberError * _Nonnull)instance;

///
/// Deserializes `DBSHARINGRemoveFolderMemberError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGRemoveFolderMemberError` API object.
///
/// @return An instantiation of the `DBSHARINGRemoveFolderMemberError` object.
///
+ (DBSHARINGRemoveFolderMemberError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
