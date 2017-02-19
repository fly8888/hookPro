//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MAZeroingWeakRef, NSDictionary;

@interface WXBizLogicResponserBase : NSObject
{
    NSDictionary *_userInfo;	// 8 = 0x8
    unsigned long long _sequenceId;	// 16 = 0x10
    MAZeroingWeakRef *_weakRefDelegateBizLogic;	// 24 = 0x18
}

+ (void)removeResponserCached:(id)arg1;
+ (void)cacheResponser:(id)arg1;
+ (id)sharedResponserCachedSet;
+ (unsigned long long)getNextSequenceId;
@property(retain, nonatomic) MAZeroingWeakRef *weakRefDelegateBizLogic; // @synthesize weakRefDelegateBizLogic=_weakRefDelegateBizLogic;
@property(readonly, nonatomic) unsigned long long sequenceId; // @synthesize sequenceId=_sequenceId;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)autoReleaseIfNeed;
@property(nonatomic) __weak id delegateBizLogic;
- (void)dealloc;
- (id)init;

@end
