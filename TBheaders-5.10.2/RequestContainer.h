//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ApiRequest, ApiRequestDelegateImpl;

@interface RequestContainer : NSObject
{
    ApiRequest *request;	// 8 = 0x8
    ApiRequestDelegateImpl *delegate;	// 16 = 0x10
}

@property(retain, nonatomic) ApiRequestDelegateImpl *delegate; // @synthesize delegate;
@property(retain, nonatomic) ApiRequest *request; // @synthesize request;
- (void).cxx_destruct;

@end
