//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CALayer, UIColor, UIView;

@protocol EditImageToolDelegate <NSObject>
@property(nonatomic) unsigned int _penCount;
@property(nonatomic) double _lineWidth;
@property(retain, nonatomic) UIColor *_lineColor;
- (void)drawLayer;

@optional
- (struct CGRect)addPathWithP2Point:(struct CGPoint)arg1 withP1Point:(struct CGPoint)arg2 withCPoint:(struct CGPoint)arg3;
- (void)setInitialPoint:(struct CGPoint)arg1;
- (UIView *)createView:(struct CGRect)arg1;
- (CALayer *)createLayer:(struct CGRect)arg1;
@end
