//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface OPItemWrap : NSObject
{
    NSString *_word;
    NSString *_url;
    UIColor *_wordColor;
    NSString *_icon;
}

@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIColor *wordColor; // @synthesize wordColor=_wordColor;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *word; // @synthesize word=_word;
- (void).cxx_destruct;

@end
