//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDNearbyHongbaoListEntranceResource : NSObject
{
    NSString *_imgUrlStr;
    NSString *_titleText;
    NSString *_subTitleText;
    NSString *_actionStr;
    NSString *_buttonText;
}

+ (id)modelFromDict:(id)arg1;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *actionStr; // @synthesize actionStr=_actionStr;
@property(copy, nonatomic) NSString *subTitleText; // @synthesize subTitleText=_subTitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(copy, nonatomic) NSString *imgUrlStr; // @synthesize imgUrlStr=_imgUrlStr;
- (void).cxx_destruct;

@end
