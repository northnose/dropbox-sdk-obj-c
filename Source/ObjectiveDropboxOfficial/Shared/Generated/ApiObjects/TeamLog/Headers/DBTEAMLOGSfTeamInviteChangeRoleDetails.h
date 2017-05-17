///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSfTeamInviteChangeRoleDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SfTeamInviteChangeRoleDetails` struct.
///
/// Changed a team member's role in a shared folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSfTeamInviteChangeRoleDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Target asset index.
@property (nonatomic, readonly) NSNumber *targetIndex;

/// Original shared folder name.
@property (nonatomic, readonly, copy) NSString *originalFolderName;

/// Sharing permission. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *sharingPermission;

/// Previous sharing permission. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *previousSharingPermission;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param targetIndex Target asset index.
/// @param originalFolderName Original shared folder name.
/// @param sharingPermission Sharing permission. Might be missing due to
/// historical data gap.
/// @param previousSharingPermission Previous sharing permission. Might be
/// missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetIndex:(NSNumber *)targetIndex
                 originalFolderName:(NSString *)originalFolderName
                  sharingPermission:(nullable NSString *)sharingPermission
          previousSharingPermission:(nullable NSString *)previousSharingPermission;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param targetIndex Target asset index.
/// @param originalFolderName Original shared folder name.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetIndex:(NSNumber *)targetIndex originalFolderName:(NSString *)originalFolderName;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SfTeamInviteChangeRoleDetails` struct.
///
@interface DBTEAMLOGSfTeamInviteChangeRoleDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSfTeamInviteChangeRoleDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGSfTeamInviteChangeRoleDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSfTeamInviteChangeRoleDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGSfTeamInviteChangeRoleDetails *)instance;

///
/// Deserializes `DBTEAMLOGSfTeamInviteChangeRoleDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSfTeamInviteChangeRoleDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGSfTeamInviteChangeRoleDetails`
/// object.
///
+ (DBTEAMLOGSfTeamInviteChangeRoleDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END