//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseCard.h"

@class NSMutableArray;
@protocol TBORambleCircle;

@interface TBORambleCircleListInfoCard : TBOBaseCard
{
    unsigned long long _myCircleCount;	// 32 = 0x20
    NSMutableArray<TBORambleCircle> *_rambleCircles;	// 40 = 0x28
}

@property(retain, nonatomic) NSMutableArray<TBORambleCircle> *rambleCircles; // @synthesize rambleCircles=_rambleCircles;
@property(nonatomic) unsigned long long myCircleCount; // @synthesize myCircleCount=_myCircleCount;
- (void).cxx_destruct;

@end

