/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHASettings : NSObject {
    ACAccountStore *_accountStore;
    NSMutableSet *_registeredNotifications;
    NSMutableSet *_synchronizePreferences;
    NSMutableDictionary *_updateBlocks;
}

@property (nonatomic) BOOL allowHearingAidControlOnLockScreen;
@property (nonatomic) BOOL independentHearingAidSettings;
@property (nonatomic, retain) NSDictionary *pairedHearingAids;
@property (nonatomic, retain) NSMutableSet *registeredNotifications;
@property (nonatomic) BOOL shouldStreamToLeftAid;
@property (nonatomic) BOOL shouldStreamToRightAid;
@property (nonatomic, retain) NSMutableSet *synchronizePreferences;
@property (nonatomic, retain) NSMutableDictionary *updateBlocks;

+ (void)initialize;
+ (id)sharedInstance;

- (void)_handlePreferenceChanged:(id)arg1;
- (id)_notificationForPreferenceKey:(id)arg1;
- (id)_preferenceKeyForSelector:(SEL)arg1;
- (void)_registerForNotification:(id)arg1;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (void)_synchronizeIfNecessary:(id)arg1;
- (id)_valueForPreferenceKey:(id)arg1;
- (BOOL)allowHearingAidControlOnLockScreen;
- (void)dealloc;
- (void)iCloudAccountDidChange:(id)arg1;
- (void)icloudHearingSettingsDidChange:(id)arg1;
- (BOOL)independentHearingAidSettings;
- (id)init;
- (BOOL)isPairedWithFakeHearingAids;
- (id)pairedHearingAids;
- (void)pushLocalHearingAidsToiCloud;
- (void)registerUpdateBlock:(id /* block */)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (id)registeredNotifications;
- (void)setAllowHearingAidControlOnLockScreen:(BOOL)arg1;
- (void)setIndependentHearingAidSettings:(BOOL)arg1;
- (void)setLocalHearingAidsFromiCloud:(id)arg1;
- (void)setPairedHearingAids:(id)arg1;
- (void)setRegisteredNotifications:(id)arg1;
- (void)setShouldStreamToLeftAid:(BOOL)arg1;
- (void)setShouldStreamToRightAid:(BOOL)arg1;
- (void)setSynchronizePreferences:(id)arg1;
- (void)setUpdateBlocks:(id)arg1;
- (BOOL)shouldStreamToLeftAid;
- (BOOL)shouldStreamToRightAid;
- (BOOL)shouldUseiCloud;
- (id)synchronizePreferences;
- (id)updateBlocks;

@end