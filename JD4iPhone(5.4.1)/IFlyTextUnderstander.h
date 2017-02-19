//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface IFlyTextUnderstander : NSObject
{
    _Bool _understanding;
    _Bool _isCancled;
    NSMutableDictionary *_parameters;
}

@property(readonly) _Bool isUnderstanding;
- (void)cancel;
- (id)parameterForKey:(id)arg1;
- (_Bool)setParameter:(id)arg1 forKey:(id)arg2;
- (int)understandText:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end
