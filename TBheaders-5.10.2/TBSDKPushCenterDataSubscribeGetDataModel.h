//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSDKPushCenterModel.h"

@class NSString, PushCenterSubscribeConfigObject;

@interface TBSDKPushCenterDataSubscribeGetDataModel : TBSDKPushCenterModel
{
    int _pushCenterNewsSubscribeType;	// 24 = 0x18
    PushCenterSubscribeConfigObject *_pushCenterSubscribeConfigObject;	// 32 = 0x20
    NSString *_sessionID;	// 40 = 0x28
    NSString *_sToken;	// 48 = 0x30
}

@property(nonatomic) int pushCenterNewsSubscribeType; // @synthesize pushCenterNewsSubscribeType=_pushCenterNewsSubscribeType;
@property(retain, nonatomic) NSString *sToken; // @synthesize sToken=_sToken;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) PushCenterSubscribeConfigObject *pushCenterSubscribeConfigObject; // @synthesize pushCenterSubscribeConfigObject=_pushCenterSubscribeConfigObject;
- (void).cxx_destruct;
- (void)main;
- (id)parse:(id)arg1;
- (id)getNewsSubscribeNewsListWithSessionID:(id)arg1 sToken:(id)arg2 type:(int)arg3;

@end
