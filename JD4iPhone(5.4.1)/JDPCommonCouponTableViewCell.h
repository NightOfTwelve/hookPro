//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIImageView, UILabel;

@interface JDPCommonCouponTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    NSLayoutConstraint *_titleLabelCenterYConstraint;
    NSLayoutConstraint *_subTitleLabelWidthConstraint;
    UILabel *_subTitleLabel;
    UILabel *_descTextLabel;
    NSLayoutConstraint *_descTextLabelLeadingConstraint;
    NSLayoutConstraint *_descTextLabelWidthConstraint;
    UIImageView *_logoImageView;
    UIImageView *_remarkImageView;
}

@property(nonatomic) UIImageView *remarkImageView; // @synthesize remarkImageView=_remarkImageView;
@property(nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) __weak NSLayoutConstraint *descTextLabelWidthConstraint; // @synthesize descTextLabelWidthConstraint=_descTextLabelWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *descTextLabelLeadingConstraint; // @synthesize descTextLabelLeadingConstraint=_descTextLabelLeadingConstraint;
@property(nonatomic) __weak UILabel *descTextLabel; // @synthesize descTextLabel=_descTextLabel;
@property(nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic) __weak NSLayoutConstraint *subTitleLabelWidthConstraint; // @synthesize subTitleLabelWidthConstraint=_subTitleLabelWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelCenterYConstraint; // @synthesize titleLabelCenterYConstraint=_titleLabelCenterYConstraint;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)loadCellViewModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
