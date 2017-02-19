//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, TBGBroadcasterView, TBGBuyWebView, TBGSendGoldView, TBGTaoCoinsInfo, UIButton, UIImageView, UILabel, UITextField, UIView;
@protocol TBGControlVSFloatViewDelegate;

@interface TBGControlVSFloatView : UIControl <UITextFieldDelegate>
{
    UIView *_headerView;	// 8 = 0x8
    UIImageView *_headerViewLine;	// 16 = 0x10
    UIButton *_backButton;	// 24 = 0x18
    TBGBroadcasterView *_broadcasterView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UIView *_bottomView;	// 48 = 0x30
    TBGBuyWebView *_rightWebView;	// 56 = 0x38
    UIButton *_buyButton;	// 64 = 0x40
    UIButton *_stopPauseButton;	// 72 = 0x48
    UIView *_verticalLine;	// 80 = 0x50
    UITextField *_danmakuInputTextField;	// 88 = 0x58
    UIButton *_danmakuSwitchButton;	// 96 = 0x60
    UIButton *_sendGoldenCoinButton;	// 104 = 0x68
    UIButton *_webCloseButton;	// 112 = 0x70
    _Bool _isBarShow;	// 120 = 0x78
    _Bool _isWebShow;	// 121 = 0x79
    _Bool _isDanmakuOpen;	// 122 = 0x7a
    _Bool _isSliderShow;	// 123 = 0x7b
    TBGSendGoldView *_sendGoldView;	// 128 = 0x80
    TBGTaoCoinsInfo *_taoCoinsInfo;	// 136 = 0x88
    long long _sendCoinsCount;	// 144 = 0x90
    double _keyboardHeight;	// 152 = 0x98
    double _keyBoardAnimationDuration;	// 160 = 0xa0
    _Bool _hideBuyASide;	// 168 = 0xa8
    _Bool _isPlaying;	// 169 = 0xa9
    id <TBGControlVSFloatViewDelegate> _delegate;	// 176 = 0xb0
    NSString *_cartURLString;	// 184 = 0xb8
    NSString *_movieTitle;	// 192 = 0xc0
    long long _maxTextLength;	// 200 = 0xc8
}

@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool hideBuyASide; // @synthesize hideBuyASide=_hideBuyASide;
@property(nonatomic) long long maxTextLength; // @synthesize maxTextLength=_maxTextLength;
@property(retain, nonatomic) NSString *movieTitle; // @synthesize movieTitle=_movieTitle;
@property(retain, nonatomic) NSString *cartURLString; // @synthesize cartURLString=_cartURLString;
@property(nonatomic) __weak id <TBGControlVSFloatViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showToast:(id)arg1;
- (struct CGRect)getVisableFrame;
- (void)showSendGoldenCoinView;
- (void)closeSendGoldenCoinView;
- (void)sendGoldenCoinSuccess;
- (void)sendGoldenCoinButtonClicked:(id)arg1;
- (void)setDanmakuOpen:(_Bool)arg1;
- (void)danmakuSwitchButtonClicked:(id)arg1;
- (void)pauseButtonClicked:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)keyboardFrameChange:(id)arg1;
- (void)keyboardHidden:(id)arg1;
- (void)keyboardShown:(id)arg1;
- (void)addKeyboardNotification;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)resetTextField:(double)arg1;
- (void)setTapCoinsInfo:(id)arg1;
- (void)setBroadcasterInfo:(id)arg1 isInit:(_Bool)arg2;
- (void)refreshStopPauseButtonWithPlay:(_Bool)arg1;
- (void)pasueMovie;
- (void)playMovie;
- (void)showWebView:(_Bool)arg1;
- (void)hideWebView;
- (void)showWebView;
- (void)showHeadAndBottom:(_Bool)arg1;
- (void)hideBars;
- (void)showBars;
- (void)screenClicked:(id)arg1;
- (void)backButtonClicked:(id)arg1;
- (void)relayoutAllViewsWith:(struct CGRect)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)changeSendGoldenCoinButtonStateForOpen:(_Bool)arg1;
- (void)changeDanmakuSwitchButtonStateForOpen:(_Bool)arg1;
- (id)getPlayPasueButtonWithPlayerState:(_Bool)arg1;
- (void)addBottomView;
- (void)addWebView;
- (void)addHeaderView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
