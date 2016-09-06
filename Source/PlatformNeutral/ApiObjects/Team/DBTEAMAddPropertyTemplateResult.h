///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

#pragma mark - API Object

///
/// The `AddPropertyTemplateResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMAddPropertyTemplateResult : NSObject <DBSerializable>

#pragma mark - Instance fields

/// An identifier for property template added by `propertiesTemplateAdd`.
@property(nonatomic, readonly, copy) NSString * _Nonnull templateId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param templateId An identifier for property template added by `propertiesTemplateAdd`.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTemplateId:(NSString * _Nonnull)templateId;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `AddPropertyTemplateResult` struct.
///
@interface DBTEAMAddPropertyTemplateResultSerializer : NSObject

///
/// Serializes `DBTEAMAddPropertyTemplateResult` instances.
///
/// @param instance An instance of the `DBTEAMAddPropertyTemplateResult` API object.
///
/// @return A json-compatible dictionary representation of the `DBTEAMAddPropertyTemplateResult` API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMAddPropertyTemplateResult * _Nonnull)instance;

///
/// Deserializes `DBTEAMAddPropertyTemplateResult` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBTEAMAddPropertyTemplateResult`
/// API object.
///
/// @return An instantiation of the `DBTEAMAddPropertyTemplateResult` object.
///
+ (DBTEAMAddPropertyTemplateResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
