/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
 */

@class UIActivityIndicatorView, UIProgressView;

@interface BLActivityAlert : BLAlert  {
    UIProgressView *_progressView;
    UIActivityIndicatorView *_activityIndicatorView;
    int _type;
    double _progress;
    bool_hasActivity;
}


- (id)initWithType:(int)arg1 title:(id)arg2 cancelAction:(id)arg3;
- (id)initWithType:(int)arg1 title:(id)arg2 options:(int)arg3 cancelAction:(id)arg4;
- (void)setHasActivity:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setActivityType:(int)arg1;
- (int)activityType;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1;

@end