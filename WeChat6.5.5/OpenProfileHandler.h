//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface OpenProfileHandler : MMObject
{
    NSString *_appID;
    NSString *_bundleID;
    NSURL *_infoUrl;
}

- (void).cxx_destruct;
- (void)cancelOpenProfile;
- (void)createWechatOpenProfile;
- (void)startHandleOpenProfile:(id)arg1 BundleID:(id)arg2 Info:(id)arg3;
- (void)dealloc;

@end
