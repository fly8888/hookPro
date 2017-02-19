//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TBFastTableViewCache : NSObject
{
    NSMutableDictionary *m_ViewCacheMap;	// 8 = 0x8
    struct _opaque_pthread_mutex_t m_cache_lock;	// 16 = 0x10
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)freeMe;
- (void)freeViewForIdentifier:(id)arg1;
- (void)resetViewForIdentifier:(id)arg1;
- (id)retriveViewForIdentifier:(id)arg1;
- (_Bool)registerViewWithIdentifier:(id)arg1 creator:(CDUnknownBlockType)arg2 cachePolicy:(int)arg3;
- (_Bool)registerViewWithIdentifier:(id)arg1 creator:(CDUnknownBlockType)arg2;
- (void)p_initialze;
- (id)init;

@end
