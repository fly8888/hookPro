//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDStoreNetwork, NSString;

@interface MyJDRedDotManager : NSObject
{
    JDStoreNetwork *_network;
    NSString *lastTime;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedMyJDRedDotManager;
@property(retain, nonatomic) NSString *lastTime; // @synthesize lastTime;
- (void)didFinishResponseWithRequestSetup:(id)arg1 components:(id)arg2 msg:(id)arg3;
- (void)setLastTimeofChannel:(id)arg1;
- (void)getRedDotMessage;
- (id)init;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
