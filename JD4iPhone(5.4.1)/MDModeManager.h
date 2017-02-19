//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMDModeStrategy.h"

@class NSArray, NSString;

@interface MDModeManager : NSObject <IMDModeStrategy>
{
    int _mMode;
    long long _viewOrientation;
    id _mStrategy;
    NSArray *_mModes;
}

@property(retain, nonatomic) NSArray *mModes; // @synthesize mModes=_mModes;
@property(retain, nonatomic) id mStrategy; // @synthesize mStrategy=_mStrategy;
@property(readonly, nonatomic) int mMode; // @synthesize mMode=_mMode;
@property(nonatomic) long long viewOrientation; // @synthesize viewOrientation=_viewOrientation;
- (void).cxx_destruct;
- (id)createModes;
- (id)createStrategy:(int)arg1;
- (void)switchMode;
- (void)switchMode:(int)arg1;
- (void)off;
- (void)on;
- (void)initMode:(int)arg1;
- (void)prepare;
- (id)initWithDefault:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
