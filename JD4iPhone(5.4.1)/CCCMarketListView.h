//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CCCAssignmentCouponView, CCCouponMyAssignmentInstructionView, NSArray, NSString, UILabel, UITableView;

@interface CCCMarketListView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool startLoadMore;
    _Bool IntroductionFlag;
    _Bool _ynShowMore;
    UITableView *_listTableView;
    NSArray *_handleItems;
    long long _currentPage;
    long long _totalCount;
    CDUnknownBlockType _CCPagingHandler;
    CDUnknownBlockType _selection;
    NSArray *_assignmentCouponArray;
    long long _onAssignCount;
    long long _readyAssignCount;
    CCCAssignmentCouponView *_headerView;
    CCCouponMyAssignmentInstructionView *_introdutionView;
    UILabel *_noDataLabel;
}

@property(retain, nonatomic) UILabel *noDataLabel; // @synthesize noDataLabel=_noDataLabel;
@property(retain, nonatomic) CCCouponMyAssignmentInstructionView *introdutionView; // @synthesize introdutionView=_introdutionView;
@property(retain, nonatomic) CCCAssignmentCouponView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool ynShowMore; // @synthesize ynShowMore=_ynShowMore;
@property(nonatomic) long long readyAssignCount; // @synthesize readyAssignCount=_readyAssignCount;
@property(nonatomic) long long onAssignCount; // @synthesize onAssignCount=_onAssignCount;
@property(retain, nonatomic) NSArray *assignmentCouponArray; // @synthesize assignmentCouponArray=_assignmentCouponArray;
@property(copy, nonatomic) CDUnknownBlockType selection; // @synthesize selection=_selection;
@property(copy, nonatomic) CDUnknownBlockType CCPagingHandler; // @synthesize CCPagingHandler=_CCPagingHandler;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSArray *handleItems; // @synthesize handleItems=_handleItems;
@property(retain, nonatomic) UITableView *listTableView; // @synthesize listTableView=_listTableView;
- (void).cxx_destruct;
- (void)updateAssignCouponWith:(id)arg1 onAssignCount:(long long)arg2 readyAssignCount:(long long)arg3 ynShowMore:(_Bool)arg4;
- (void)updateReceivedCoupon:(long long)arg1;
- (void)updateWithTotalCount:(long long)arg1 currentPage:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)updateHeaderHeight;
- (void)updateTableHeaderView;
- (void)reloadListViewWithItems:(id)arg1 selectionHandler:(CDUnknownBlockType)arg2 pagingHandler:(CDUnknownBlockType)arg3 tabBarFlag:(_Bool)arg4;
- (void)showNoDataLabel;
- (void)setupContentViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

