//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XBAlbumItem.h"

@class ALAsset;

@interface XBAssetAlbumItem : XBAlbumItem
{
    ALAsset *_asset;
}

@property(retain, nonatomic) ALAsset *asset; // @synthesize asset=_asset;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

@end

