///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSHARINGMemberPermission.h"
#import "DBSHARINGParentFolderAccessInfo.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBSHARINGParentFolderAccessInfo

#pragma mark - Constructors

- (instancetype)initWithFolderName:(NSString *)folderName
                    sharedFolderId:(NSString *)sharedFolderId
                       permissions:(NSArray<DBSHARINGMemberPermission *> *)permissions {
  [DBStoneValidators stringValidator:nil maxLength:nil pattern:@"[-_0-9a-zA-Z:]+"](sharedFolderId);
  [DBStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](permissions);

  self = [super init];
  if (self) {
    _folderName = folderName;
    _sharedFolderId = sharedFolderId;
    _permissions = permissions;
  }
  return self;
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBSHARINGParentFolderAccessInfoSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBSHARINGParentFolderAccessInfoSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBSHARINGParentFolderAccessInfoSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBSHARINGParentFolderAccessInfoSerializer

+ (NSDictionary *)serialize:(DBSHARINGParentFolderAccessInfo *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  jsonDict[@"folder_name"] = valueObj.folderName;
  jsonDict[@"shared_folder_id"] = valueObj.sharedFolderId;
  jsonDict[@"permissions"] = [DBArraySerializer serialize:valueObj.permissions
                                                withBlock:^id(id elem) {
                                                  return [DBSHARINGMemberPermissionSerializer serialize:elem];
                                                }];

  return jsonDict;
}

+ (DBSHARINGParentFolderAccessInfo *)deserialize:(NSDictionary *)valueDict {
  NSString *folderName = valueDict[@"folder_name"];
  NSString *sharedFolderId = valueDict[@"shared_folder_id"];
  NSArray<DBSHARINGMemberPermission *> *permissions =
      [DBArraySerializer deserialize:valueDict[@"permissions"]
                           withBlock:^id(id elem) {
                             return [DBSHARINGMemberPermissionSerializer deserialize:elem];
                           }];

  return [[DBSHARINGParentFolderAccessInfo alloc] initWithFolderName:folderName
                                                      sharedFolderId:sharedFolderId
                                                         permissions:permissions];
}

@end