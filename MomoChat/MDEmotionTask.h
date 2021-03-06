//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDEmotionTask : NSObject
{
    int flag;
    int t_taskType;
    NSString *t_button;
    NSString *t_name;
    unsigned long long t_totalNum;
    unsigned long long t_ownNum;
    NSString *t_actionString;
    NSString *t_appstoreURLString;
}

+ (id)emotionTaskToDictionary:(id)arg1;
+ (id)dictionaryToEmotionTask:(id)arg1;
@property(copy, nonatomic) NSString *t_appstoreURLString; // @synthesize t_appstoreURLString;
@property(copy, nonatomic) NSString *t_actionString; // @synthesize t_actionString;
@property(nonatomic) unsigned long long t_ownNum; // @synthesize t_ownNum;
@property(nonatomic) unsigned long long t_totalNum; // @synthesize t_totalNum;
@property(retain, nonatomic) NSString *t_name; // @synthesize t_name;
@property(retain, nonatomic) NSString *t_button; // @synthesize t_button;
@property(nonatomic) int t_taskType; // @synthesize t_taskType;
@property(nonatomic) int flag; // @synthesize flag;
- (id)description;
- (void)setAppstoreURLString:(id)arg1;
- (void)setActionString:(id)arg1;
- (void)setOwnNum:(id)arg1;
- (void)setTotalNum:(id)arg1;
- (void)setName:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setTaskType:(id)arg1;
- (void)dealloc;

@end

