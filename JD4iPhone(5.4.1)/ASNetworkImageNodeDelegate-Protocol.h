//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASNetworkImageNode, NSError, UIImage;

@protocol ASNetworkImageNodeDelegate <NSObject>

@optional
- (void)imageNodeDidFinishDecoding:(ASNetworkImageNode *)arg1;
- (void)imageNode:(ASNetworkImageNode *)arg1 didFailWithError:(NSError *)arg2;
- (void)imageNodeDidStartFetchingData:(ASNetworkImageNode *)arg1;
- (void)imageNode:(ASNetworkImageNode *)arg1 didLoadImage:(UIImage *)arg2;
@end
