//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBMergeDataObject : NSObject
{
    NSString *_mergeTopic;	// 8 = 0x8
    long long _mergeLevel;	// 16 = 0x10
    NSString *_mergeDesc;	// 24 = 0x18
    NSString *_mergeCount;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *mergeCount; // @synthesize mergeCount=_mergeCount;
@property(retain, nonatomic) NSString *mergeDesc; // @synthesize mergeDesc=_mergeDesc;
@property(nonatomic) long long mergeLevel; // @synthesize mergeLevel=_mergeLevel;
@property(retain, nonatomic) NSString *mergeTopic; // @synthesize mergeTopic=_mergeTopic;
- (void).cxx_destruct;
- (void)setFromDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

