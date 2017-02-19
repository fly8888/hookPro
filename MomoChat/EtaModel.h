//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EtaSerializing.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class EtaFlag, NSString;

@interface EtaModel : NSObject <NSCoding, NSCopying, EtaSerializing>
{
    EtaFlag *_etaFlag;
}

+ (void)etafinishedModel:(id)arg1 withDict:(id)arg2;
+ (id)eta_classInfo;
+ (id)eta_drop;
+ (void)eta_create:(id)arg1;
+ (id)eta_valueTransform;
+ (id)eta_dbStoreProperty;
+ (id)eta_key;
+ (id)eta_jsonKeyPathsByProperty;
+ (id)eta_dictionaryFromModel:(id)arg1;
+ (id)eta_modelsFromDictArray:(id)arg1;
+ (id)eta_modelFromDictionary:(id)arg1;
@property(readonly, nonatomic) EtaFlag *etaFlag; // @synthesize etaFlag=_etaFlag;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)eta_valueForInfo:(id)arg1;
- (void)eta_setValue:(id)arg1 forInfo:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)mergeFrom:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
