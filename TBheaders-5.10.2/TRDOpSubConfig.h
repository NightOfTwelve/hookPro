//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface TRDOpSubConfig : NSObject
{
    double _logServerLevelEndTime;	// 8 = 0x8
    _Bool _bTurnOn;	// 16 = 0x10
    NSDictionary *_module;	// 24 = 0x18
    long long _level;	// 32 = 0x20
    long long _levelAutoRestore;	// 40 = 0x28
    long long _logServerLevelTime;	// 48 = 0x30
    long long _lastLevel;	// 56 = 0x38
}

@property(nonatomic) long long lastLevel; // @synthesize lastLevel=_lastLevel;
@property(nonatomic) long long logServerLevelTime; // @synthesize logServerLevelTime=_logServerLevelTime;
@property(nonatomic) long long levelAutoRestore; // @synthesize levelAutoRestore=_levelAutoRestore;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) _Bool bTurnOn; // @synthesize bTurnOn=_bTurnOn;
@property(retain, nonatomic) NSDictionary *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (id)init;

@end
