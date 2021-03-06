//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IAPProduct : NSObject
{
    NSString *p_id;
    NSString *p_name;
    NSString *p_icon;
    NSString *p_price;
    NSString *p_description;
    int p_tier;
}

+ (id)iapProductWithDic:(id)arg1;
@property(nonatomic) int p_tier; // @synthesize p_tier;
@property(retain, nonatomic) NSString *p_description; // @synthesize p_description;
@property(retain, nonatomic) NSString *p_price; // @synthesize p_price;
@property(retain, nonatomic) NSString *p_icon; // @synthesize p_icon;
@property(retain, nonatomic) NSString *p_name; // @synthesize p_name;
@property(retain, nonatomic) NSString *p_id; // @synthesize p_id;
- (void)dealloc;
- (id)description;

@end

