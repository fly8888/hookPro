//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "MMovieDecoderDelegate-Protocol.h"

@class MMovieDecoder, NSString, UIImage;
@protocol MVideoPlayerViewDelegate;

__attribute__((visibility("hidden")))
@interface MVideoPlayerView : UIImageView <MMovieDecoderDelegate>
{
    _Bool _autoRepeat;
    id <MVideoPlayerViewDelegate> _delegate;
    UIImage *_lastFrame;
    CDUnknownBlockType _didTouchInsideBlock;
    NSString *_cpKey;
    MMovieDecoder *_decoder;
    UIImage *_firstFrame;
}

@property(retain, nonatomic) UIImage *firstFrame; // @synthesize firstFrame=_firstFrame;
@property(retain, nonatomic) MMovieDecoder *decoder; // @synthesize decoder=_decoder;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
@property(copy, nonatomic) CDUnknownBlockType didTouchInsideBlock; // @synthesize didTouchInsideBlock=_didTouchInsideBlock;
@property(nonatomic) _Bool autoRepeat; // @synthesize autoRepeat=_autoRepeat;
@property(retain, nonatomic) UIImage *lastFrame; // @synthesize lastFrame=_lastFrame;
@property(nonatomic) __weak id <MVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onTapped;
- (void)mMovieDecoder:(id)arg1 onNewVideoFrameReady:(struct opaqueCMSampleBuffer *)arg2;
- (void)mMovieDecoderOnDecodeFinished:(id)arg1;
- (void)restart;
- (void)pauseForRelease;
- (void)pause;
- (void)loadAndPlay:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
