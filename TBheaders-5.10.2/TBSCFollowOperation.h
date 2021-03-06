//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBSCBasicServiceDelegate-Protocol.h"

@class NSString, TBSCFollowStatusService, TBSCRelationService;

@interface TBSCFollowOperation : NSObject <TBSCBasicServiceDelegate>
{
    int _targetType;	// 8 = 0x8
    int _subType;	// 12 = 0xc
    unsigned long long _targetId;	// 16 = 0x10
    unsigned long long _accountId;	// 24 = 0x18
    TBSCRelationService *_followService;	// 32 = 0x20
    TBSCFollowStatusService *_followStatusService;	// 40 = 0x28
    CDUnknownBlockType _followFinishBlock;	// 48 = 0x30
    CDUnknownBlockType _followStatusFinishBlock;	// 56 = 0x38
}

@property(copy, nonatomic) CDUnknownBlockType followStatusFinishBlock; // @synthesize followStatusFinishBlock=_followStatusFinishBlock;
@property(copy, nonatomic) CDUnknownBlockType followFinishBlock; // @synthesize followFinishBlock=_followFinishBlock;
@property(retain, nonatomic) TBSCFollowStatusService *followStatusService; // @synthesize followStatusService=_followStatusService;
@property(retain, nonatomic) TBSCRelationService *followService; // @synthesize followService=_followService;
@property(nonatomic) unsigned long long accountId; // @synthesize accountId=_accountId;
@property(nonatomic) int subType; // @synthesize subType=_subType;
@property(nonatomic) int targetType; // @synthesize targetType=_targetType;
@property(nonatomic) unsigned long long targetId; // @synthesize targetId=_targetId;
- (void).cxx_destruct;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)operationFollowWithPubAccountId:(unsigned long long)arg1 appkey:(id)arg2 oprationType:(int)arg3 finiseBlock:(CDUnknownBlockType)arg4;
- (void)getFollowStatusWithPubAccountId:(unsigned long long)arg1 finiseBlock:(CDUnknownBlockType)arg2;
- (void)removeFollowWithPubAccountId:(unsigned long long)arg1 appkey:(id)arg2 finiseBlock:(CDUnknownBlockType)arg3;
- (void)ISVAddFollowWithPubAccountId:(unsigned long long)arg1 appkey:(id)arg2 finiseBlock:(CDUnknownBlockType)arg3;
- (void)addFollowWithPubAccountId:(unsigned long long)arg1 finiseBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

