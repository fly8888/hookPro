//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WCADPoiInfo : NSObject
{
    int POIType;
    NSString *POIId;
    NSString *POIName;
    NSString *POILink;
}

@property(retain, nonatomic) NSString *POILink; // @synthesize POILink;
@property(retain, nonatomic) NSString *POIName; // @synthesize POIName;
@property(retain, nonatomic) NSString *POIId; // @synthesize POIId;
@property(nonatomic) int POIType; // @synthesize POIType;
- (void).cxx_destruct;
- (_Bool)isValidForShow;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
