//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFFile;

@interface FFStream : NSObject
{
    struct AVStream *stream;
    FFFile *parentFile;
}

@property(nonatomic) __weak FFFile *parentFile; // @synthesize parentFile;
@property(nonatomic) struct AVStream *stream; // @synthesize stream;
- (void).cxx_destruct;
- (id)codecName;
- (id)initWithFile:(id)arg1;

@end

