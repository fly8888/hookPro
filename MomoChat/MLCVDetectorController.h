//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MLCVDetectorController : NSObject
{
    _Bool _faceBeautifierIsEnabled;
    _Bool _hasFaceDecorations;
}

+ (_Bool)updateObjectDetectorModelWithURL:(id)arg1 shouldValidate:(_Bool)arg2;
+ (id)objectDetectorModelURL;
+ (id)makeObjectDetector;
+ (id)makeFaceDetector;
+ (_Bool)canCreateObjectDetector;
+ (_Bool)canCreateFaceDetector;
+ (id)sharedController;
@property(nonatomic) _Bool hasFaceDecorations; // @synthesize hasFaceDecorations=_hasFaceDecorations;
@property(nonatomic) _Bool faceBeautifierIsEnabled; // @synthesize faceBeautifierIsEnabled=_faceBeautifierIsEnabled;
@property(readonly, nonatomic) _Bool shouldDetectFaces;

@end

