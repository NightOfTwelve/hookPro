//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WXFeedBackInfo : NSObject
{
    NSString *_text;	// 8 = 0x8
    NSString *_phoneModel;	// 16 = 0x10
    NSString *_osVersion;	// 24 = 0x18
    NSString *_wxClientVersion;	// 32 = 0x20
    NSString *_ttidString;	// 40 = 0x28
    struct CGSize _screenSize;	// 48 = 0x30
}

@property(nonatomic) struct CGSize screenSize; // @synthesize screenSize=_screenSize;
@property(retain, nonatomic) NSString *ttidString; // @synthesize ttidString=_ttidString;
@property(retain, nonatomic) NSString *wxClientVersion; // @synthesize wxClientVersion=_wxClientVersion;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *phoneModel; // @synthesize phoneModel=_phoneModel;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)dealloc;

@end

