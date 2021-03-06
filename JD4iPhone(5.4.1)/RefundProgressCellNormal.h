//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "TTTAttributedLabelDelegate.h"

@class NSIndexPath, NSString, RefundProgressIconForCell, TTTAttributedLabel, UIImageView, UILabel;

@interface RefundProgressCellNormal : UITableViewCell <TTTAttributedLabelDelegate>
{
    _Bool _isLastRow;
    id <RefundProgressCellNormalDelegate> _delegate;
    UIImageView *_separateLine;
    TTTAttributedLabel *_progressMessageLabel;
    UILabel *_progressTimeLabel;
    RefundProgressIconForCell *_headerIcon;
    NSIndexPath *_indexPath;
}

@property(nonatomic) _Bool isLastRow; // @synthesize isLastRow=_isLastRow;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) RefundProgressIconForCell *headerIcon; // @synthesize headerIcon=_headerIcon;
@property(retain, nonatomic) UILabel *progressTimeLabel; // @synthesize progressTimeLabel=_progressTimeLabel;
@property(retain, nonatomic) TTTAttributedLabel *progressMessageLabel; // @synthesize progressMessageLabel=_progressMessageLabel;
@property(retain, nonatomic) UIImageView *separateLine; // @synthesize separateLine=_separateLine;
@property(nonatomic) __weak id <RefundProgressCellNormalDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)setTitleColorWithHexString:(id)arg1 subTitleColor:(id)arg2;
- (void)configHeaderIconWith:(id)arg1 dataCount:(long long)arg2;
- (void)setDataWithDic:(id)arg1 indexPath:(id)arg2 dataCount:(long long)arg3;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

