//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFSimpleDatabase;

@interface DBNearbySiteProvider : NSObject
{
    MFSimpleDatabase *mfdb;
}

+ (id)providerWithMFDB:(id)arg1;
- (void)ensureDbTables;
- (id)nearbySiteArray;
- (void)replaceNearbySiteArray:(id)arg1;
- (void)dealloc;
- (id)initWithMFDB:(id)arg1;

@end

