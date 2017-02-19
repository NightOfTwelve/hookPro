//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertView.h>

@class NSString;

@interface JHSAlertViewEx : UIAlertView
{
    CDUnknownBlockType _delegateBlock;	// 8 = 0x8
}

@property(copy, nonatomic) CDUnknownBlockType delegateBlock; // @synthesize delegateBlock=_delegateBlock;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentAlertView:(id)arg1;
- (void)willPresentAlertView:(id)arg1;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addOtherButtonTitles:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
