/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSDate;

@interface CAMNebulaSecondaryState : NSObject <NSCoding> {
    NSDate *_stopTime;
    long long _stopReasons;
    NSDate *_lastMovieWriteAttemptTime;
    long long _movieWriteAttemptsCount;
    long long _failedStateReadAttemptsCount;
}

@property(retain) NSDate * stopTime;
@property long long stopReasons;
@property(readonly) NSDate * lastMovieWriteAttemptTime;
@property(readonly) long long movieWriteAttemptsCount;
@property long long failedStateReadAttemptsCount;

+ (id)secondaryStateWithContentsOfFile:(id)arg1;

- (void)setFailedStateReadAttemptsCount:(long long)arg1;
- (bool)writeToFile:(id)arg1;
- (void)notifyWillAttemptToWriteMovie;
- (void)setStopReasons:(long long)arg1;
- (id)lastMovieWriteAttemptTime;
- (long long)movieWriteAttemptsCount;
- (long long)failedStateReadAttemptsCount;
- (bool)addStopReasons:(long long)arg1 stopTime:(id)arg2;
- (long long)stopReasons;
- (void)setStopTime:(id)arg1;
- (id)stopTime;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end