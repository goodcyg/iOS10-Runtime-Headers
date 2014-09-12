/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLCloudPhotoLibraryManager;

@interface PLCloudSystemStartedTrigger : PLCloudTrigger  {
    bool_activated;
    PLCloudPhotoLibraryManager *_cloudLibraryManager;
}

@property(retain,readonly) PLCloudPhotoLibraryManager * cloudLibraryManager;

+ (void)triggerWithCloudLibraryManager:(id)arg1;
+ (id)sharedInstance;

- (void)setCloudLibraryManager:(id)arg1;
- (id)cloudLibraryManager;
- (void)activate;
- (void)start;

@end