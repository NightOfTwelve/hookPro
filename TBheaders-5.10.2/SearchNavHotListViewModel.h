//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchJsonModel.h"

@class NSArray, NSDictionary, NSMutableArray;

@interface SearchNavHotListViewModel : SearchJsonModel
{
    NSMutableArray *_navhots;	// 8 = 0x8
    long long _estimateLines;	// 16 = 0x10
    long long _estimatedLines;	// 24 = 0x18
    NSDictionary *_data;	// 32 = 0x20
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(nonatomic) long long estimatedLines; // @synthesize estimatedLines=_estimatedLines;
- (void).cxx_destruct;
- (_Bool)isNeedShow;
@property(retain, nonatomic) NSArray *navhots;

@end
