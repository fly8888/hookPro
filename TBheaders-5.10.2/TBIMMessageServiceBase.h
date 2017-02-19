//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPMsgBusHelp.h"

#import "TBIMLoginerviceDelegate-Protocol.h"
#import "TBIMMessageServiceAdapter-Protocol.h"

@class NSMutableDictionary, NSString, YHMuticastDelegate;
@protocol TBIMLoginServiceAdapter, TBIMMessageServiceDelegate;

@interface TBIMMessageServiceBase : AMPMsgBusHelp <TBIMMessageServiceAdapter, TBIMLoginerviceDelegate>
{
    YHMuticastDelegate<TBIMMessageServiceDelegate> *_mutiCastDelegate;	// 8 = 0x8
    NSMutableDictionary *_needSendMsg;	// 16 = 0x10
    id <TBIMLoginServiceAdapter> _loginSrv;	// 24 = 0x18
}

@property(nonatomic) __weak id <TBIMLoginServiceAdapter> loginSrv; // @synthesize loginSrv=_loginSrv;
@property(retain, nonatomic) NSMutableDictionary *needSendMsg; // @synthesize needSendMsg=_needSendMsg;
@property(retain, nonatomic) YHMuticastDelegate<TBIMMessageServiceDelegate> *mutiCastDelegate; // @synthesize mutiCastDelegate=_mutiCastDelegate;
- (void).cxx_destruct;
- (void)failedAllMsgForSession;
- (void)sendAllMsgForSession;
- (void)addMsg:(id)arg1 toSession:(id)arg2;
- (void)loginFailed;
- (void)loginSuccess;
- (_Bool)checkOnlineMessagePassword:(id)arg1;
- (void)loadUnreadMessagesBySession:(id)arg1 unreadMessageCount:(unsigned long long)arg2;
- (void)messageLikeNumbersFromNet:(id)arg1 session:(id)arg2;
- (void)loadMessagesForShareItemBySession:(id)arg1 needLikeNum:(_Bool)arg2;
- (_Bool)loadImageMessage:(id)arg1 currentMessage:(id)arg2 count:(unsigned long long)arg3 isFront:(_Bool)arg4;
- (_Bool)loadMessage:(id)arg1 lastMessage:(id)arg2 count:(unsigned long long)arg3;
- (id)getSessions;
- (void)likeMessage:(id)arg1;
- (void)checkMessageUniqueId:(id)arg1;
- (_Bool)forwardMessage:(id)arg1 withSession:(id)arg2;
- (_Bool)deleteMessage:(id)arg1;
- (_Bool)failedMessage:(id)arg1;
- (_Bool)sendMessage:(id)arg1;
- (_Bool)sendMessages:(id)arg1;
- (_Bool)resendMessage:(id)arg1;
- (id)generateSysMessageWithContent:(id)arg1 session:(id)arg2 templateDict:(id)arg3 activeList:(id)arg4;
- (id)generateVideoWihtLocalUrl:(id)arg1 previewImage:(id)arg2 duration:(long long)arg3 width:(double)arg4 height:(double)arg5 session:(id)arg6;
- (id)generateEmoticonMessage:(id)arg1 session:(id)arg2;
- (id)generateCardMessageWithCardCode:(id)arg1 cardData:(id)arg2 session:(id)arg3;
- (id)generateBusinessCardMessage:(id)arg1 headUrl:(id)arg2 nick:(id)arg3 session:(id)arg4;
- (id)generateShareMessage:(int)arg1 title:(id)arg2 picUrl:(id)arg3 price:(double)arg4 actionUrl:(id)arg5 shopLevelImageUrl:(id)arg6 session:(id)arg7;
- (id)generateVoiceMessage:(id)arg1 withLocalAudio:(id)arg2 duration:(long long)arg3 session:(id)arg4;
- (id)generateImageMessage:(id)arg1 session:(id)arg2;
- (id)generateTextMessage:(id)arg1 session:(id)arg2 withAiTaUserIdList:(id)arg3;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
