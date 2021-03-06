//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface TBTaoPasswordScreenshotsShowCopyView : UIView
{
    NSString *_title;	// 8 = 0x8
    NSString *_mappingCopyText;	// 16 = 0x10
    UILabel *_mappingCopyTextLabel;	// 24 = 0x18
    UIImageView *_mappingCopySuccessImageView;	// 32 = 0x20
    struct CGPoint _topLeftStrokeFirstPoint;	// 40 = 0x28
    struct CGPoint _topLeftStrokeSecondPoint;	// 56 = 0x38
    struct CGPoint _topRightStrokeFirstPoint;	// 72 = 0x48
    struct CGPoint _topRightStrokeSecondPoint;	// 88 = 0x58
    struct CGPoint _leftStrokeFirstPoint;	// 104 = 0x68
    struct CGPoint _leftStrokeSecondPoint;	// 120 = 0x78
    struct CGPoint _rightStrokeFirstPoint;	// 136 = 0x88
    struct CGPoint _rightStrokeSecondPoint;	// 152 = 0x98
    struct CGPoint _bottomStrokeFirstPoint;	// 168 = 0xa8
    struct CGPoint _bottomStrokeSecondPoint;	// 184 = 0xb8
    struct UIEdgeInsets _wireframeInsets;	// 200 = 0xc8
    struct UIEdgeInsets _titleInsets;	// 232 = 0xe8
    struct UIEdgeInsets _copyTextInsets;	// 264 = 0x108
    struct CGRect _titleRect;	// 296 = 0x128
    struct CGRect _copyTextRect;	// 328 = 0x148
}

+ (id)taoPasswordScreenshotsShowCopyViewWithTitle:(id)arg1 copyText:(id)arg2 containerSize:(struct CGSize *)arg3;
@property(retain, nonatomic) UIImageView *mappingCopySuccessImageView; // @synthesize mappingCopySuccessImageView=_mappingCopySuccessImageView;
@property(retain, nonatomic) UILabel *mappingCopyTextLabel; // @synthesize mappingCopyTextLabel=_mappingCopyTextLabel;
@property(nonatomic) struct CGRect copyTextRect; // @synthesize copyTextRect=_copyTextRect;
@property(nonatomic) struct CGRect titleRect; // @synthesize titleRect=_titleRect;
@property(nonatomic) struct CGPoint bottomStrokeSecondPoint; // @synthesize bottomStrokeSecondPoint=_bottomStrokeSecondPoint;
@property(nonatomic) struct CGPoint bottomStrokeFirstPoint; // @synthesize bottomStrokeFirstPoint=_bottomStrokeFirstPoint;
@property(nonatomic) struct CGPoint rightStrokeSecondPoint; // @synthesize rightStrokeSecondPoint=_rightStrokeSecondPoint;
@property(nonatomic) struct CGPoint rightStrokeFirstPoint; // @synthesize rightStrokeFirstPoint=_rightStrokeFirstPoint;
@property(nonatomic) struct CGPoint leftStrokeSecondPoint; // @synthesize leftStrokeSecondPoint=_leftStrokeSecondPoint;
@property(nonatomic) struct CGPoint leftStrokeFirstPoint; // @synthesize leftStrokeFirstPoint=_leftStrokeFirstPoint;
@property(nonatomic) struct CGPoint topRightStrokeSecondPoint; // @synthesize topRightStrokeSecondPoint=_topRightStrokeSecondPoint;
@property(nonatomic) struct CGPoint topRightStrokeFirstPoint; // @synthesize topRightStrokeFirstPoint=_topRightStrokeFirstPoint;
@property(nonatomic) struct CGPoint topLeftStrokeSecondPoint; // @synthesize topLeftStrokeSecondPoint=_topLeftStrokeSecondPoint;
@property(nonatomic) struct CGPoint topLeftStrokeFirstPoint; // @synthesize topLeftStrokeFirstPoint=_topLeftStrokeFirstPoint;
@property(nonatomic) struct UIEdgeInsets copyTextInsets; // @synthesize copyTextInsets=_copyTextInsets;
@property(nonatomic) struct UIEdgeInsets titleInsets; // @synthesize titleInsets=_titleInsets;
@property(nonatomic) struct UIEdgeInsets wireframeInsets; // @synthesize wireframeInsets=_wireframeInsets;
@property(retain, nonatomic) NSString *mappingCopyText; // @synthesize mappingCopyText=_mappingCopyText;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

