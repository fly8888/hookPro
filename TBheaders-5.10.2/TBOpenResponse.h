//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TBOpenResponse : NSObject
{
    long long _responseCode;	// 8 = 0x8
    NSString *_errorMeesage;	// 16 = 0x10
    NSDictionary *_responseDic;	// 24 = 0x18
}

@property(retain, nonatomic) NSDictionary *responseDic; // @synthesize responseDic=_responseDic;
@property(retain, nonatomic) NSString *errorMeesage; // @synthesize errorMeesage=_errorMeesage;
@property(nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
- (void).cxx_destruct;
- (id)responseDictionary;

@end
