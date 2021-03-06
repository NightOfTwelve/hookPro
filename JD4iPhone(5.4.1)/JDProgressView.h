//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIFont;

@interface JDProgressView : UIView
{
    NSString *_prefixString;
    NSString *_sufixString;
    double _progress;
    UIFont *_font;
    UIColor *_textColor;
}

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSString *sufixString; // @synthesize sufixString=_sufixString;
@property(copy, nonatomic) NSString *prefixString; // @synthesize prefixString=_prefixString;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

