//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDActionItem, MLShowProductInfo, NSArray, NSDictionary, NSMutableAttributedString, NSString;

@interface MLGroupMessage : NSObject
{
    _Bool _isSent;
    _Bool _isSysMsg;
    _Bool _isShowColon;
    _Bool _is_disappear;
    _Bool _isCached;
    _Bool _addGiftImgPlaceHolderWhenCalcSize;
    int _count;
    int _contentStyle;
    int _type;
    int _fortune;
    int _charm;
    int _thumbs;
    int _totalThumbs;
    int _biliBiliStyle;
    NSString *_remoteId;
    NSString *_groupId;
    NSString *_roomId;
    NSString *_messageId;
    NSString *_targetId;
    NSString *_msgId;
    NSDictionary *_body;
    NSString *_text;
    NSString *_noticeNick;
    NSArray *_labels;
    NSString *_gtag;
    NSString *_imgUrl;
    NSString *_gImgUrl;
    MLShowProductInfo *_pi;
    long long _eFlag;
    double _AchieveSecondsInterval;
    NSString *_actionTitle;
    NSArray *_actionList;
    NSString *_text_color;
    NSString *_title;
    NSString *_title_color;
    long long _broadcastEffect;
    NSString *_event_icon;
    MDActionItem *_actionItem;
    NSString *_contentString;
    double _lastWidth;
    NSMutableAttributedString *_attributedText;
    double _height;
    double _width;
    NSString *_backgroundImg;
    struct CGRect _frame;
}

+ (id)showMessageFromDictionary:(id)arg1;
+ (id)createMessageItem:(id)arg1 actions:(id)arg2;
+ (id)parseIntoRoomMessage:(id)arg1 title:(id)arg2 actions:(id)arg3 contentStyle:(int)arg4;
+ (id)followSuccessMessageWithText:(id)arg1 fortune:(long long)arg2;
+ (id)giftMessageWithText:(id)arg1 fortune:(long long)arg2;
+ (id)broadcastMessageWithText:(id)arg1;
+ (id)sendMessageWithShowId:(id)arg1 groupId:(id)arg2 fortune:(int)arg3 andText:(id)arg4;
+ (id)bubbleMessageWithShowId:(id)arg1 groupId:(id)arg2 andText:(id)arg3;
+ (id)createForSend;
+ (id)create;
@property(nonatomic) int biliBiliStyle; // @synthesize biliBiliStyle=_biliBiliStyle;
@property(copy, nonatomic) NSString *backgroundImg; // @synthesize backgroundImg=_backgroundImg;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) _Bool addGiftImgPlaceHolderWhenCalcSize; // @synthesize addGiftImgPlaceHolderWhenCalcSize=_addGiftImgPlaceHolderWhenCalcSize;
@property(retain, nonatomic) NSMutableAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(nonatomic) _Bool isCached; // @synthesize isCached=_isCached;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) double lastWidth; // @synthesize lastWidth=_lastWidth;
@property(copy, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(retain, nonatomic) MDActionItem *actionItem; // @synthesize actionItem=_actionItem;
@property(copy, nonatomic) NSString *event_icon; // @synthesize event_icon=_event_icon;
@property(nonatomic) _Bool is_disappear; // @synthesize is_disappear=_is_disappear;
@property(nonatomic) long long broadcastEffect; // @synthesize broadcastEffect=_broadcastEffect;
@property(copy, nonatomic) NSString *title_color; // @synthesize title_color=_title_color;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *text_color; // @synthesize text_color=_text_color;
@property(nonatomic) _Bool isShowColon; // @synthesize isShowColon=_isShowColon;
@property(nonatomic) _Bool isSysMsg; // @synthesize isSysMsg=_isSysMsg;
@property(retain, nonatomic) NSArray *actionList; // @synthesize actionList=_actionList;
@property(retain, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(nonatomic) double AchieveSecondsInterval; // @synthesize AchieveSecondsInterval=_AchieveSecondsInterval;
@property(nonatomic) long long eFlag; // @synthesize eFlag=_eFlag;
@property(retain, nonatomic) MLShowProductInfo *pi; // @synthesize pi=_pi;
@property(retain, nonatomic) NSString *gImgUrl; // @synthesize gImgUrl=_gImgUrl;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(nonatomic) int totalThumbs; // @synthesize totalThumbs=_totalThumbs;
@property(nonatomic) int thumbs; // @synthesize thumbs=_thumbs;
@property(retain, nonatomic) NSString *gtag; // @synthesize gtag=_gtag;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(nonatomic) int charm; // @synthesize charm=_charm;
@property(nonatomic) int fortune; // @synthesize fortune=_fortune;
@property(nonatomic) _Bool isSent; // @synthesize isSent=_isSent;
@property(retain, nonatomic) NSString *noticeNick; // @synthesize noticeNick=_noticeNick;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *body; // @synthesize body=_body;
@property(nonatomic) int contentStyle; // @synthesize contentStyle=_contentStyle;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(nonatomic) int count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *remoteId; // @synthesize remoteId=_remoteId;
- (void).cxx_destruct;
- (_Bool)triggersAtmosphereEffect;
- (_Bool)specialComboEffect;
- (_Bool)sputteringEffect;
- (_Bool)aggEffect;
- (_Bool)planeEffect;
- (id)clone;

@end
