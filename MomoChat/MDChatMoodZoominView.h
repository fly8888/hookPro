//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDChatMoodBaseView.h"

#import "CAAnimationDelegate.h"
#import "MDLabelDelegate.h"

@class MDMixLabel, NSString, UIImageView, UIView;

@interface MDChatMoodZoominView : MDChatMoodBaseView <MDLabelDelegate, CAAnimationDelegate>
{
    UIView *_shakeView;
    UIImageView *_bubbleView;
    MDMixLabel *_contentView;
}

@property(retain, nonatomic) MDMixLabel *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) UIView *shakeView; // @synthesize shakeView=_shakeView;
- (void).cxx_destruct;
- (void)mixLabel:(id)arg1 didSelectedLink:(id)arg2 linkType:(unsigned long long)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)transformScaled:(double)arg1 layout:(id)arg2;
- (void)addSpringAnimation;
- (void)addZoominAnimation;
- (void)addZoomoutAnimation;
- (void)displayInAnimatedState;
- (void)displayInReadyState;
- (void)stopAnimation;
- (void)endAnimation;
- (void)startAnimation;
- (void)setupContent:(id)arg1;
- (void)setupBubbleView:(id)arg1;
- (Class)chatLayoutClass;
- (id)initWithFrame:(struct CGRect)arg1 msg:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
