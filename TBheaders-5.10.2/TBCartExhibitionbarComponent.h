//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCartDataComponent.h"

@class NSDictionary, NSNumber, NSString;

@interface TBCartExhibitionbarComponent : TBCartDataComponent
{
    NSString *_title;	// 8 = 0x8
    NSString *_backGroundUrl;	// 16 = 0x10
    NSDictionary *_countdown;	// 24 = 0x18
    NSNumber *_endTime;	// 32 = 0x20
    NSString *_url;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDictionary *countdown; // @synthesize countdown=_countdown;
@property(retain, nonatomic) NSString *backGroundUrl; // @synthesize backGroundUrl=_backGroundUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

