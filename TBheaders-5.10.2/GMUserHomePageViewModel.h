//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface GMUserHomePageViewModel : NSObject
{
    _Bool _is_listType_like;	// 8 = 0x8
    NSMutableArray *_cellViewModelList;	// 16 = 0x10
    NSMutableArray *_cellTypeList;	// 24 = 0x18
    NSMutableArray *_feedidList;	// 32 = 0x20
    NSMutableArray *_publishTimeList;	// 40 = 0x28
}

@property _Bool is_listType_like; // @synthesize is_listType_like=_is_listType_like;
@property(retain, nonatomic) NSMutableArray *publishTimeList; // @synthesize publishTimeList=_publishTimeList;
@property(retain, nonatomic) NSMutableArray *feedidList; // @synthesize feedidList=_feedidList;
@property(retain, nonatomic) NSMutableArray *cellTypeList; // @synthesize cellTypeList=_cellTypeList;
@property(retain, nonatomic) NSMutableArray *cellViewModelList; // @synthesize cellViewModelList=_cellViewModelList;
- (void).cxx_destruct;
- (int)parseViewModelFromData:(id)arg1;
- (int)cellTypeAtIndexPath:(id)arg1;
- (id)cellViewModelAtIndexPath:(id)arg1;
- (long long)cellCount;

@end

