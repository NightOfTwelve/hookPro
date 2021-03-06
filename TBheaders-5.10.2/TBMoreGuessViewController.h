//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, PageKitTemplateManager, TBHomePageCollectionViewLayout, TBModelStatusHandler, TBMoreGuessAllSectionData, UICollectionView;

@interface TBMoreGuessViewController : TBViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    TBMoreGuessAllSectionData *_moreGuessAllItem;	// 16 = 0x10
    UICollectionView *_moreGuessCollectionView;	// 24 = 0x18
    PageKitTemplateManager *_moreGuessTemplateManager;	// 32 = 0x20
    TBHomePageCollectionViewLayout *_moreGuessCollectionLayout;	// 40 = 0x28
    TBModelStatusHandler *_handler;	// 48 = 0x30
}

@property(retain, nonatomic) TBModelStatusHandler *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) TBHomePageCollectionViewLayout *moreGuessCollectionLayout; // @synthesize moreGuessCollectionLayout=_moreGuessCollectionLayout;
@property(retain, nonatomic) PageKitTemplateManager *moreGuessTemplateManager; // @synthesize moreGuessTemplateManager=_moreGuessTemplateManager;
@property(retain, nonatomic) UICollectionView *moreGuessCollectionView; // @synthesize moreGuessCollectionView=_moreGuessCollectionView;
@property(retain, nonatomic) TBMoreGuessAllSectionData *moreGuessAllItem; // @synthesize moreGuessAllItem=_moreGuessAllItem;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)checkTemplateForSectionItem:(id)arg1;
- (_Bool)isSectionAvailable:(id)arg1;
- (void)fillSection:(id)arg1;
- (void)reloadCollectionView;
- (void)loadMoreGuessItem;
- (void)configCollectionView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

