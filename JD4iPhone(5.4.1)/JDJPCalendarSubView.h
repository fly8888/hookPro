//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIImageView, UILabel;

@interface JDJPCalendarSubView : UIView
{
    int baseYear;
    int baseMonth;
    int currentYear;
    int currentMonth;
    int currentDay;
    UILabel *dateLabel;
    UIImageView *weekImgView;
    NSMutableArray *itemsArray;
    int viewHeight;
    _Bool isLpHistory;
    _Bool isFromDetailView;
}

@property(nonatomic) _Bool isFromDetailView; // @synthesize isFromDetailView;
@property(nonatomic) _Bool isLpHistory; // @synthesize isLpHistory;
@property(nonatomic) int baseMonth; // @synthesize baseMonth;
@property(nonatomic) int baseYear; // @synthesize baseYear;
- (void)dealloc;
- (void)setDepDay:(int)arg1 isDep:(_Bool)arg2 depTitle:(id)arg3;
- (void)setMarkDay:(int)arg1 endDay:(int)arg2 isMark:(_Bool)arg3;
- (void)setLpHistoryDay:(int)arg1 price:(int)arg2;
- (void)setSelectDay:(int)arg1 isSelect:(_Bool)arg2;
- (void)setBackDay:(int)arg1 isBack:(_Bool)arg2;
- (void)setDepDay:(int)arg1 isDep:(_Bool)arg2;
- (int)getViewHeight;
- (void)draw;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)selectDate:(id)arg1;

@end
