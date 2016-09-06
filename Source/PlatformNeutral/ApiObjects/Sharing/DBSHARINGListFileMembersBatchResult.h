///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGListFileMembersIndividualResult;

#pragma mark - API Object

///
/// The `ListFileMembersBatchResult` struct.
///
/// Per-file result for `listFileMembersBatch`.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGListFileMembersBatchResult : NSObject <DBSerializable>

#pragma mark - Instance fields

/// This is the input file identifier, whether an ID or a path.
@property(nonatomic, readonly, copy) NSString * _Nonnull file;

/// The result for this particular file
@property(nonatomic, readonly) DBSHARINGListFileMembersIndividualResult * _Nonnull result;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param file This is the input file identifier, whether an ID or a path.
/// @param result The result for this particular file
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithFile:(NSString * _Nonnull)file
                              result:(DBSHARINGListFileMembersIndividualResult * _Nonnull)result;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListFileMembersBatchResult` struct.
///
@interface DBSHARINGListFileMembersBatchResultSerializer : NSObject

///
/// Serializes `DBSHARINGListFileMembersBatchResult` instances.
///
/// @param instance An instance of the `DBSHARINGListFileMembersBatchResult` API object.
///
/// @return A json-compatible dictionary representation of the `DBSHARINGListFileMembersBatchResult`
/// API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGListFileMembersBatchResult * _Nonnull)instance;

///
/// Deserializes `DBSHARINGListFileMembersBatchResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGListFileMembersBatchResult` API object.
///
/// @return An instantiation of the `DBSHARINGListFileMembersBatchResult` object.
///
+ (DBSHARINGListFileMembersBatchResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
