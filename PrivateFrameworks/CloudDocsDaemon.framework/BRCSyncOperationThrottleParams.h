/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncOperationThrottleParams : NSObject  {
    double minWait;
    double maxWait;
    double ratioOnSuccess;
    double ratioOnFailure;
    double inactivityKickbackDelay;
    double inactivityKickbackRatio;
}

@property double minWait;
@property double maxWait;
@property double ratioOnSuccess;
@property double ratioOnFailure;
@property double inactivityKickbackDelay;
@property double inactivityKickbackRatio;


- (void)setInactivityKickbackRatio:(double)arg1;
- (void)setInactivityKickbackDelay:(double)arg1;
- (void)setRatioOnFailure:(double)arg1;
- (void)setRatioOnSuccess:(double)arg1;
- (void)setMaxWait:(double)arg1;
- (void)setMinWait:(double)arg1;
- (id)initWithParams:(id)arg1 defaults:(id)arg2;
- (void)setupWithParams:(id)arg1 defaults:(id)arg2;
- (double)doubleForKey:(id)arg1 inParams:(id)arg2 defaults:(id)arg3;
- (double)maxWait;
- (double)ratioOnFailure;
- (double)ratioOnSuccess;
- (double)inactivityKickbackRatio;
- (double)inactivityKickbackDelay;
- (double)minWait;
- (bool)check;

@end