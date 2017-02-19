//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface ASLayout : NSObject
{
    _Bool _dirty;
    _Bool _flattened;
    id <ASLayoutable> _layoutableObject;
    NSArray *_sublayouts;
    NSArray *_immediateSublayouts;
    struct CGSize _size;
    struct CGPoint _position;
    CDStruct_42a63532 _constrainedSizeRange;
}

+ (id)flattenedLayoutWithLayoutableObject:(id)arg1 constrainedSizeRange:(CDStruct_42a63532)arg2 size:(struct CGSize)arg3 sublayouts:(id)arg4;
+ (id)layoutWithLayoutableObject:(id)arg1 constrainedSizeRange:(CDStruct_42a63532)arg2 size:(struct CGSize)arg3;
+ (id)layoutWithLayoutableObject:(id)arg1 constrainedSizeRange:(CDStruct_42a63532)arg2 size:(struct CGSize)arg3 sublayouts:(id)arg4;
+ (id)layoutWithLayoutableObject:(id)arg1 constrainedSizeRange:(CDStruct_42a63532)arg2 size:(struct CGSize)arg3 position:(struct CGPoint)arg4 sublayouts:(id)arg5 flattened:(_Bool)arg6;
@property(readonly, nonatomic, getter=isFlattened) _Bool flattened; // @synthesize flattened=_flattened;
@property(nonatomic, getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property(readonly, nonatomic) NSArray *immediateSublayouts; // @synthesize immediateSublayouts=_immediateSublayouts;
@property(readonly, nonatomic) NSArray *sublayouts; // @synthesize sublayouts=_sublayouts;
@property(readonly, nonatomic) CDStruct_42a63532 constrainedSizeRange; // @synthesize constrainedSizeRange=_constrainedSizeRange;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) __weak id <ASLayoutable> layoutableObject; // @synthesize layoutableObject=_layoutableObject;
- (void).cxx_destruct;
- (struct CGRect)frame;
- (id)flattenedLayoutUsingPredicateBlock:(CDUnknownBlockType)arg1;

@end
