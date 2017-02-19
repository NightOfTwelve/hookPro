//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "MDInitiativeVerifyLoginViewControllerDelegate.h"
#import "MDMessageVerificationControllerDelegate.h"
#import "MDNewLoginHandlerDelegate.h"
#import "MDOpenLoginHandlerDelegate.h"
#import "MDSpamPictureCodeViewControllerDelegate.h"
#import "MDSpamVerifyViewControllerDelegate.h"
#import "MomoVerificationCodeViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class KeyboardHelper, MDNewLoginHandler, MDOpenLoginHandler, MUB10Button, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UITextField, UIView;

@interface MDNewLoginController : MDViewController <MDNewLoginHandlerDelegate, MDInitiativeVerifyLoginViewControllerDelegate, MomoVerificationCodeViewControllerDelegate, UIAlertViewDelegate, MDMessageVerificationControllerDelegate, MDSpamVerifyViewControllerDelegate, MDSpamPictureCodeViewControllerDelegate, MDOpenLoginHandlerDelegate, UITextFieldDelegate>
{
    _Bool _shouleAutoWeixinLogin;
    _Bool _animated;
    _Bool _isFirstComeIn;
    UITextField *_userField;
    UIView *_line0;
    UITextField *_pwdTextField;
    UIView *_line1;
    UIButton *_selectCountryCodeButton;
    UIButton *_forgetButton;
    UIImageView *_backGroundView;
    NSString *_registerBindName;
    NSString *_registerPassWord;
    MUB10Button *_loginButton;
    UIButton *_weixinLoginButton;
    UILabel *_weixinLoginLabel;
    UILabel *_openLoginLoginLabel;
    UIView *_openLoginLine;
    UIView *_openLoginLine1;
    UIButton *_smsLoginButton;
    UILabel *_smsLabel;
    NSLayoutConstraint *_toplineConstraint;
    NSLayoutConstraint *_bottomlineConstraint;
    NSLayoutConstraint *_leftUnderlineConstraint;
    NSLayoutConstraint *_rightUnderlineConstraint;
    NSLayoutConstraint *_titletopConstraint;
    NSLayoutConstraint *_smsCnterXConstraint;
    NSLayoutConstraint *_weixinButtonCenterConstraint;
    NSLayoutConstraint *_kuaiSuLoginLabelCenterXConstraint;
    long long _fromType;
    MDNewLoginHandler *_loginHandler;
    MDOpenLoginHandler *_openLoginHandler;
    double _userIconTopConstant;
    double _iconTop;
    KeyboardHelper *_keyboardHelper;
    double _moveHeight;
    double _keyboardHeight;
}

