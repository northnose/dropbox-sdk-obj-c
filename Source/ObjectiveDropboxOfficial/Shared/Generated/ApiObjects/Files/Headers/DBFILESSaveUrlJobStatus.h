///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESFileMetadata;
@class DBFILESSaveUrlError;
@class DBFILESSaveUrlJobStatus;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SaveUrlJobStatus` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESSaveUrlJobStatus : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESSaveUrlJobStatusTag` enum type represents the possible tag
/// states with which the `DBFILESSaveUrlJobStatus` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILESSaveUrlJobStatusTag){
    /// The asynchronous job is still in progress.
    DBFILESSaveUrlJobStatusInProgress,

    /// Metadata of the file where the URL is saved to.
    DBFILESSaveUrlJobStatusComplete,

    /// (no description).
    DBFILESSaveUrlJobStatusFailed,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESSaveUrlJobStatusTag tag;

/// Metadata of the file where the URL is saved to. @note Ensure the
/// `isComplete` method returns true before accessing, otherwise a runtime
/// exception will be raised.
@property (nonatomic, readonly) DBFILESFileMetadata *complete;

/// (no description). @note Ensure the `isFailed` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESSaveUrlError *failed;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "in_progress".
///
/// Description of the "in_progress" tag state: The asynchronous job is still in
/// progress.
///
/// @return An initialized instance.
///
- (instancetype)initWithInProgress;

///
/// Initializes union class with tag state of "complete".
///
/// Description of the "complete" tag state: Metadata of the file where the URL
/// is saved to.
///
/// @param complete Metadata of the file where the URL is saved to.
///
/// @return An initialized instance.
///
- (instancetype)initWithComplete:(DBFILESFileMetadata *)complete;

///
/// Initializes union class with tag state of "failed".
///
/// @param failed (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithFailed:(DBFILESSaveUrlError *)failed;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "in_progress".
///
/// @return Whether the union's current tag state has value "in_progress".
///
- (BOOL)isInProgress;

///
/// Retrieves whether the union's current tag state has value "complete".
///
/// @note Call this method and ensure it returns true before accessing the
/// `complete` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "complete".
///
- (BOOL)isComplete;

///
/// Retrieves whether the union's current tag state has value "failed".
///
/// @note Call this method and ensure it returns true before accessing the
/// `failed` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "failed".
///
- (BOOL)isFailed;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILESSaveUrlJobStatus` union.
///
@interface DBFILESSaveUrlJobStatusSerializer : NSObject

///
/// Serializes `DBFILESSaveUrlJobStatus` instances.
///
/// @param instance An instance of the `DBFILESSaveUrlJobStatus` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESSaveUrlJobStatus` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESSaveUrlJobStatus *)instance;

///
/// Deserializes `DBFILESSaveUrlJobStatus` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESSaveUrlJobStatus` API object.
///
/// @return An instantiation of the `DBFILESSaveUrlJobStatus` object.
///
+ (DBFILESSaveUrlJobStatus *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
