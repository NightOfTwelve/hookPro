//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface JHSMBRoundProgressView : UIView
{
    float _progress;	// 8 = 0x8
    _Bool _annular;	// 12 = 0xc
}

- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
@property(nonatomic, getter=isAnnular) _Bool annular;
@property(nonatomic) float progress;

@end

