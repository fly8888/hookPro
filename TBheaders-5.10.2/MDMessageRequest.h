//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDBaseRequest.h"

@class MDMediaMessage, NSString;

@interface MDMessageRequest : MDBaseRequest
{
    _Bool _bText;	// 8 = 0x8
    int _scene;	// 12 = 0xc
    NSString *_text;	// 16 = 0x10
    MDMediaMessage *_message;	// 24 = 0x18
}

@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) MDMediaMessage *message; // @synthesize message=_message;
@property(nonatomic) _Bool bText; // @synthesize bText=_bText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end
