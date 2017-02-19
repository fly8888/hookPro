//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol.h"

@class JDImageView, NSMutableArray, NSString, TTTFloorModel, TTTHotPicModel;

@interface TTTHotPicView : TTTBaseView <TTTBaseViewProtocol>
{
    TTTFloorModel *_floorModel;
    TTTHotPicModel *_model;
    JDImageView *_image;
    NSMutableArray *_unitArr;
}

+ (double)getHotPicHeight:(id)arg1;
@property(retain, nonatomic) NSMutableArray *unitArr; // @synthesize unitArr=_unitArr;
@property(retain, nonatomic) JDImageView *image; // @synthesize image=_image;
@property(retain, nonatomic) TTTHotPicModel *model; // @synthesize model=_model;
@property(retain, nonatomic) TTTFloorModel *floorModel; // @synthesize floorModel=_floorModel;
- (void).cxx_destruct;
- (void)regionTouch:(id)arg1;
- (void)setAllTouchRegion;
- (void)setBackgroundImage;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
