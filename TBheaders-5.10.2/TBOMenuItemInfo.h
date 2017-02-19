//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBOMenuItemInfo : TBJSONModel
{
    NSString *_trackId;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_pic;	// 24 = 0x18
    NSString *_link;	// 32 = 0x20
    NSString *_textColor;	// 40 = 0x28
    NSString *_highlightedTextColor;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *trackId; // @synthesize trackId=_trackId;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end
