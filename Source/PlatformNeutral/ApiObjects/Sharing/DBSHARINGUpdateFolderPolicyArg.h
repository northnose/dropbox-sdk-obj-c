///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGAclUpdatePolicy;
@class DBSHARINGMemberPolicy;
@class DBSHARINGSharedLinkPolicy;

#pragma mark - API Object

///
/// The `UpdateFolderPolicyArg` struct.
///
/// If any of the policy's are unset, then they retain their current setting.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGUpdateFolderPolicyArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The ID for the shared folder.
@property(nonatomic, readonly, copy) NSString * _Nonnull sharedFolderId;

/// Who can be a member of this shared folder. Only applicable if the current user is on a team.
@property(nonatomic, readonly) DBSHARINGMemberPolicy * _Nullable memberPolicy;

/// Who can add and remove members of this shared folder.
@property(nonatomic, readonly) DBSHARINGAclUpdatePolicy * _Nullable aclUpdatePolicy;

/// The policy to apply to shared links created for content inside this shared folder. The current
/// user must be on a team to set this policy to `members` in `DBSHARINGSharedLinkPolicy`.
@property(nonatomic, readonly) DBSHARINGSharedLinkPolicy * _Nullable sharedLinkPolicy;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sharedFolderId The ID for the shared folder.
/// @param memberPolicy Who can be a member of this shared folder. Only applicable if the current
/// user is on a team.
/// @param aclUpdatePolicy Who can add and remove members of this shared folder.
/// @param sharedLinkPolicy The policy to apply to shared links created for content inside this
/// shared folder. The current user must be on a team to set this policy to `members` in
/// `DBSHARINGSharedLinkPolicy`.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId
                                  memberPolicy:(DBSHARINGMemberPolicy * _Nullable)memberPolicy
                               aclUpdatePolicy:(DBSHARINGAclUpdatePolicy * _Nullable)aclUpdatePolicy
                              sharedLinkPolicy:(DBSHARINGSharedLinkPolicy * _Nullable)sharedLinkPolicy;

///
/// Convenience constructor (exposes only non-nullable instance variables with no default value).
///
/// @param sharedFolderId The ID for the shared folder.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `UpdateFolderPolicyArg` struct.
///
@interface DBSHARINGUpdateFolderPolicyArgSerializer : NSObject

///
/// Serializes `DBSHARINGUpdateFolderPolicyArg` instances.
///
/// @param instance An instance of the `DBSHARINGUpdateFolderPolicyArg` API object.
///
/// @return A json-compatible dictionary representation of the `DBSHARINGUpdateFolderPolicyArg` API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGUpdateFolderPolicyArg * _Nonnull)instance;

///
/// Deserializes `DBSHARINGUpdateFolderPolicyArg` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBSHARINGUpdateFolderPolicyArg`
/// API object.
///
/// @return An instantiation of the `DBSHARINGUpdateFolderPolicyArg` object.
///
+ (DBSHARINGUpdateFolderPolicyArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
