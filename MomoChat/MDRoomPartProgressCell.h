//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDRoomPartCell.h"

@class MDWeakProxy, NSTimer, SDLoopProgressView;

@interface MDRoomPartProgressCell : MDRoomPartCell
{
    long long _currentIndex;
    long long fadeState;
    long long moveState;
    _Bool _withAnimation;
    SDLoopProgressView *_progressView;
    NSTimer *_timer;
    MDWeakProxy *_proxy;
}

@property(retain, nonatomic) MDWeakProxy *proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) SDLoopProgressView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (void)onNotificationStopTimer;
- (void)stop;
- (void)doUpdateProgress;
- (void)runTimer;
- (void)stop:(id)arg1 finished:(_Bool)arg2 model:(id)arg3;
- (void)animationFadeAndMoveOutWithModel:(id)arg1;
- (void)animationFadeAndMoveInWithModel:(id)arg1;
- (void)refreshCell;
- (void)bindModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
