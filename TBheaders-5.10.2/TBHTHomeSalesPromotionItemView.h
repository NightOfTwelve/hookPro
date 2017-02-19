//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TBHTHomeSectionItemModel, UIImageView, UILabel;

@interface TBHTHomeSalesPromotionItemView : UIView
{
    TBHTHomeSectionItemModel *_item;	// 8 = 0x8
    long long _index;	// 16 = 0x10
    NSString *_trackInfo;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_tipLabel;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) TBHTHomeSectionItemModel *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)tapAction;
- (void)setImage:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
