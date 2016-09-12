///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSHARINGSharingFileAccessError.h"
#import "DBSHARINGSharingUserError.h"
#import "DBSHARINGUnshareFileError.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBSHARINGUnshareFileError

@synthesize userError = _userError;
@synthesize accessError = _accessError;

#pragma mark - Constructors

- (instancetype)initWithUserError:(DBSHARINGSharingUserError *)userError {
  self = [super init];
  if (self) {
    _tag = DBSHARINGUnshareFileErrorUserError;
    _userError = userError;
  }
  return self;
}

- (instancetype)initWithAccessError:(DBSHARINGSharingFileAccessError *)accessError {
  self = [super init];
  if (self) {
    _tag = DBSHARINGUnshareFileErrorAccessError;
    _accessError = accessError;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBSHARINGUnshareFileErrorOther;
  }
  return self;
}

#pragma mark - Instance field accessors

- (DBSHARINGSharingUserError *)userError {
  if (![self isUserError]) {
    [NSException raise:@"IllegalStateException"
                format:@"Invalid tag: required DBSHARINGUnshareFileErrorUserError, but was %@.", [self tagName]];
  }
  return _userError;
}

- (DBSHARINGSharingFileAccessError *)accessError {
  if (![self isAccessError]) {
    [NSException raise:@"IllegalStateException"
                format:@"Invalid tag: required DBSHARINGUnshareFileErrorAccessError, but was %@.", [self tagName]];
  }
  return _accessError;
}

#pragma mark - Tag state methods

- (BOOL)isUserError {
  return _tag == DBSHARINGUnshareFileErrorUserError;
}

- (BOOL)isAccessError {
  return _tag == DBSHARINGUnshareFileErrorAccessError;
}

- (BOOL)isOther {
  return _tag == DBSHARINGUnshareFileErrorOther;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBSHARINGUnshareFileErrorUserError:
    return @"DBSHARINGUnshareFileErrorUserError";
  case DBSHARINGUnshareFileErrorAccessError:
    return @"DBSHARINGUnshareFileErrorAccessError";
  case DBSHARINGUnshareFileErrorOther:
    return @"DBSHARINGUnshareFileErrorOther";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an unknown value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBSHARINGUnshareFileErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBSHARINGUnshareFileErrorSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBSHARINGUnshareFileErrorSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBSHARINGUnshareFileErrorSerializer

+ (NSDictionary *)serialize:(DBSHARINGUnshareFileError *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isUserError]) {
    jsonDict[@"user_error"] = [[DBSHARINGSharingUserErrorSerializer serialize:valueObj.userError] mutableCopy];
    jsonDict[@".tag"] = @"user_error";
  } else if ([valueObj isAccessError]) {
    jsonDict[@"access_error"] =
        [[DBSHARINGSharingFileAccessErrorSerializer serialize:valueObj.accessError] mutableCopy];
    jsonDict[@".tag"] = @"access_error";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag"
                                   reason:@"Object not properly initialized. Tag has an unknown value."
                                 userInfo:nil]);
  }

  return jsonDict;
}

+ (DBSHARINGUnshareFileError *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"user_error"]) {
    DBSHARINGSharingUserError *userError = [DBSHARINGSharingUserErrorSerializer deserialize:valueDict[@"user_error"]];
    return [[DBSHARINGUnshareFileError alloc] initWithUserError:userError];
  } else if ([tag isEqualToString:@"access_error"]) {
    DBSHARINGSharingFileAccessError *accessError =
        [DBSHARINGSharingFileAccessErrorSerializer deserialize:valueDict[@"access_error"]];
    return [[DBSHARINGUnshareFileError alloc] initWithAccessError:accessError];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBSHARINGUnshareFileError alloc] initWithOther];
  }

  @throw([NSException
      exceptionWithName:@"InvalidTag"
                 reason:[NSString stringWithFormat:@"Tag has an invalid value: \"%@\".", valueDict[@".tag"]]
               userInfo:nil]);
}

@end