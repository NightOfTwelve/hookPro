//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDProfileAnimationBaseViewController.h"

#import "MDLighthouseSelectedSitePickerDelegate.h"
#import "MDPopGestureRecognizerDelegate.h"
#import "MDProfileEditHeadViewDelegate.h"
#import "MDProfileTableHelperDelegate.h"
#import "MDProfileUserEditDataDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class MBProgressHUD, MDExtendSite, MDLighthouseSelectedSitePicker, MDProfileEditBgView, MDProfileEditHeadView, MDProfileTableHelper, MDProfileUserEditDataHelper, MUElement, NSString;

@interface MDProfileUserEditViewController : MDProfileAnimationBaseViewController <UIActionSheetDelegate, UIAlertViewDelegate, MDProfileEditHeadViewDelegate, MDProfileTableHelperDelegate, MDProfileUserEditDataDelegate, MDLighthouseSelectedSitePickerDelegate, MDPopGestureRecognizerDelegate>
{
    MDProfileUserEditDataHelper *dataHelper;
    _Bool isNeedFetchNewProfile;
    _Bool _hasAnimationed;
    MDProfileTableHelper *_tableHelper;
    MDProfileEditBgView *_bgImgView;
    MDProfileEditHeadView *_headView;
    MBProgressHUD *_hud;
    MUElement *_percentView;
    MDLighthouseSelectedSitePicker *_sitePicker;
    MDExtendSite *_homeTownSite;
}

@property(nonatomic) _Bool hasAnimationed; // @synthesize hasAnimationed=_hasAnimationed;
@property(retain, nonatomic) MDExtendSite *homeTownSite; // @synthesize homeTownSite=_homeTownSite;
@property(retain, nonatomic) MDLighthouseSelectedSitePicker *sitePicker; // @synthesize sitePicker=_sitePicker;
@property(retain, nonatomic) MUElement *percentView; // @synthesize percentView=_percentView;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) MDProfileEditHeadView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) MDProfileEditBgView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) MDProfileTableHelper *tableHelper; // @synthesize tableHelper=_tableHelper;
@property(nonatomic) _Bool isNeedFetchNewProfile; // @synthesize isNeedFetchNewProfile;
@property(retain, nonatomic) MDProfileUserEditDataHelper *dataHelper; // @synthesize dataHelper;
- (void).cxx_destruct;
- (_Bool)md_popGestureRecognizerEnabled;
- (void)selectedSitePicker:(id)arg1 didSelectedWithFirstItem:(id)arg2 secondItem:(id)arg3 selectedFirstRow:(long long)arg4 secondRow:(long long)arg5;
- (void)showSitePicker;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableViewForHelper;
- (id)parallaxViewForHelper;
- (id)containerViewForHelper;
- (void)bindAnimationHelper;
- (void)refreshPercentTipLabel;
- (void)removeHud;
- (void)showHud;
- (void)addNewPicPhoto;
- (void)scrollViewWillEndDragging;
- (void)scrollViewWillBeginDragging;
- (void)changeToNewItemArray:(id)arg1;
- (void)didSelectCellWithModel:(id)arg1;
- (void)newUserGuideCellClicked;
- (void)newUserGuideCellClosed;
- (void)didGetNewProfile;
- (void)saveAction;
- (void)cancelAction;
- (void)updateNaviBar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)refreshViewsFrame;
- (void)needReloadTableBecauseGuide;
- (void)updateTableView;
- (void)updateHeadView;
- (void)updateBgImgView;
- (void)updateAllViews;
- (void)dealloc;
- (void)changeToNewBackGround:(id)arg1;
- (void)reSetFlagWithCardType:(unsigned long long)arg1;
- (void)removeGuideViewAndReSetFlagWithCardType:(unsigned long long)arg1;
- (void)showNewUserGuideWithType:(unsigned long long)arg1;
- (void)checkUserGuideCardTypeErr:(id)arg1;
- (void)checkUserGuideCardTypeFailed:(id)arg1;
- (void)checkUserGuideCardTypeSuccess:(id)arg1;
- (void)checkUserGuideCardType;
- (void)handleEditingLivingSiteActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleEditingWorkSiteActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)shareAvatarError:(id)arg1;
- (void)shareAvatarFail:(id)arg1;
- (void)shareAvatarSuccess:(id)arg1;
- (void)shareAvatar;
- (void)handleShareAvatarAlert:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showProfileCompletionAlert:(id)arg1;
- (void)showShareAvatarAlert:(id)arg1;
- (void)savePersonalInfoFinish:(id)arg1;
- (void)uploadPersonalProfile;
- (void)updateDecorationSuccess;
- (void)setIntroduceEditor:(int)arg1 data:(id)arg2 title:(id)arg3 hint:(id)arg4;
- (void)gotoSiteSelectViewController:(int)arg1;
- (void)hometownCellClicked;
- (void)clickMusicCell;
- (void)clickMovieCell;
- (void)clickBookCell;
- (void)clickHangoutCell;
- (void)clickLiveSiteCell;
- (void)clickWorkSiteCell;
- (void)clickHomeTownCell;
- (void)clickHobbyCell;
- (void)clickAboutCell;
- (void)clickSchoolCell;
- (void)clickJobCell;
- (void)clickLoveCell;
- (void)clickMyLabels;
- (void)clickAddressCell;
- (void)clickSignCell;
- (void)clickImpressionSettingCell;
- (void)clickAgeCell;
- (void)clickAudioCell;
- (void)clickNameCell;
- (void)sDidSelectCellWithModel:(id)arg1;
- (void)saveSuccessAndBack;
- (void)backToLastVC;
- (void)acturalCancelImplementiong;
- (void)sClickSaveButton;
- (void)sClickBackButton;
- (void)addObservers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

