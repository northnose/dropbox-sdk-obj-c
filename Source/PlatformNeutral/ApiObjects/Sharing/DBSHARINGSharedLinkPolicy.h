///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

#pragma mark - API Object

///
/// The `SharedLinkPolicy` union.
///
/// Policy governing who can view shared links.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGSharedLinkPolicy : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBSHARINGSharedLinkPolicyTag` enum type represents the possible tag states with which the
/// `DBSHARINGSharedLinkPolicy` union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGSharedLinkPolicyTag) {
  /// Links can be shared with anyone.
  DBSHARINGSharedLinkPolicyAnyone,

  /// Links can only be shared among members of the shared folder.
  DBSHARINGSharedLinkPolicyMembers,

  /// (no description).
  DBSHARINGSharedLinkPolicyOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBSHARINGSharedLinkPolicyTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "anyone".
///
/// Description of the "anyone" tag state: Links can be shared with anyone.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithAnyone;

///
/// Initializes union class with tag state of "members".
///
/// Description of the "members" tag state: Links can only be shared among members of the shared
/// folder.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithMembers;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "anyone".
///
/// @return Whether the union's current tag state has value "anyone".
///
- (BOOL)isAnyone;

///
/// Retrieves whether the union's current tag state has value "members".
///
/// @return Whether the union's current tag state has value "members".
///
- (BOOL)isMembers;

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
/// The serialization class for the `DBSHARINGSharedLinkPolicy` union.
///
@interface DBSHARINGSharedLinkPolicySerializer : NSObject

///
/// Serializes `DBSHARINGSharedLinkPolicy` instances.
///
/// @param instance An instance of the `DBSHARINGSharedLinkPolicy` API object.
///
/// @return A json-compatible dictionary representation of the `DBSHARINGSharedLinkPolicy` API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGSharedLinkPolicy * _Nonnull)instance;

///
/// Deserializes `DBSHARINGSharedLinkPolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBSHARINGSharedLinkPolicy` API
/// object.
///
/// @return An instantiation of the `DBSHARINGSharedLinkPolicy` object.
///
+ (DBSHARINGSharedLinkPolicy * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
