//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer;

@interface JDRefreshIndicator : UIView
{
    CALayer *_circleLayer;
    CALayer *_iconLayer;
    _Bool _isAnimating;
    _Bool _isJDLoading;
}

@property(nonatomic) _Bool isJDLoading; // @synthesize isJDLoading=_isJDLoading;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startAnimation;
- (void)dismiss;
- (void)showIndicatorAddedTo:(id)arg1 animated:(_Bool)arg2;
- (void)rotation;
- (void)layoutSubviews;
- (id)initJDLoadingIndicator;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
