//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface MDReadMsgst : NSObject
{
    NSString *rid;
    NSString *toid;
    NSMutableArray *msgids;
    int type;
    int stype;
}

+ (id)readMsgst:(id)arg1 type:(int)arg2 toid:(id)arg3 msgids:(id)arg4;
@property(nonatomic) int stype; // @synthesize stype;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSMutableArray *msgids; // @synthesize msgids;
@property(retain, nonatomic) NSString *toid; // @synthesize toid;
@property(retain, nonatomic) NSString *rid; // @synthesize rid;
- (id)description;
- (void)dealloc;
- (id)init;

@end

