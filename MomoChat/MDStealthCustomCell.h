//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface MDStealthCustomCell : UITableViewCell
{
    UILabel *_labelTitle;
    UILabel *_labelSubTitle;
    UILabel *_labelRightTitle;
}

@property(retain, nonatomic) UILabel *labelRightTitle; // @synthesize labelRightTitle=_labelRightTitle;
@property(retain, nonatomic) UILabel *labelSubTitle; // @synthesize labelSubTitle=_labelSubTitle;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
- (void).cxx_destruct;
- (void)resetDefault;
- (void)setRightTitle:(id)arg1;
- (void)bindModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

