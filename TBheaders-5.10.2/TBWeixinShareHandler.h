//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBBaseShareHandler.h"

@class TBTaoPasswordShareHandler;

@interface TBWeixinShareHandler : TBBaseShareHandler
{
    TBTaoPasswordShareHandler *_taopasswordHandler;	// 8 = 0x8
}

@property(retain, nonatomic) TBTaoPasswordShareHandler *taopasswordHandler; // @synthesize taopasswordHandler=_taopasswordHandler;
- (void).cxx_destruct;
- (void)send:(id)arg1 toTarget:(id)arg2;
- (void)doShareWithSDK:(id)arg1;
- (void)doShareWithTaoPasswordSDK:(id)arg1;
- (_Bool)canShare;
- (void)shareToTarget:(id)arg1 withInfo:(id)arg2;

@end
