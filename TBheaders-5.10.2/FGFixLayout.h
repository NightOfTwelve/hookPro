//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FGFixLayout : NSObject
{
    unsigned long long _align_self;	// 8 = 0x8
    unsigned long long _z_index;	// 16 = 0x10
    struct LYKCSSEdgeInsets _margin;	// 24 = 0x18
    struct LYKCSSEdgeInsets _padding;	// 56 = 0x38
    struct FGGridFrame _frame;	// 88 = 0x58
    struct FGGridVector _vector;	// 120 = 0x78
}

+ (_Bool)hasFitPropertyInFrame:(struct FGGridFrame)arg1;
+ (id)parseWithPlist:(id)arg1;
@property(nonatomic) unsigned long long z_index; // @synthesize z_index=_z_index;
@property(nonatomic) unsigned long long align_self; // @synthesize align_self=_align_self;
@property(nonatomic) struct FGGridVector vector; // @synthesize vector=_vector;
@property(nonatomic) struct FGGridFrame frame; // @synthesize frame=_frame;
@property(nonatomic) struct LYKCSSEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) struct LYKCSSEdgeInsets margin; // @synthesize margin=_margin;
- (id)init;

@end

