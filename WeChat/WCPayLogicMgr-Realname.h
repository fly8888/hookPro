//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayLogicMgr.h"

#import "ILinkEventExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "MMWebViewDelegate.h"

@class NSString;

@interface WCPayLogicMgr (Realname) <MMTipsViewControllerDelegate, ILinkEventExt, MMWebViewDelegate>
- (void)setRealnameReportScene:(unsigned int)arg1;
- (unsigned int)getRealnameReportScene;
- (void)checkHongbaoOpenLicense:(id)arg1 acceptCallback:(CDUnknownBlockType)arg2 denyCallback:(CDUnknownBlockType)arg3;
- (void)setIsLicenseQueryDelay:(long long)arg1;
- (_Bool)isLicenseQueryDelay;
- (void)checkShowRealnameGuideInfo:(id)arg1 acceptCallback:(CDUnknownBlockType)arg2 denyCallback:(CDUnknownBlockType)arg3;
- (void)webViewReturn:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)showLicenseAlertView:(id)arg1;
- (void)setAcceptRealnameLicense:(_Bool)arg1;
- (_Bool)getAcceptRealnameLicense;
- (void)checkAndShowRealnameLicense:(unsigned int)arg1 acceptCallback:(CDUnknownBlockType)arg2 denyCallback:(CDUnknownBlockType)arg3 startLoadingCallback:(CDUnknownBlockType)arg4 stopLoadingCallback:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
