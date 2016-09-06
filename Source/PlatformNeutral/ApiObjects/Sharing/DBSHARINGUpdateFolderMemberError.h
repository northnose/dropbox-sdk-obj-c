///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGAddFolderMemberError;
@class DBSHARINGSharedFolderAccessError;
@class DBSHARINGSharedFolderMemberError;

#pragma mark - API Object

///
/// The `UpdateFolderMemberError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGUpdateFolderMemberError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBSHARINGUpdateFolderMemberErrorTag` enum type represents the possible tag states with
/// which the `DBSHARINGUpdateFolderMemberError` union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGUpdateFolderMemberErrorTag) {
  /// (no description).
  DBSHARINGUpdateFolderMemberErrorAccessError,

  /// (no description).
  DBSHARINGUpdateFolderMemberErrorMemberError,

  /// If updating the access type required the member to be added to the shared folder and there
  /// was an error when adding the member.
  DBSHARINGUpdateFolderMemberErrorNoExplicitAccess,

  /// The current user's account doesn't support this action. An example of this is when
  /// downgrading a member from editor to viewer. This action can only be performed by users that
  /// have upgraded to a Pro or Business plan.
  DBSHARINGUpdateFolderMemberErrorInsufficientPlan,

  /// The current user does not have permission to perform this action.
  DBSHARINGUpdateFolderMemberErrorNoPermission,

  /// (no description).
  DBSHARINGUpdateFolderMemberErrorOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBSHARINGUpdateFolderMemberErrorTag tag;

/// (no description). @note Ensure the `isAccessError` method returns true before accessing,
/// otherwise a runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGSharedFolderAccessError * _Nonnull accessError;

/// (no description). @note Ensure the `isMemberError` method returns true before accessing,
/// otherwise a runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGSharedFolderMemberError * _Nonnull memberError;

/// If updating the access type required the member to be added to the shared folder and there was
/// an error when adding the member. @note Ensure the `isNoExplicitAccess` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGAddFolderMemberError * _Nonnull noExplicitAccess;

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
/// Initializes union class with tag state of "no_explicit_access".
///
/// Description of the "no_explicit_access" tag state: If updating the access type required the
/// member to be added to the shared folder and there was an error when adding the member.
///
/// @param noExplicitAccess If updating the access type required the member to be added to the
/// shared folder and there was an error when adding the member.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithNoExplicitAccess:(DBSHARINGAddFolderMemberError * _Nonnull)noExplicitAccess;

///
/// Initializes union class with tag state of "insufficient_plan".
///
/// Description of the "insufficient_plan" tag state: The current user's account doesn't support
/// this action. An example of this is when downgrading a member from editor to viewer. This action
/// can only be performed by users that have upgraded to a Pro or Business plan.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithInsufficientPlan;

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
/// Retrieves whether the union's current tag state has value "no_explicit_access".
///
/// @note Call this method and ensure it returns true before accessing the `noExplicitAccess`
/// property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "no_explicit_access".
///
- (BOOL)isNoExplicitAccess;

///
/// Retrieves whether the union's current tag state has value "insufficient_plan".
///
/// @return Whether the union's current tag state has value "insufficient_plan".
///
- (BOOL)isInsufficientPlan;

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
/// The serialization class for the `DBSHARINGUpdateFolderMemberError` union.
///
@interface DBSHARINGUpdateFolderMemberErrorSerializer : NSObject

///
/// Serializes `DBSHARINGUpdateFolderMemberError` instances.
///
/// @param instance An instance of the `DBSHARINGUpdateFolderMemberError` API object.
///
/// @return A json-compatible dictionary representation of the `DBSHARINGUpdateFolderMemberError`
/// API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGUpdateFolderMemberError * _Nonnull)instance;

///
/// Deserializes `DBSHARINGUpdateFolderMemberError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGUpdateFolderMemberError` API object.
///
/// @return An instantiation of the `DBSHARINGUpdateFolderMemberError` object.
///
+ (DBSHARINGUpdateFolderMemberError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
