//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AMPDataCache-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol AMPDataCacheDelegate;

@interface AMPMemCache : NSObject <AMPDataCache>
{
    struct _opaque_pthread_rwlock_t _dataRWLock;	// 8 = 0x8
    struct _opaque_pthread_rwlock_t _classRWLock;	// 208 = 0xd0
    NSMutableDictionary *_gourpDict;	// 408 = 0x198
    id <AMPDataCacheDelegate> _delegate;	// 416 = 0x1a0
}

- (void).cxx_destruct;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)applicationResignActive:(id)arg1;
- (id)createDataGroupWithGroupName:(id)arg1;
- (void)recycleAllGroup;
- (void)clearAll;
- (void)removeDataGroupForName:(id)arg1;
- (id)dataGroupForName:(id)arg1;
- (void)setDataGroup:(id)arg1 forName:(id)arg2;
- (void)reset;
@property(nonatomic) __weak id <AMPDataCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
