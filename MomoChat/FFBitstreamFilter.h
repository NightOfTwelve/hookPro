//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FFBitstreamFilter : NSObject
{
    struct AVBitStreamFilterContext *bitstreamFilterContext;
}

@property(nonatomic) struct AVBitStreamFilterContext *bitstreamFilterContext; // @synthesize bitstreamFilterContext;
- (id)initWithFilterName:(id)arg1;
- (void)dealloc;

@end
