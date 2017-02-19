//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TMSearchPageLoader : NSObject
{
    unsigned long long _loadingPageIndex;	// 8 = 0x8
    _Bool _isPageLoading;	// 16 = 0x10
    NSString *_sessionKey;	// 24 = 0x18
    CDUnknownBlockType _loadPageBlock;	// 32 = 0x20
    CDUnknownBlockType _cancelPageLoadBlock;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType cancelPageLoadBlock; // @synthesize cancelPageLoadBlock=_cancelPageLoadBlock;
@property(copy, nonatomic) CDUnknownBlockType loadPageBlock; // @synthesize loadPageBlock=_loadPageBlock;
@property(copy, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
- (void).cxx_destruct;
- (unsigned long long)loadingPageIndex;
- (_Bool)isLoadedFirstPage;
- (_Bool)isPageLoading;
- (void)loadingDidFinished;
- (void)loadNextPage;
- (void)loadFirstPage;
- (void)dealloc;
- (id)initWithLoadBlock:(CDUnknownBlockType)arg1 cancelBlock:(CDUnknownBlockType)arg2;

@end
