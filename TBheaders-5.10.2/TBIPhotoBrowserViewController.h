//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TBIMutiSelectionTabbarDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, TBIMutiSelectionTabbarView, UIButton, UIScrollView, UIView;
@protocol TBIPhotoBrowserViewDelegate;

@interface TBIPhotoBrowserViewController : UIViewController <UIScrollViewDelegate, TBIMutiSelectionTabbarDelegate, UIActionSheetDelegate>
{
    UIScrollView *_browserScrollView;	// 8 = 0x8
    TBIMutiSelectionTabbarView *tabbar;	// 16 = 0x10
    UIView *navBar;	// 24 = 0x18
    UIButton *rightButton;	// 32 = 0x20
    UIButton *deleteButton;	// 40 = 0x28
    long long preStyle;	// 48 = 0x30
    _Bool _isModalVC;	// 56 = 0x38
    _Bool _showEditVCButton;	// 57 = 0x39
    _Bool _showCheckButton;	// 58 = 0x3a
    _Bool _showDeleteButton;	// 59 = 0x3b
    _Bool _enableLazyLoading;	// 60 = 0x3c
    _Bool _showing;	// 61 = 0x3d
    long long _initialIndex;	// 64 = 0x40
    id <TBIPhotoBrowserViewDelegate> _delegate;	// 72 = 0x48
    NSArray *_photoArray;	// 80 = 0x50
    CDUnknownBlockType _syncImageGenerateBlock;	// 88 = 0x58
    CDUnknownBlockType _asyncImageGenerateBlock;	// 96 = 0x60
    NSMutableArray *_selectedArray;	// 104 = 0x68
    unsigned long long _currentIndex;	// 112 = 0x70
}

@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *selectedArray; // @synthesize selectedArray=_selectedArray;
@property(nonatomic) _Bool showing; // @synthesize showing=_showing;
@property(copy, nonatomic) CDUnknownBlockType asyncImageGenerateBlock; // @synthesize asyncImageGenerateBlock=_asyncImageGenerateBlock;
@property(copy, nonatomic) CDUnknownBlockType syncImageGenerateBlock; // @synthesize syncImageGenerateBlock=_syncImageGenerateBlock;
@property(retain, nonatomic) NSArray *photoArray; // @synthesize photoArray=_photoArray;
@property(nonatomic) _Bool enableLazyLoading; // @synthesize enableLazyLoading=_enableLazyLoading;
@property(nonatomic) __weak id <TBIPhotoBrowserViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long initialIndex; // @synthesize initialIndex=_initialIndex;
@property(nonatomic) _Bool showDeleteButton; // @synthesize showDeleteButton=_showDeleteButton;
@property(nonatomic) _Bool showCheckButton; // @synthesize showCheckButton=_showCheckButton;
@property(nonatomic) _Bool showEditVCButton; // @synthesize showEditVCButton=_showEditVCButton;
@property(nonatomic) _Bool isModalVC; // @synthesize isModalVC=_isModalVC;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)deleteButtonPressed:(id)arg1;
- (void)TBIMutiSelectionTabbar:(id)arg1 shouldEditAssets:(id)arg2;
- (void)TBIMutiSelectionTabbar:(id)arg1 shouldSendAssets:(id)arg2;
- (void)rightButtonPressed:(id)arg1;
- (void)leftButtonPressed:(id)arg1;
- (void)didReceiveMemoryWarning;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)contentSizeForPagingScrollView;
- (struct CGRect)frameForPagingScrollView;
- (void)rightButtonOn:(_Bool)arg1;
- (void)initNavBar;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

