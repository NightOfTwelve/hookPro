//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, UIButton, UIImageView, UILabel;
@protocol TBPSScenePresentViewDelegate;

@interface TBPSScenePresentItemView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    UILabel *_textView;	// 16 = 0x10
    UILabel *_sceneView;	// 24 = 0x18
    UIButton *_btnClicked;	// 32 = 0x20
    NSDictionary *_dataDict;	// 40 = 0x28
    id <TBPSScenePresentViewDelegate> _delegate;	// 48 = 0x30
}

@property(nonatomic) __weak id <TBPSScenePresentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *dataDict; // @synthesize dataDict=_dataDict;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)colorWithHexString:(id)arg1;
- (void)cancelHighlighted:(id)arg1;
- (void)highlighted:(id)arg1;
- (void)clicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
