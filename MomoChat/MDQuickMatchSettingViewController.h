//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDTransitinBaseViewController.h"

#import "UIAlertViewDelegate.h"

@class MBProgressHUD, MDAPICached, MDNormalButtonItem, MDQuickMatchPrivateInfo, MDQuickMatchPrivateView, MDQuickMatchSettingInfo, MDQuickMatchSliderView, NSString, UIAlertView, UIButton, UIScrollView, UIView;

@interface MDQuickMatchSettingViewController : MDTransitinBaseViewController <UIAlertViewDelegate>
{
    _Bool _isUpLoad;
    MDNormalButtonItem *_leftButton;
    MDNormalButtonItem *_rightButton;
    UIScrollView *_scrollView;
    MBProgressHUD *_hud;
    MDQuickMatchSliderView *_distanceSliderView;
    MDQuickMatchSliderView *_ageSliderView;
    MDQuickMatchPrivateView *_contactsView;
    MDQuickMatchPrivateInfo *_contactsViewInfo;
    MDQuickMatchPrivateView *_momoPrivateView;
    MDQuickMatchPrivateInfo *_momoPrivateViewInfo;
    MDQuickMatchPrivateInfo *_momoPrivateMatchingInfo;
    MDQuickMatchPrivateView *_momoPrivateMatchingView;
    MDAPICached *_cacheApi;
    MDQuickMatchSettingInfo *_settingInfo;
    MDQuickMatchSettingInfo *_copiedSettingInfo;
    UIButton *_clearBtn;
    UIView *_clearView;
    UIAlertView *_matchingAlertView;
    UIAlertView *_cleanAlertView;
}

@property(retain, nonatomic) UIAlertView *cleanAlertView; // @synthesize cleanAlertView=_cleanAlertView;
@property(retain, nonatomic) UIAlertView *matchingAlertView; // @synthesize matchingAlertView=_matchingAlertView;
@property(retain, nonatomic) UIView *clearView; // @synthesize clearView=_clearView;
@property(retain, nonatomic) UIButton *clearBtn; // @synthesize clearBtn=_clearBtn;
@property(nonatomic) _Bool isUpLoad; // @synthesize isUpLoad=_isUpLoad;
@property(retain, nonatomic) MDQuickMatchSettingInfo *copiedSettingInfo; // @synthesize copiedSettingInfo=_copiedSettingInfo;
@property(retain, nonatomic) MDQuickMatchSettingInfo *settingInfo; // @synthesize settingInfo=_settingInfo;
@property(retain, nonatomic) MDAPICached *cacheApi; // @synthesize cacheApi=_cacheApi;
@property(retain, nonatomic) MDQuickMatchPrivateView *momoPrivateMatchingView; // @synthesize momoPrivateMatchingView=_momoPrivateMatchingView;
@property(retain, nonatomic) MDQuickMatchPrivateInfo *momoPrivateMatchingInfo; // @synthesize momoPrivateMatchingInfo=_momoPrivateMatchingInfo;
@property(retain, nonatomic) MDQuickMatchPrivateInfo *momoPrivateViewInfo; // @synthesize momoPrivateViewInfo=_momoPrivateViewInfo;
@property(retain, nonatomic) MDQuickMatchPrivateView *momoPrivateView; // @synthesize momoPrivateView=_momoPrivateView;
@property(retain, nonatomic) MDQuickMatchPrivateInfo *contactsViewInfo; // @synthesize contactsViewInfo=_contactsViewInfo;
@property(retain, nonatomic) MDQuickMatchPrivateView *contactsView; // @synthesize contactsView=_contactsView;
@property(retain, nonatomic) MDQuickMatchSliderView *ageSliderView; // @synthesize ageSliderView=_ageSliderView;
@property(retain, nonatomic) MDQuickMatchSliderView *distanceSliderView; // @synthesize distanceSliderView=_distanceSliderView;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MDNormalButtonItem *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) MDNormalButtonItem *leftButton; // @synthesize leftButton=_leftButton;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)closeAllViews;
- (void)clearUserTrailApi;
- (void)closeMatching;
- (void)clearUserTrail;
- (void)uploadInfo;
- (void)uploadPhoneBook;
- (void)fetchSettingInfo;
- (void)alertViewCleanInfo;
- (void)alertWarningMatching;
- (void)gotoPhoneContact;
- (void)removeHud;
- (void)showHud;
- (void)configSliderView;
- (void)configData;
- (void)configView;
- (void)updateData;
- (void)configNaviBar;
- (void)dismissViewByCancelButtonClicked:(_Bool)arg1;
- (void)cancelAction;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
