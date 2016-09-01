///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGCreateSharedLinkArg;
@class DBSHARINGPendingUploadMode;

#pragma mark - API Object

///
/// The CreateSharedLinkArg struct.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGCreateSharedLinkArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The path to share.
@property(nonatomic, readonly, copy) NSString * _Nonnull path;

/// Whether to return a shortened URL.
@property(nonatomic, readonly) NSNumber * _Nonnull shortUrl;

/// If it's okay to share a path that does not yet exist, set this to either file in
/// PendingUploadMode or folder in PendingUploadMode to indicate whether to assume it's a file or
/// folder.
@property(nonatomic, readonly) DBSHARINGPendingUploadMode * _Nullable pendingUpload;

#pragma mark - Constructors

///
/// Full constructor for the DBSHARINGCreateSharedLinkArg struct (exposes all instance variables).
///
/// @param path The path to share.
/// @param shortUrl Whether to return a shortened URL.
/// @param pendingUpload If it's okay to share a path that does not yet exist, set this to either
/// :field:`PendingUploadMode.file` or :field:`PendingUploadMode.folder` to indicate whether to
/// assume it's a file or folder.
///
/// @return An initialized DBSHARINGCreateSharedLinkArg instance.
///
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path
                            shortUrl:(NSNumber * _Nullable)shortUrl
                       pendingUpload:(DBSHARINGPendingUploadMode * _Nullable)pendingUpload;

///
/// Convenience constructor for the DBSHARINGCreateSharedLinkArg struct (exposes only non-nullable
/// instance variables with no default value).
///
/// @param path The path to share.
///
/// @return An initialized DBSHARINGCreateSharedLinkArg instance.
///
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the CreateSharedLinkArg struct.
///
@interface DBSHARINGCreateSharedLinkArgSerializer : NSObject

///
/// Serializes DBSHARINGCreateSharedLinkArg instances.
///
/// @param instance An instance of the DBSHARINGCreateSharedLinkArg API object.
///
/// @return A json-compatible dictionary representation of the DBSHARINGCreateSharedLinkArg API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGCreateSharedLinkArg * _Nonnull)instance;

///
/// Deserializes DBSHARINGCreateSharedLinkArg instances.
///
/// @param dict A json-compatible dictionary representation of the DBSHARINGCreateSharedLinkArg API
/// object.
///
/// @return An instantiation of the DBSHARINGCreateSharedLinkArg object.
///
+ (DBSHARINGCreateSharedLinkArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end