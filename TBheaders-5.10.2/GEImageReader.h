//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetImageGenerator;

@interface GEImageReader : NSObject
{
    unsigned long long _frameCount;	// 8 = 0x8
    AVAssetImageGenerator *_assetGenerator;	// 16 = 0x10
}

@property(retain, nonatomic) AVAssetImageGenerator *assetGenerator; // @synthesize assetGenerator=_assetGenerator;
@property(nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
- (void).cxx_destruct;
- (void)cancel;
- (void)readVideo:(id)arg1 preferSize:(struct CGSize)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end
