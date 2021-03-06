//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSMutableArray, NSString, UIPickerView, UIToolbar;

@interface SynCartCountManager : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIToolbar *toolBar_;
    UIPickerView *pickerView_;
    _Bool isShow_;
    id target_;
    SEL action_;
    SEL cancelAction_;
    _Bool isCancel_;
    NSMutableArray *stringItems_;
    long long selectCount_;
    long long maxCount_;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedSynCartCountManager;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=isCancel_;
@property(nonatomic) long long maxCount; // @synthesize maxCount=maxCount_;
@property(nonatomic) long long selectCount; // @synthesize selectCount=selectCount_;
@property(retain, nonatomic) NSMutableArray *stringItems; // @synthesize stringItems=stringItems_;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (_Bool)displayed;
- (void)confimAction;
- (void)cancelAction;
- (void)cancelUnanimationAction;
- (void)dismiss;
- (void)show;
- (void)showWithTarget:(id)arg1 selector:(SEL)arg2 cancelSelector:(SEL)arg3 selectCount:(int)arg4 maxCount:(int)arg5;
- (void)initShow;
- (void)initView;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

