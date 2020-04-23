///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGAccountCaptureNotificationType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AccountCaptureNotificationType` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGAccountCaptureNotificationType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGAccountCaptureNotificationTypeTag` enum type represents the
/// possible tag states with which the `DBTEAMLOGAccountCaptureNotificationType`
/// union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMLOGAccountCaptureNotificationTypeTag){
    /// (no description).
    DBTEAMLOGAccountCaptureNotificationTypeProactiveWarningNotification,

    /// (no description).
    DBTEAMLOGAccountCaptureNotificationTypeActionableNotification,

    /// (no description).
    DBTEAMLOGAccountCaptureNotificationTypeOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGAccountCaptureNotificationTypeTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "proactive_warning_notification".
///
/// @return An initialized instance.
///
- (instancetype)initWithProactiveWarningNotification;

///
/// Initializes union class with tag state of "actionable_notification".
///
/// @return An initialized instance.
///
- (instancetype)initWithActionableNotification;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "proactive_warning_notification".
///
/// @return Whether the union's current tag state has value
/// "proactive_warning_notification".
///
- (BOOL)isProactiveWarningNotification;

///
/// Retrieves whether the union's current tag state has value
/// "actionable_notification".
///
/// @return Whether the union's current tag state has value
/// "actionable_notification".
///
- (BOOL)isActionableNotification;

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
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMLOGAccountCaptureNotificationType`
/// union.
///
@interface DBTEAMLOGAccountCaptureNotificationTypeSerializer : NSObject

///
/// Serializes `DBTEAMLOGAccountCaptureNotificationType` instances.
///
/// @param instance An instance of the `DBTEAMLOGAccountCaptureNotificationType`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGAccountCaptureNotificationType` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGAccountCaptureNotificationType *)instance;

///
/// Deserializes `DBTEAMLOGAccountCaptureNotificationType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGAccountCaptureNotificationType` API object.
///
/// @return An instantiation of the `DBTEAMLOGAccountCaptureNotificationType`
/// object.
///
+ (DBTEAMLOGAccountCaptureNotificationType *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
