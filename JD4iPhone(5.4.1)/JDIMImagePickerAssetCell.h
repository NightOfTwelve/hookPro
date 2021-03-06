//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "JDIMImagePickerAssetViewDelegate.h"

@class NSArray, NSString;

@interface JDIMImagePickerAssetCell : UITableViewCell <JDIMImagePickerAssetViewDelegate>
{
    _Bool _allowsMultipleSelection;
    id <JDIMImagePickerAssetCellDelegate> _delegate;
    NSArray *_assets;
    unsigned long long _numberOfAssets;
    double _margin;
    struct CGSize _imageSize;
}

@property(nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) unsigned long long numberOfAssets; // @synthesize numberOfAssets=_numberOfAssets;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(nonatomic) __weak id <JDIMImagePickerAssetCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)assetView:(id)arg1 didChangeSelectionState:(_Bool)arg2;
- (_Bool)assetViewCanBeSelected:(id)arg1;
- (void)deselectAllAssets;
- (void)selectAllAssets;
- (void)deselectAssetAtIndex:(unsigned long long)arg1;
- (void)selectAssetAtIndex:(unsigned long long)arg1;
- (void)addAssetViews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 imageSize:(struct CGSize)arg3 numberOfAssets:(unsigned long long)arg4 margin:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

