///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBCOMMONRootInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RootInfo` struct.
///
/// Information about current user's root.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBCOMMONRootInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The namespace id for user's root namespace. It will be the namespace id of
/// the shared team root if the user is member of a CDM team. Otherwise it will
/// be same as `homeNamespaceId` in `DBCOMMONRootInfo`.
@property (nonatomic, readonly, copy) NSString *rootNamespaceId;

/// The namespace id for user's home namespace.
@property (nonatomic, readonly, copy) NSString *homeNamespaceId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param rootNamespaceId The namespace id for user's root namespace. It will
/// be the namespace id of the shared team root if the user is member of a CDM
/// team. Otherwise it will be same as `homeNamespaceId` in `DBCOMMONRootInfo`.
/// @param homeNamespaceId The namespace id for user's home namespace.
///
/// @return An initialized instance.
///
- (instancetype)initWithRootNamespaceId:(NSString *)rootNamespaceId homeNamespaceId:(NSString *)homeNamespaceId;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RootInfo` struct.
///
@interface DBCOMMONRootInfoSerializer : NSObject

///
/// Serializes `DBCOMMONRootInfo` instances.
///
/// @param instance An instance of the `DBCOMMONRootInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBCOMMONRootInfo` API object.
///
+ (nullable NSDictionary *)serialize:(DBCOMMONRootInfo *)instance;

///
/// Deserializes `DBCOMMONRootInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBCOMMONRootInfo` API object.
///
/// @return An instantiation of the `DBCOMMONRootInfo` object.
///
+ (DBCOMMONRootInfo *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END