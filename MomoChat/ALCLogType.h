//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface ALCLogType : NSObject
{
    NSString *_type;
    NSMutableArray *_fields;
}

@property(retain, nonatomic) NSMutableArray *fields; // @synthesize fields=_fields;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)clearLastStep;
- (long long)getSize;
- (void)updateLogField:(id)arg1 with:(id)arg2;
- (void)addLogField:(id)arg1;
- (id)init;

@end

