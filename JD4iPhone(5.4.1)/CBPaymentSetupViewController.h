//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBPaymentPayBaseViewController.h"

@class CBPInputBox, CBPaymentSetupDataController, CBPaymentSetupViewModel, UILabel;

@interface CBPaymentSetupViewController : CBPaymentPayBaseViewController
{
    CBPaymentSetupViewModel *_viewModel;
    CBPaymentSetupDataController *_dataController;
    UILabel *_tipLabel;
    CBPInputBox *_passwordInputBox;
    UILabel *_messageLabel;
}

@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) CBPInputBox *passwordInputBox; // @synthesize passwordInputBox=_passwordInputBox;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) CBPaymentSetupDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) CBPaymentSetupViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)updateViewWithViewModel;
- (void)cb_textFieldEditingChangedAction:(id)arg1;
- (void)cb_createMessageLabel;
- (void)cb_createInputBox;
- (void)cb_createTipLabel;
- (void)cb_setupSelf;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)navBarLeftButtonAction:(id)arg1;

@end

