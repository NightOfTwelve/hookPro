//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class GridCellItemView, NSString, UIImage, UIImageView;

@interface ProductGridCell : UITableViewCell
{
    GridCellItemView *_itemView1;
    GridCellItemView *_itemView2;
    NSString *_maidianStr;
    UIImageView *productGridCellBg_;
    UIImage *gridBgImageAll_;
    UIImage *gridBgImage_;
    id delegate;
}

@property(copy, nonatomic) NSString *maidianStr; // @synthesize maidianStr=_maidianStr;
@property(nonatomic) __weak id delegate; // @synthesize delegate;
@property(retain, nonatomic) GridCellItemView *itemView2; // @synthesize itemView2=_itemView2;
@property(retain, nonatomic) GridCellItemView *itemView1; // @synthesize itemView1=_itemView1;
- (void).cxx_destruct;
- (void)didTapStowAtItem:(id)arg1;
- (void)setProduct2:(id)arg1 loadImages:(_Bool)arg2 withCellHeight:(float)arg3 modelIndex:(long long)arg4;
- (void)setProduct1:(id)arg1 loadImages:(_Bool)arg2 withCellHeight:(float)arg3 modelIndex:(long long)arg4;
- (void)tap:(id)arg1;
- (void)addTapGestureWithView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 cellHeight:(float)arg3 isShowLongType:(_Bool)arg4;
- (void)dealloc;

@end
