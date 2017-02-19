//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MDStreamVideoPlayerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class BlacoDotPageControl, MDSNSShareView, MDStreamVideoPlayer, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView, UIScrollView;

@interface MomoUserGuideViewController : UIViewController <MDStreamVideoPlayerDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    UIScrollView *mainScrollView;
    UIButton *startBut;
    UIImageView *weiboUseBackgroundView;
    BlacoDotPageControl *pageControl;
    int shareType;
    NSMutableArray *arrayView;
    int currentPage;
    MDSNSShareView *snsShareView;
    UIButton *_shareButton;
    NSMutableDictionary *_shareOptions;
    MDStreamVideoPlayer *_videoPlayer;
    NSMutableArray *_videoPathArray;
    long long _playVideoIndex;
    NSMutableArray *_imageArray;
    UIButton *_enterButton;
    struct CGRect _startBtnInitialFrame;
}

@property(retain, nonatomic) UIButton *enterButton; // @synthesize enterButton=_enterButton;
@property(retain, nonatomic) NSMutableArray *imageArray; // @synthesize imageArray=_imageArray;
@property(nonatomic) long long playVideoIndex; // @synthesize playVideoIndex=_playVideoIndex;
@property(retain, nonatomic) NSMutableArray *videoPathArray; // @synthesize videoPathArray=_videoPathArray;
@property(nonatomic) MDStreamVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(nonatomic) struct CGRect startBtnInitialFrame; // @synthesize startBtnInitialFrame=_startBtnInitialFrame;
@property(retain, nonatomic) NSMutableDictionary *shareOptions; // @synthesize shareOptions=_shareOptions;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) MDSNSShareView *snsShareView; // @synthesize snsShareView;
@property(retain, nonatomic) NSMutableArray *arrayView; // @synthesize arrayView;
- (void)streamVideoPlayerIsPlayToEnd:(id)arg1;
- (void)streamVideoPlayer:(id)arg1 playStalledAtSeconds:(double)arg2;
- (void)streamVideoPlayer:(id)arg1 isFailedLoadWithError:(id)arg2;
- (void)streamVideoPlayer:(id)arg1 loadTimeRange:(CDStruct_e83c9415)arg2;
- (void)streamVideoPlayer:(id)arg1 playToSeconds:(double)arg2;
- (void)streamVideoPlayer:(id)arg1 isReadyToPlayWithDuration:(double)arg2;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)enterButtonClicked:(id)arg1;
- (void)dealloc;
- (void)changeButtonState:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clickFinish:(id)arg1;
- (id)generateVideoThumb:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)initScrollView;
- (void)initController;
- (void)setupVideoPlayView;
- (void)beginAnimations;
- (void)viewDidLoad;
- (void)initData;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
