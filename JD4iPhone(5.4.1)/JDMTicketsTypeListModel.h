//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray;

@interface JDMTicketsTypeListModel : JDModel
{
    NSArray *_ticketTypeList;
    NSArray *_ticketTypeNameList;
}

@property(retain, nonatomic) NSArray *ticketTypeNameList; // @synthesize ticketTypeNameList=_ticketTypeNameList;
@property(retain, nonatomic) NSArray *ticketTypeList; // @synthesize ticketTypeList=_ticketTypeList;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
