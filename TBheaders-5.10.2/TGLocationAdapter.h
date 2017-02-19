//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TGLocationProtocol-Protocol.h"

@class NSString;
@protocol TGLocationProtocol;

@interface TGLocationAdapter : NSObject <TGLocationProtocol>
{
    id <TGLocationProtocol> _locationService;	// 8 = 0x8
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <TGLocationProtocol> locationService; // @synthesize locationService=_locationService;
- (void).cxx_destruct;
- (void)getLocation:(id)arg1 view:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
