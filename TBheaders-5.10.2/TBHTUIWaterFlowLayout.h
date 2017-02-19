//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray, NSMutableDictionary;
@protocol HTUIWaterFlowLayoutDelegate;

@interface TBHTUIWaterFlowLayout : UICollectionViewLayout
{
    long long _columnCount;	// 8 = 0x8
    double _minimumColumnSpacing;	// 16 = 0x10
    double _minimumInteritemSpacing;	// 24 = 0x18
    double _headerHeight;	// 32 = 0x20
    double _footerHeight;	// 40 = 0x28
    id <HTUIWaterFlowLayoutDelegate> _delegate;	// 48 = 0x30
    NSMutableArray *_columnHeights;	// 56 = 0x38
    NSMutableArray *_sectionItemAttributes;	// 64 = 0x40
    NSMutableArray *_allItemAttributes;	// 72 = 0x48
    NSMutableDictionary *_headersAttribute;	// 80 = 0x50
    NSMutableDictionary *_footersAttribute;	// 88 = 0x58
    NSMutableArray *_unionRects;	// 96 = 0x60
    double _itemWidth;	// 104 = 0x68
    double _headerWidth;	// 112 = 0x70
    double _footerWidth;	// 120 = 0x78
    struct UIEdgeInsets _sectionInset;	// 128 = 0x80
    struct UIEdgeInsets _headerInset;	// 160 = 0xa0
    struct UIEdgeInsets _footerInset;	// 192 = 0xc0
}

@property(nonatomic) double footerWidth; // @synthesize footerWidth=_footerWidth;
@property(nonatomic) double headerWidth; // @synthesize headerWidth=_headerWidth;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(retain, nonatomic) NSMutableArray *unionRects; // @synthesize unionRects=_unionRects;
@property(retain, nonatomic) NSMutableDictionary *footersAttribute; // @synthesize footersAttribute=_footersAttribute;
@property(retain, nonatomic) NSMutableDictionary *headersAttribute; // @synthesize headersAttribute=_headersAttribute;
@property(retain, nonatomic) NSMutableArray *allItemAttributes; // @synthesize allItemAttributes=_allItemAttributes;
@property(retain, nonatomic) NSMutableArray *sectionItemAttributes; // @synthesize sectionItemAttributes=_sectionItemAttributes;
@property(retain, nonatomic) NSMutableArray *columnHeights; // @synthesize columnHeights=_columnHeights;
@property(nonatomic) __weak id <HTUIWaterFlowLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets footerInset; // @synthesize footerInset=_footerInset;
@property(nonatomic) struct UIEdgeInsets headerInset; // @synthesize headerInset=_headerInset;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) double minimumColumnSpacing; // @synthesize minimumColumnSpacing=_minimumColumnSpacing;
@property(nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
- (void).cxx_destruct;
- (unsigned long long)longestColumnIndex;
- (unsigned long long)shortestColumnIndex;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)commonInit;

@end
