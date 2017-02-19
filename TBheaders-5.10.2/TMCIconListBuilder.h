//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TMCIconListBuilder : NSObject
{
    double _height;	// 8 = 0x8
    double _gap;	// 16 = 0x10
    double _maxWidth;	// 24 = 0x18
    double _fontSize;	// 32 = 0x20
    double _padding;	// 40 = 0x28
    struct CGPoint _position;	// 48 = 0x30
    double _textCornerRadius;	// 64 = 0x40
}

- (id)textCornerRadius:(double)arg1;
- (id)position:(struct CGPoint)arg1;
- (id)padding:(double)arg1;
- (id)maxWidth:(double)arg1;
- (id)gap:(double)arg1;
- (id)height:(double)arg1;
- (id)fontSize:(double)arg1;
- (id)renderView:(id)arg1;
- (id)init;

@end
