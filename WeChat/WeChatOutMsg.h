//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying.h"
#import "WCDBCoding.h"

@class NSString;

@interface WeChatOutMsg : MMObject <WCDBCoding, NSCopying>
{
    unsigned int localID;
    unsigned int createTime;
    unsigned int readStatus;
    unsigned int wcoMsgType;
    unsigned int pushTime;
    int reserve1;
    unsigned int reserve2;
    unsigned long long svrID;
    NSString *title;
    NSString *content;
    NSString *reserve3;
    NSString *reserve4;
    long long m___rowID;
}

+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *reserve4; // @synthesize reserve4;
@property(retain, nonatomic) NSString *reserve3; // @synthesize reserve3;
@property(nonatomic) unsigned int reserve2; // @synthesize reserve2;
@property(nonatomic) int reserve1; // @synthesize reserve1;
@property(nonatomic) unsigned int pushTime; // @synthesize pushTime;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) unsigned int wcoMsgType; // @synthesize wcoMsgType;
@property(nonatomic) unsigned int readStatus; // @synthesize readStatus;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) unsigned long long svrID; // @synthesize svrID;
@property(nonatomic) unsigned int localID; // @synthesize localID;
- (void).cxx_destruct;
- (void)CopyValueToCopy:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
- (const struct WCDBIndexHelper *)getWCDBIndexArray;
- (unsigned long long)getWCDBIndexArrayCount;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const map_0e718273 *)getFileValueTagIndexMap;
- (id)getFileValueTypeTable;
- (const map_0e718273 *)getPackedValueTagIndexMap;
- (id)getPackedValueTypeTable;
- (const map_7a576766 *)getValueNameIndexMap;
- (id)getValueTable;
- (const WCDBCondition_22fabacd *)db_reserve4;
- (const WCDBCondition_22fabacd *)db_reserve3;
- (const WCDBCondition_c6db074e *)db_reserve2;
- (const WCDBCondition_9620f531 *)db_reserve1;
- (const WCDBCondition_c6db074e *)db_pushTime;
- (const WCDBCondition_22fabacd *)db_content;
- (const WCDBCondition_22fabacd *)db_title;
- (const WCDBCondition_c6db074e *)db_wcoMsgType;
- (const WCDBCondition_c6db074e *)db_readStatus;
- (const WCDBCondition_c6db074e *)db_createTime;
- (const WCDBCondition_7786cbb5 *)db_svrID;
- (const WCDBCondition_c6db074e *)db_localID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
