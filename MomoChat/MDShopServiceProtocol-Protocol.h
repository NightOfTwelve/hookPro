//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDService.h"

@class NSString;

@protocol MDShopServiceProtocol <MDService>
- (void)gotoShopProfileViewControllerWithGroupId:(NSString *)arg1;
- (void)closeADWithADId:(NSString *)arg1;
- (void)updateShopProfile:(id)arg1;
- (void)fetchShopProfileWithShopId:(NSString *)arg1 completedblock:(void (^)(MDShopProfile *))arg2;
- (void)checkShopStatusWithSourceType:(int)arg1;
- (void)gotoShopSearchResultViewControllerWithText:(NSString *)arg1;
@end

