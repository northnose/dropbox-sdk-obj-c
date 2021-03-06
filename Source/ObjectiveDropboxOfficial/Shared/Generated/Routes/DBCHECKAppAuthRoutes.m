///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBCHECKAppAuthRoutes.h"
#import "DBCHECKEchoArg.h"
#import "DBCHECKEchoResult.h"
#import "DBCHECKRouteObjects.h"
#import "DBRequestErrors.h"
#import "DBStoneBase.h"
#import "DBTransportClientProtocol.h"

@implementation DBCHECKAppAuthRoutes

- (instancetype)init:(id<DBTransportClient>)client {
  self = [super init];
  if (self) {
    _client = client;
  }
  return self;
}

- (DBRpcTask *)app {
  DBRoute *route = DBCHECKRouteObjects.DBCHECKApp;
  DBCHECKEchoArg *arg = [[DBCHECKEchoArg alloc] initDefault];
  return [self.client requestRpc:route arg:arg];
}

- (DBRpcTask *)app:(NSString *)query {
  DBRoute *route = DBCHECKRouteObjects.DBCHECKApp;
  DBCHECKEchoArg *arg = [[DBCHECKEchoArg alloc] initWithQuery:query];
  return [self.client requestRpc:route arg:arg];
}

@end
