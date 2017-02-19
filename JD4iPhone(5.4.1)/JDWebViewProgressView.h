//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "JDWebViewProgressViewProtocol.h"

@class NSString, UIColor;

@interface JDWebViewProgressView : UIView <JDWebViewProgressViewProtocol>
{
    float _progress;
    UIView *_progressBarView;
    double _barAnimationDuration;
    double _fadeAnimationDuration;
}

@property(nonatomic) double fadeAnimationDuration; // @synthesize fadeAnimationDuration=_fadeAnimationDuration;
@property(nonatomic) double barAnimationDuration; // @synthesize barAnimationDuration=_barAnimationDuration;
@property(readonly, nonatomic) UIView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) UIColor *progressBarColor;
- (void)configureViews;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
