//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ARNMainViewController.h"

#import "ARNJSHandlerProtocol-Protocol.h"

@class NSString;

@interface ARNMainViewController (ARNJS) <ARNJSHandlerProtocol>
- (void)stopBluetoothNavigaiton;
- (void)startBluetoothNavigation;
- (void)isBluetoothAvailable:(CDUnknownBlockType)arg1;
- (void)reset3DPosition;
- (void)setDestinationWithAddress:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)stopGPSNavigation:(CDUnknownBlockType)arg1;
- (void)startGPSNavigation:(CDUnknownBlockType)arg1;
- (void)isGPSAvailable:(CDUnknownBlockType)arg1;
- (void)setDirection:(float)arg1 hard:(_Bool)arg2;
- (void)setGPSError:(double)arg1;
- (void)getWalkDirection:(CDUnknownBlockType)arg1;
- (void)currentDescriptionUpdated:(CDUnknownBlockType)arg1;
- (void)distanceFromDestinationUpdated:(CDUnknownBlockType)arg1;
- (long long)isInitSuccessJS;
- (void)stopJSARNavigation;
- (void)startJSARNavigation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

