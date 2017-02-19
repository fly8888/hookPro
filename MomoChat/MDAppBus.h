//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDThreadSafeDictionary;

@interface MDAppBus : NSObject
{
    MDThreadSafeDictionary *_serviceContainer;
}

+ (void)registerUnit:(id)arg1 withUnitClass:(Class)arg2;
+ (_Bool)existUnit:(id)arg1;
+ (Class)unit:(id)arg1;
+ (_Bool)existService:(id)arg1;
+ (id)service:(id)arg1;
+ (void)registerService:(id)arg1 withImplementClass:(Class)arg2;
+ (id)element:(Class)arg1;
+ (id)sharedBus;
- (id)init;
- (id)unitClasses;
- (id)serviceClasses;
- (id)unitClassDictionary;
- (id)serviceContainer;

@end
