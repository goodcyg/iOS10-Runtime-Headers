/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, NSMutableDictionary, NSDate;

@interface CKDServerConfiguration : NSObject <CKPropertyCoding> {
    NSDate *_expiry;
    NSMutableDictionary *_values;
    NSMutableDictionary *_allowedAppVersionsCache;
}

@property(retain) NSDate * expiry;
@property(retain) NSMutableDictionary * values;
@property(retain) NSMutableDictionary * allowedAppVersionsCache;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (long long)tokenRegisterDaysForContainer:(id)arg1;
- (id)mescalSessionURLForContainer:(id)arg1;
- (unsigned int)mescalServerVersionForContainer:(id)arg1;
- (id)valueForKeyPath:(id)arg1 forContainer:(id)arg2;
- (void)setAllowedAppVersionsCache:(id)arg1;
- (id)allowedAppVersionsCache;
- (void)setExpiry:(id)arg1;
- (id)initWithValues:(id)arg1;
- (id)mescalCertURLForContainer:(id)arg1;
- (bool)shouldSignForMessageType:(int)arg1 inDatabaseScope:(long long)arg2 forContainer:(id)arg3;
- (unsigned long long)maxBatchSizeForContainer:(id)arg1;
- (bool)applicationWithBundleID:(id)arg1 canSyncUsingVersion:(id)arg2 forContainer:(id)arg3;
- (id)flowControlRegenerationForContainer:(id)arg1;
- (id)flowControlBudgetForContainer:(id)arg1;
- (id)initWithPropertyDictionary:(id)arg1;
- (id)dictionaryPropertyEncoding;
- (id)expiry;
- (void)setValues:(id)arg1;
- (id)values;
- (bool)isExpired;
- (void).cxx_destruct;
- (id)description;

@end