//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TBGTaoCoinsInfo;

@protocol TBGControlVSFloatViewDelegate <NSObject>
- (void)getUserTaoCoinsInfo;
- (void)pausePlayButtonClicked:(_Bool)arg1;
- (void)changDanmakuShowState:(_Bool)arg1;
- (void)sendGoldenCoin:(long long)arg1 taoCoinsInfo:(TBGTaoCoinsInfo *)arg2;
- (void)sendDanmakuString:(NSString *)arg1;
- (void)headBackButtonClicked;
@end

