//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImage3x3TextureSamplingFilter.h"

@interface GPUImageThresholdedNonMaximumSuppressionFilter : GPUImage3x3TextureSamplingFilter
{
    int thresholdUniform;	// 244 = 0xf4
    double _threshold;	// 248 = 0xf8
}

@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
- (id)initWithPackedColorspace:(_Bool)arg1;
- (id)init;

@end
