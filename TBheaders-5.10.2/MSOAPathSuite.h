//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MSOAPathSuite : NSObject
{
    NSString *_path;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)initWithServiceRawPath:(id)arg1;

@end
