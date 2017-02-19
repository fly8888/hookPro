//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ContactInfoAssistDelegate.h"
#import "IAutoSetRemarkExt.h"
#import "ICertInfoMgrExt.h"
#import "IContactMgrExt.h"
#import "IStrangerContactMgrExt.h"
#import "IUpdateProfileMgrExt.h"
#import "MMSayHelloViewControllerDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "SessionSelectControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "VerifyPhoneDelegate.h"
#import "WCFacadeExt.h"

@class CBaseContactInfoAssist, CContact, CContactVerifyLogic, CMessageWrap, NSMutableDictionary, NSString, ShareMyFriendLogicController;

@interface ContactInfoViewController : MMUIViewController <UIAlertViewDelegate, PBMessageObserverDelegate, ContactInfoAssistDelegate, IContactMgrExt, VerifyPhoneDelegate, MMSayHelloViewControllerDelegate, ICertInfoMgrExt, SessionSelectControllerDelegate, WCFacadeExt, IStrangerContactMgrExt, IAutoSetRemarkExt, IUpdateProfileMgrExt>
{
    unsigned int m_uiVerify;
    CContact *m_contact;
    CContact *m_chatContact;
    id <contactInfoDelegate> m_delegate;
    id <ContactInfoViewControllerDelegate> m_InfoDelegate;
    CBaseContactInfoAssist *m_oContactInfoAssist;
    CContactVerifyLogic *m_contactVerifyLogic;
    ShareMyFriendLogicController *m_shareMyFriendLogic;
    NSString *m_nsLocation;
    _Bool m_bPopToRootWhenDelete;
    unsigned int m_uiFromScene;
    int m_wcOperateMode;
    Class m_popToViewControllerClassWhenDelete;
    int m_searchScene;
    id m_userData;
    double m_CurrentWidth;
    int m_uiAddFriendStatScene;
    unsigned int _searchFromIndex;
    NSMutableDictionary *_verifyUserInfoList;
    NSString *_searchId;
    NSString *_searchKeyword;
    NSString *_searchExtraParamsString;
    CMessageWrap *_sourceMsg;
}

@property(retain, nonatomic) CMessageWrap *sourceMsg; // @synthesize sourceMsg=_sourceMsg;
@property(retain, nonatomic) NSString *searchExtraParamsString; // @synthesize searchExtraParamsString=_searchExtraParamsString;
@property(nonatomic) unsigned int searchFromIndex; // @synthesize searchFromIndex=_searchFromIndex;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(retain, nonatomic) NSMutableDictionary *verifyUserInfoList; // @synthesize verifyUserInfoList=_verifyUserInfoList;
@property(nonatomic) int m_uiAddFriendStatScene; // @synthesize m_uiAddFriendStatScene;
@property(retain, nonatomic) id m_userData; // @synthesize m_userData;
@property(nonatomic) int m_searchScene; // @synthesize m_searchScene;
@property(nonatomic) Class m_popToViewControllerClassWhenDelete; // @synthesize m_popToViewControllerClassWhenDelete;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene;
@property(nonatomic) _Bool m_bPopToRootWhenDelete; // @synthesize m_bPopToRootWhenDelete;
@property(retain, nonatomic) NSString *m_nsLocation; // @synthesize m_nsLocation;
@property(retain, nonatomic) ShareMyFriendLogicController *shareMyFriendLogic; // @synthesize shareMyFriendLogic=m_shareMyFriendLogic;
@property(nonatomic) unsigned int m_uiVerify; // @synthesize m_uiVerify;
@property(nonatomic) __weak id <ContactInfoViewControllerDelegate> m_InfoDelegate; // @synthesize m_InfoDelegate;
@property(nonatomic) __weak id <contactInfoDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CContact *m_chatContact; // @synthesize m_chatContact;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onExpose;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirmExpose:(unsigned int)arg1;
- (void)onSayHelloViewSendSayHello:(id)arg1;
- (void)statBanner;
- (void)onVerifyOK;
- (void)onAddToContact;
- (void)onSendVerifyMsg;
- (void)onSayHello;
- (void)onFinishedShareMyFriend:(_Bool)arg1;
- (id)getMyFriendContact;
- (id)getShareMyFriendParentViewController;
- (void)bindPhoneReturn;
- (void)onDeleteContact:(id)arg1;
- (void)delAllMsg;
- (void)onVerifyOKWithContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)copyContactField:(id)arg1 toContact:(id)arg2;
- (void)onProfileChange;
- (void)dealloc;
- (void)onWCGroupModMemberReturn:(_Bool)arg1 group:(id)arg2;
- (id)getSearchId;
- (id)getContactVerifyLogic;
- (void)onRemoveContact;
- (void)onPopViewController:(_Bool)arg1;
- (void)onTalk:(id)arg1;
- (_Bool)onFilterSendReceiver:(id)arg1;
- (void)onShareMyFriend;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (id)getViewController;
- (void)stopLoadingWithFailText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1;
- (void)startLoadingWithText:(id)arg1;
- (void)onNewMessage:(id)arg1;
- (void)jumpToContentViewController:(id)arg1;
- (void)doReset;
- (void)contactVerifyOk:(id)arg1;
- (void)onFriendRequestSend;
- (_Bool)isQQContact;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)updateContactFromServer;
- (void)reloadContactAssist;
- (id)tagForActivePage;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadView;
- (void)reloadFloatView;
- (id)getUserData;
- (void)reloadData;
- (void)initSystemPluginData:(int)arg1;
- (_Bool)isInMyContactList;
- (id)initWithTitle:(id)arg1;
- (id)init;
- (unsigned int)GetFromScene;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
