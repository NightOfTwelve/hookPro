//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSSet, NSString;

@interface RangerHTMLLexer : NSObject
{
    NSMutableArray *_baseLexer;	// 8 = 0x8
    NSSet *_keyOperaWord;	// 16 = 0x10
    NSSet *_keyWord;	// 24 = 0x18
    long long _readOffset;	// 32 = 0x20
    long long _codeLength;	// 40 = 0x28
    NSString *_code;	// 48 = 0x30
    NSString *_currentReadString;	// 56 = 0x38
    NSString *_nextReadString;	// 64 = 0x40
    NSMutableArray *_items;	// 72 = 0x48
}

- (void).cxx_destruct;
- (id)lexerFromCode:(id)arg1;
- (id)lexerFromContentFile:(id)arg1;
- (_Bool)scanBaseLexer:(id)arg1;
- (_Bool)scanForOper:(id)arg1;
- (id)lastItem;
- (id)removeStringLeftRightMark:(id)arg1;
- (_Bool)scanForWord:(id)arg1;
- (_Bool)isABCChar:(id)arg1;
- (_Bool)moveToNextChar;
- (_Bool)isReadEnd;
- (id)init;

@end

