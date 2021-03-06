//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBaseRequest.h"

@class WBOrderObject;

@interface WBPaymentRequest : WBBaseRequest
{
    WBOrderObject *order;	// 8 = 0x8
}

+ (Class)associateResponseClass;
+ (id)requestWithOrder:(id)arg1;
@property(retain, nonatomic) WBOrderObject *order; // @synthesize order;
- (void).cxx_destruct;
- (void)loadFromDictionary:(id)arg1;
- (void)storeToDictionary:(id)arg1;
- (id)validate;
- (_Bool)canBeReceived;
- (_Bool)canBeSent;

@end

