//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBSpirit.h"

@class NSString, UIColor;

@interface MBWalkSpirit : MBSpirit
{
    struct CGPoint _destination;	// 40 = 0x28
    unsigned long long _direction;	// 56 = 0x38
    double _speed;	// 64 = 0x40
    NSString *_text;	// 72 = 0x48
    UIColor *_backgroundColor;	// 80 = 0x50
    UIColor *_textColor;	// 88 = 0x58
    double _fontSize;	// 96 = 0x60
    double _borderWidth;	// 104 = 0x68
    UIColor *_borderColor;	// 112 = 0x70
    double _cornerRadius;	// 120 = 0x78
    UIColor *_shadowColor;	// 128 = 0x80
    struct CGSize _shadowOffset;	// 136 = 0x88
}

@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(readonly, nonatomic) struct CGPoint destination; // @synthesize destination=_destination;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
- (void).cxx_destruct;
- (id)bindingView;
- (struct CGPoint)originInBounds:(struct CGRect)arg1 withSpirits:(id)arg2;
- (double)estimateActiveTime;
- (struct CGRect)rectWithTime:(double)arg1;
- (_Bool)validWithTime:(double)arg1;
- (id)init;

@end
