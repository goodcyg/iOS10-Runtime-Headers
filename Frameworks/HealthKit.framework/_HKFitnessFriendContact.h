/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKFitnessFriendContact : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _contactUUID;
    NSSet * _destinations;
    NSString * _fullName;
    NSString * _linkedContactStoreIdentifier;
    _HKFitnessFriendsRelationship * _relationship;
    _HKFitnessFriendsRelationship * _remoteRelationship;
    NSString * _shortName;
}

@property (nonatomic, copy) NSUUID *contactUUID;
@property (nonatomic, copy) NSSet *destinations;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, copy) NSString *linkedContactStoreIdentifier;
@property (nonatomic, copy) _HKFitnessFriendsRelationship *relationship;
@property (nonatomic, copy) _HKFitnessFriendsRelationship *remoteRelationship;
@property (nonatomic, copy) NSString *shortName;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinations;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)fullName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)linkedContactStoreIdentifier;
- (id)relationship;
- (id)remoteRelationship;
- (void)setContactUUID:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setLinkedContactStoreIdentifier:(id)arg1;
- (void)setRelationship:(id)arg1;
- (void)setRemoteRelationship:(id)arg1;
- (void)setShortName:(id)arg1;
- (id)shortName;

// Image: /System/Library/PrivateFrameworks/FitnessFriends.framework/FitnessFriends

- (id)_anyEmailForContact:(id)arg1;
- (id)_anyPhoneNumberForContact:(id)arg1;
- (id)bestDestinationFromKnownDestinations;
- (id)primaryDestinationForMessaging;

@end