//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DataChannelDataDelegate-Protocol.h"

@class NSString;

@interface TBAccsReceiveAndCallBackCenter : NSObject <DataChannelDataDelegate>
{
}

+ (void)returnAck:(id)arg1;
+ (id)shareInstance;
- (void)notifyChannelFail:(id)arg1;
- (void)notifyChannelSueesss:(id)arg1;
- (void)recvCustomFrametype:(short)arg1 Flags:(BOOL)arg2 Data:(id)arg3 channel:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
