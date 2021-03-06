//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AgoraYuvEnhancerObjc : NSObject
{
    double _lighteningFactor;
    double _smoothness;
    struct AgoraYuvGpuEnhancer *_enhancer;
}

@property(nonatomic) struct AgoraYuvGpuEnhancer *enhancer; // @synthesize enhancer=_enhancer;
@property(nonatomic) double smoothness; // @synthesize smoothness=_smoothness;
@property(nonatomic) double lighteningFactor; // @synthesize lighteningFactor=_lighteningFactor;
- (void)turnOff;
- (void)turnOn;
- (void)dealloc;
- (id)init;

@end

