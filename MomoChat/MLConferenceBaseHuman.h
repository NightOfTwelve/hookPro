//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLConferenceWindowDelegate.h"

@class MLConferenceWindow, NSArray, NSMutableDictionary, NSString, UIAlertView, UIView;

@interface MLConferenceBaseHuman : NSObject <MLConferenceWindowDelegate>
{
    _Bool _isFullScreen;
    _Bool _conferencePermission;
    _Bool _conferenceEnable;
    _Bool _needShowToastView;
    _Bool _slaveNeedShowCloseTipView;
    _Bool _isLocked;
    _Bool _selfBorderIndexIsUsed;
    int _maxLineCount;
    id <MLConferenceHumanDelegate> _delegate;
    NSString *_roomid;
    NSArray *_currentSlaves;
    NSString *_momoid;
    NSString *_nickname;
    unsigned long long _charmLevel;
    unsigned long long _fortuneLevel;
    unsigned long long _starThumbs;
    NSArray *_rankingPhotoArray;
    unsigned long long _slaveLiveStatus;
    NSString *_avatarID;
    NSMutableDictionary *_displayFramesInMedia;
    UIView *_littleWindowContainerView;
    MLConferenceWindow *_statusWindow;
    UIAlertView *_alertView;
    NSString *_lastCloseTips;
    NSMutableDictionary *_slaverWindows;
    long long _status;
    unsigned long long _borderColorIndex;
    NSMutableDictionary *_colorMap;
    struct CGRect _bottomSlaverViewFrameRatioInVideo;
}

+ (void)addConnectingTimeLogWithRoomid:(id)arg1 momoid:(id)arg2 startTime:(id)arg3 asHost:(_Bool)arg4;
+ (_Bool)checkSystemCanSupportConference;
@property(retain, nonatomic) NSMutableDictionary *colorMap; // @synthesize colorMap=_colorMap;
@property(nonatomic) unsigned long long borderColorIndex; // @synthesize borderColorIndex=_borderColorIndex;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSMutableDictionary *slaverWindows; // @synthesize slaverWindows=_slaverWindows;
@property(nonatomic) _Bool selfBorderIndexIsUsed; // @synthesize selfBorderIndexIsUsed=_selfBorderIndexIsUsed;
@property(nonatomic) _Bool isLocked; // @synthesize isLocked=_isLocked;
@property(readonly, copy, nonatomic) NSString *lastCloseTips; // @synthesize lastCloseTips=_lastCloseTips;
@property(nonatomic) _Bool slaveNeedShowCloseTipView; // @synthesize slaveNeedShowCloseTipView=_slaveNeedShowCloseTipView;
@property(nonatomic) _Bool needShowToastView; // @synthesize needShowToastView=_needShowToastView;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) MLConferenceWindow *statusWindow; // @synthesize statusWindow=_statusWindow;
@property(nonatomic) _Bool conferenceEnable; // @synthesize conferenceEnable=_conferenceEnable;
@property(nonatomic) _Bool conferencePermission; // @synthesize conferencePermission=_conferencePermission;
@property(nonatomic) struct CGRect bottomSlaverViewFrameRatioInVideo; // @synthesize bottomSlaverViewFrameRatioInVideo=_bottomSlaverViewFrameRatioInVideo;
@property(nonatomic) int maxLineCount; // @synthesize maxLineCount=_maxLineCount;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) UIView *littleWindowContainerView; // @synthesize littleWindowContainerView=_littleWindowContainerView;
@property(retain, nonatomic) NSMutableDictionary *displayFramesInMedia; // @synthesize displayFramesInMedia=_displayFramesInMedia;
@property(copy, nonatomic) NSString *avatarID; // @synthesize avatarID=_avatarID;
@property(nonatomic) unsigned long long slaveLiveStatus; // @synthesize slaveLiveStatus=_slaveLiveStatus;
@property(copy, nonatomic) NSArray *rankingPhotoArray; // @synthesize rankingPhotoArray=_rankingPhotoArray;
@property(nonatomic) unsigned long long starThumbs; // @synthesize starThumbs=_starThumbs;
@property(nonatomic) unsigned long long fortuneLevel; // @synthesize fortuneLevel=_fortuneLevel;
@property(nonatomic) unsigned long long charmLevel; // @synthesize charmLevel=_charmLevel;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *momoid; // @synthesize momoid=_momoid;
@property(retain, nonatomic) NSArray *currentSlaves; // @synthesize currentSlaves=_currentSlaves;
@property(copy, nonatomic) NSString *roomid; // @synthesize roomid=_roomid;
@property(nonatomic) __weak id <MLConferenceHumanDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)changeConferenceWindowStatusWithslaversInfo:(id)arg1 isSlaveInConference:(_Bool)arg2;
- (void)updateRankingPhoto:(id)arg1 forStarId:(id)arg2;
- (void)updateConferneceWindowThumbs:(unsigned long long)arg1 forStarId:(id)arg2;
- (id)calculateConnectionPeriodTimeFromStart:(id)arg1;
- (void)onDecorationPanelStartConnectingButtonClicked;
- (void)dismissGlobalAlertView;
- (void)showCloseViewForMomoid:(id)arg1 startTime:(id)arg2;
- (void)closeConferenceWindowTapEvent:(_Bool)arg1;
- (void)previewConferenceWithMomoid:(id)arg1 duration:(unsigned long long)arg2;
- (void)showLittleWindowForMomoid:(id)arg1;
- (void)removeAllWindows;
- (void)removeLittleWindowForMomoid:(id)arg1;
- (id)slaverWindowWithMomoid:(id)arg1;
@property(readonly, nonatomic) NSArray *colorPool;
- (id)fullColorPool;
- (void)putColorIndexBackForMomoid:(id)arg1;
- (unsigned long long)getOneColorIndexFromPool;
- (id)colorAtIndex:(unsigned long long)arg1;
- (struct CGRect)getStatusWinFrame;
- (void)configStatusView;
- (void)createStatusView;
- (void)showConferenceRankingDelegate:(id)arg1;
- (void)showUserCardWithMomoid:(id)arg1;
- (void)onTapedOnConnectingWindow:(id)arg1;
- (void)onPublisherRemoteVideoIsLostWithSdkId:(id)arg1;
- (void)onPublisherDidCloseWithExitSdkId:(id)arg1;
- (void)onPublisherDidConnectingBetweenMasterSdkId:(id)arg1 slaveSdkId:(id)arg2;
- (void)updateConferenceDisplayFrame:(id)arg1;
- (void)onConferenceFinish;
- (void)onConferenceFailed;
- (void)timeoutInBackground;
- (void)onBadNetworkForPublishing;
- (void)onBadNetworkForPlayingVideo;
- (void)leaveRoom;
- (void)leaveRoomWithConferenceAlertCompletion:(CDUnknownBlockType)arg1;
- (void)closeConference;
- (id)guestInCurrentSlavesWithSdkId:(id)arg1;
- (id)guestInCurrentSlavesWithMomoid:(id)arg1;
- (_Bool)showSystemSupportAlert;
- (void)registerNotification;
- (_Bool)isRoomConnecting;
- (_Bool)isMyselfConnecting;
- (unsigned long long)role;
- (void)dealloc;
- (id)initWithRoomId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
