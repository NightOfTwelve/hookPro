//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class CBPInputBox, NSDate, NSString, NSTimer, UIButton;

@interface CBCaptchaView : UIView <UITextFieldDelegate>
{
    UIButton *_button;
    unsigned long long _tickCount;
    NSDate *_dateForEnteringBackground;
    _Bool _isTiming;
    id <CBCaptchaViewDelegate> _delegate;
    CBPInputBox *_captchaBox;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) CBPInputBox *captchaBox; // @synthesize captchaBox=_captchaBox;
@property(nonatomic) __weak id <CBCaptchaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)cb_tickTimer;
- (void)cb_handleWillEnterBackground:(id)arg1;
- (void)cb_handleDidEnterBackground:(id)arg1;
- (void)cb_tapButton:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)dealloc;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)imageWithColor:(id)arg1 imageSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

