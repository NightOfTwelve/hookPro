//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavoritesItemDataField.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FavoritesRecordDataField : FavoritesItemDataField
{
    unsigned int _msgLocalId;
    NSString *_chatName;
}

@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
- (void).cxx_destruct;
- (id)GetDataPath;
- (id)GetThumbPath;

@end

