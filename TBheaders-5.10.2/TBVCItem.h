//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBBaseItem.h"

@class NSString;

@interface TBVCItem : TBBaseItem
{
    _Bool _tabbarHidden;	// 64 = 0x40
    _Bool _navibarHidden;	// 65 = 0x41
    _Bool _isNeedLogin;	// 66 = 0x42
    _Bool _isNeedSafeCode;	// 67 = 0x43
    _Bool _isNeedDegrade;	// 68 = 0x44
    NSString *_imageS;	// 72 = 0x48
    NSString *_image;	// 80 = 0x50
    NSString *_selectedImage;	// 88 = 0x58
    NSString *_userTrack;	// 96 = 0x60
}

@property(nonatomic) _Bool isNeedDegrade; // @synthesize isNeedDegrade=_isNeedDegrade;
@property(nonatomic) _Bool isNeedSafeCode; // @synthesize isNeedSafeCode=_isNeedSafeCode;
@property(nonatomic) _Bool isNeedLogin; // @synthesize isNeedLogin=_isNeedLogin;
@property(nonatomic) _Bool navibarHidden; // @synthesize navibarHidden=_navibarHidden;
@property(nonatomic) _Bool tabbarHidden; // @synthesize tabbarHidden=_tabbarHidden;
@property(retain, nonatomic) NSString *userTrack; // @synthesize userTrack=_userTrack;
@property(retain, nonatomic) NSString *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imageS; // @synthesize imageS=_imageS;
- (void).cxx_destruct;
- (id)initWithInfo:(id)arg1;

@end
