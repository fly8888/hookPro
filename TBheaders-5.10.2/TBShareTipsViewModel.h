//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBShareTipsItem;

@interface TBShareTipsViewModel : NSObject
{
    TBShareTipsItem *_item;	// 8 = 0x8
    unsigned long long _viewType;	// 16 = 0x10
    CDUnknownBlockType _leftBlock;	// 24 = 0x18
    CDUnknownBlockType _rightBlock;	// 32 = 0x20
}

+ (id)imageTipsViewModelWithItem:(id)arg1;
+ (id)tipsViewModelWithItem:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType rightBlock; // @synthesize rightBlock=_rightBlock;
@property(copy, nonatomic) CDUnknownBlockType leftBlock; // @synthesize leftBlock=_leftBlock;
@property(readonly, nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) TBShareTipsItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)updateWithItem:(id)arg1;
- (id)initWithItem:(id)arg1;

@end
