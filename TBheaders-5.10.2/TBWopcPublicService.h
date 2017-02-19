//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBWopcPublicServiceProtocol-Protocol.h"

@class NSString, TBWopcManager;

@interface TBWopcPublicService : NSObject <TBWopcPublicServiceProtocol>
{
    TBWopcManager *_wopcManager;	// 8 = 0x8
}

@property(retain, nonatomic) TBWopcManager *wopcManager; // @synthesize wopcManager=_wopcManager;
- (void).cxx_destruct;
- (void)clear;
- (_Bool)isWopcSupportDomain:(id)arg1;
- (_Bool)isUrlCanAccessWopc:(id)arg1;
- (void)setCurrentWebViewController:(id)arg1;
- (void)functionRegisterWithWebViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