+ (void)presentLoginController:(id)arg1 passWord:(id)arg2;
+ (void)presentLoginControllerForAutoWeixinLogin;
+ (void)presentLoginController:(id)arg1;
+ (void)pushLoginController:(id)arg1;
+ (void)dissmissUnUseableViewController;
+ (void)beginLoginWithType:(long long)arg1;
+ (void)presentLoginController;
@property(nonatomic) _Bool isFirstComeIn; // @synthesize isFirstComeIn=_isFirstComeIn;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) double moveHeight; // @synthesize moveHeight=_moveHeight;
@property(retain, nonatomic) KeyboardHelper *keyboardHelper; // @synthesize keyboardHelper=_keyboardHelper;
@property(nonatomic) double iconTop; // @synthesize iconTop=_iconTop;
@property(nonatomic) double userIconTopConstant; // @synthesize userIconTopConstant=_userIconTopConstant;
@property(retain, nonatomic) MDOpenLoginHandler *openLoginHandler; // @synthesize openLoginHandler=_openLoginHandler;
@property(retain, nonatomic) MDNewLoginHandler *loginHandler; // @synthesize loginHandler=_loginHandler;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) _Bool shouleAutoWeixinLogin; // @synthesize shouleAutoWeixinLogin=_shouleAutoWeixinLogin;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(retain, nonatomic) NSLayoutConstraint *kuaiSuLoginLabelCenterXConstraint; // @synthesize kuaiSuLoginLabelCenterXConstraint=_kuaiSuLoginLabelCenterXConstraint;
@property(retain, nonatomic) NSLayoutConstraint *weixinButtonCenterConstraint; // @synthesize weixinButtonCenterConstraint=_weixinButtonCenterConstraint;
@property(retain, nonatomic) NSLayoutConstraint *smsCnterXConstraint; // @synthesize smsCnterXConstraint=_smsCnterXConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titletopConstraint; // @synthesize titletopConstraint=_titletopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *rightUnderlineConstraint; // @synthesize rightUnderlineConstraint=_rightUnderlineConstraint;
@property(nonatomic) __weak NSLayoutConstraint *leftUnderlineConstraint; // @synthesize leftUnderlineConstraint=_leftUnderlineConstraint;
@property(nonatomic) __weak NSLayoutConstraint *bottomlineConstraint; // @synthesize bottomlineConstraint=_bottomlineConstraint;
@property(nonatomic) __weak NSLayoutConstraint *toplineConstraint; // @synthesize toplineConstraint=_toplineConstraint;
@property(retain, nonatomic) UILabel *smsLabel; // @synthesize smsLabel=_smsLabel;
@property(retain, nonatomic) UIButton *smsLoginButton; // @synthesize smsLoginButton=_smsLoginButton;
@property(nonatomic) __weak UIView *openLoginLine1; // @synthesize openLoginLine1=_openLoginLine1;
@property(nonatomic) __weak UIView *openLoginLine; // @synthesize openLoginLine=_openLoginLine;
@property(nonatomic) __weak UILabel *openLoginLoginLabel; // @synthesize openLoginLoginLabel=_openLoginLoginLabel;
@property(nonatomic) __weak UILabel *weixinLoginLabel; // @synthesize weixinLoginLabel=_weixinLoginLabel;
@property(nonatomic) __weak UIButton *weixinLoginButton; // @synthesize weixinLoginButton=_weixinLoginButton;
@property(retain, nonatomic) MUB10Button *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) NSString *registerPassWord; // @synthesize registerPassWord=_registerPassWord;
@property(retain, nonatomic) NSString *registerBindName; // @synthesize registerBindName=_registerBindName;
@property(nonatomic) __weak UIImageView *backGroundView; // @synthesize backGroundView=_backGroundView;
@property(nonatomic) __weak UIButton *forgetButton; // @synthesize forgetButton=_forgetButton;
@property(nonatomic) __weak UIButton *selectCountryCodeButton; // @synthesize selectCountryCodeButton=_selectCountryCodeButton;
@property(nonatomic) __weak UIView *line1; // @synthesize line1=_line1;
@property(nonatomic) __weak UITextField *pwdTextField; // @synthesize pwdTextField=_pwdTextField;
@property(nonatomic) __weak UIView *line0; // @synthesize line0=_line0;
@property(nonatomic) __weak UITextField *userField; // @synthesize userField=_userField;
- (void).cxx_destruct;
- (void)didVerifySuccess;
- (void)spamPictureTokenExpire;
- (void)spamPictureVerifySuccess:(id)arg1;
- (void)tokenExpire;
- (void)spamVerifySuccess:(id)arg1;
- (void)resetPasswordSuccess:(id)arg1 message:(id)arg2;
- (void)didTapView:(id)arg1;
- (void)verifySuccess:(id)arg1;
- (void)finishInitiativeVerify;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)spamErrorWithInfo:(id)arg1;
- (void)loginSuccess;
- (void)loginFailErrorCode:(long long)arg1 extraInfo:(id)arg2;
- (void)gotoWeixinRegister;
- (void)showServerError;
- (void)setEnableAllViewTouch:(_Bool)arg1;
- (void)removeHud;
- (void)showHud;
- (void)didClickSMSlogin:(id)arg1;
- (void)didClickWeixinLogin:(id)arg1;
- (void)didClickLoginButton:(id)arg1;
- (void)didClickRegister:(id)arg1;
- (void)didClickBack:(id)arg1;
- (void)requestLoginFailAppconfigInfoError:(id)arg1;
- (void)requestLoginFailAppconfigInfoFail:(id)arg1;
- (void)requestLoginFailAppconfigInfoSuccess:(id)arg1;
- (void)didClickForgetPwd:(id)arg1;
- (void)didClickCountry:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)pushNavigationController:(id)arg1;
- (void)pushViewController:(id)arg1;
- (void)checkLogin;
- (void)pictureCodeVerify;
- (void)startVerify;
- (void)showNearbyViewController:(id)arg1;
- (void)handleCountryCodeChangedNotification:(id)arg1;
- (void)listenRemoveViewController:(id)arg1;
- (void)addObservers;
- (void)configureConstraint;
- (void)configureUserField;
- (void)configureOpenLoginView;
- (void)configuerNavgationBar;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
