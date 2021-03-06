//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface APShareStockObject : NSObject <NSCoding>
{
    int _increaseState;	// 8 = 0x8
    NSString *_stockName;	// 16 = 0x10
    NSString *_stockCode;	// 24 = 0x18
    NSString *_stockPrice;	// 32 = 0x20
    NSString *_stockPriceChange;	// 40 = 0x28
    NSString *_stockPriceChangeRatio;	// 48 = 0x30
    double _time;	// 56 = 0x38
    NSString *_wepageUrl;	// 64 = 0x40
    NSString *_extend;	// 72 = 0x48
}

@property(retain, nonatomic) NSString *extend; // @synthesize extend=_extend;
@property(retain, nonatomic) NSString *wepageUrl; // @synthesize wepageUrl=_wepageUrl;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) int increaseState; // @synthesize increaseState=_increaseState;
@property(retain, nonatomic) NSString *stockPriceChangeRatio; // @synthesize stockPriceChangeRatio=_stockPriceChangeRatio;
@property(retain, nonatomic) NSString *stockPriceChange; // @synthesize stockPriceChange=_stockPriceChange;
@property(retain, nonatomic) NSString *stockPrice; // @synthesize stockPrice=_stockPrice;
@property(retain, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
@property(retain, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

