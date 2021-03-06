//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface WXUploadMediaDataInfo : NSObject
{
    NSString *_sendId;	// 8 = 0x8
    NSString *_token;	// 16 = 0x10
    NSString *_receiveId;	// 24 = 0x18
    long long _sessionType;	// 32 = 0x20
    NSString *_messageId;	// 40 = 0x28
    long long _messageType;	// 48 = 0x30
    NSString *_mimeType;	// 56 = 0x38
    NSData *_fileData;	// 64 = 0x40
    long long _duration;	// 72 = 0x48
}

@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(nonatomic) long long sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) NSString *receiveId; // @synthesize receiveId=_receiveId;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *sendId; // @synthesize sendId=_sendId;
- (void).cxx_destruct;
- (void)dealloc;

@end

