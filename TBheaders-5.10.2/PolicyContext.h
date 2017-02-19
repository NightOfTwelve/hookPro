//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface PolicyContext : NSObject
{
    unsigned short _port;	// 8 = 0x8
    int _auth;	// 12 = 0xc
    int _l7e;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSString *_ip;	// 32 = 0x20
    NSString *_protocol;	// 40 = 0x28
    NSString *_publickey;	// 48 = 0x30
    NSString *_rttType;	// 56 = 0x38
}

@property(nonatomic) int l7e; // @synthesize l7e=_l7e;
@property(nonatomic) int auth; // @synthesize auth=_auth;
@property(nonatomic) NSString *rttType; // @synthesize rttType=_rttType;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *publickey; // @synthesize publickey=_publickey;
@property(retain, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)getUTProtocolType;

@end
