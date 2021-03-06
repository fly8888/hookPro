//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

@class JDButton, JDLabel, MyNewCouponUseCell, NSDictionary, SellInfoView;

@interface MyNewCouponActionView : JDView
{
    JDView *contentView;
    JDLabel *titleLabel;
    JDButton *cancelBtn;
    MyNewCouponUseCell *couponView;
    JDLabel *shareInfoView;
    JDView *shareBottomView;
    SellInfoView *sellInfoView;
    JDButton *sellBottomView;
    JDButton *actionRuleBtn;
    int showType;
    id <MyNewCouponActionDelegate> myNewCouponDelegate;
    NSDictionary *couponDic;
}

@property(retain, nonatomic) NSDictionary *couponDic; // @synthesize couponDic;
@property(nonatomic) __weak id <MyNewCouponActionDelegate> myNewCouponDelegate; // @synthesize myNewCouponDelegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tapGestureHandle:(id)arg1;
- (void)onClickRuleButton:(id)arg1;
- (void)onClickSellButton:(id)arg1;
- (void)onClickFriendLineButton:(id)arg1;
- (void)onClickFriendButton:(id)arg1;
- (void)onClickCancelButton:(id)arg1;
- (void)dismissAndCompletion:(CDUnknownBlockType)arg1;
- (void)show;
- (void)showInView:(id)arg1 andCoupon:(id)arg2 andPopType:(int)arg3;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

