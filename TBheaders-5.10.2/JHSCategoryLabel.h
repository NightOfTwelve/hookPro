//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont;

@interface JHSCategoryLabel : UIView
{
    _Bool _bold;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
    UIFont *_textFont;	// 24 = 0x18
    UIColor *_textColor;	// 32 = 0x20
    double _strokeWidth;	// 40 = 0x28
}

@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(nonatomic) _Bool bold; // @synthesize bold=_bold;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (struct CGSize)textSize;
- (id)textAttributes;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end
