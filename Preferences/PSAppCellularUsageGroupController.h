//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSSpecifierGroupController.h"
#import "UsageFeedDelegate.h"

@class NSArray, NSDictionary, NSNumber, NSString, PSExpandableAppListGroupController;

@interface PSAppCellularUsageGroupController : NSObject <UsageFeedDelegate, PSSpecifierGroupController>
{
    NSArray *_cellularDataSwitches;
    _Bool _showInternalDetails;
    _Bool _cancelled;
    _Bool _enabled;
    NSNumber *_totalBytesUsed;
    NSNumber *_totalRoamingBytesUsed;
    PSExpandableAppListGroupController *_appGroupController;
    NSDictionary *_systemServiceCategoryNames;
}

@property(retain, nonatomic) NSDictionary *systemServiceCategoryNames; // @synthesize systemServiceCategoryNames=_systemServiceCategoryNames;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool showInternalDetails; // @synthesize showInternalDetails=_showInternalDetails;
@property(retain, nonatomic) PSExpandableAppListGroupController *appGroupController; // @synthesize appGroupController=_appGroupController;
@property(retain, nonatomic) NSNumber *totalRoamingBytesUsed; // @synthesize totalRoamingBytesUsed=_totalRoamingBytesUsed;
@property(retain, nonatomic) NSNumber *totalBytesUsed; // @synthesize totalBytesUsed=_totalBytesUsed;
- (void)_createAppSpecifiersForVisibleApps:(id)arg1 hiddenApps:(id)arg2 unknownApps:(id)arg3 internalProcesses:(id)arg4;
- (void)_categorizeApps:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)alwaysDisplayedBundleIdentifiers;
- (id)forcedBundleIdentiferForBundleIdentifier:(id)arg1;
- (void)_calculateUsageForSubscriberIdentifier:(id)arg1 inWorkspace:(id)arg2;
- (void)_updateTotalBytesUsed:(double)arg1 roamingBytesUsed:(double)arg2;
- (id)specifierForSpecialCategory:(id)arg1 bytesUsed:(id)arg2;
- (id)nameForSpecialCategory:(id)arg1;
- (id)specifierForApp:(id)arg1 enabled:(_Bool)arg2;
- (id)dataUsageForApplicationSpecifier:(id)arg1;
- (id)appCellularDataEnabledForSpecifier:(id)arg1;
- (void)setAppCellularDataEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setSwitchesEnabled:(_Bool)arg1;
- (void)setWorkspaceInformation:(id)arg1;
- (void)cancel;
- (id)specifiers;
- (void)dealloc;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
