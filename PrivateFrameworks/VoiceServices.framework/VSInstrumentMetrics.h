/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSInstrumentMetrics : NSObject <NSSecureCoding> {
    bool  _isWarmStart;
    unsigned long long  _requestCreatedTimestamp;
    unsigned long long  _speechBeginTimestamp;
    unsigned long long  _speechEndTimestamp;
    NSString * _utterance;
    NSString * _voiceAssetKey;
}

@property bool isWarmStart;
@property unsigned long long requestCreatedTimestamp;
@property unsigned long long speechBeginTimestamp;
@property unsigned long long speechEndTimestamp;
@property (copy) NSString *utterance;
@property (copy) NSString *voiceAssetKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isWarmStart;
- (unsigned long long)requestCreatedTimestamp;
- (void)setIsWarmStart:(bool)arg1;
- (void)setRequestCreatedTimestamp:(unsigned long long)arg1;
- (void)setSpeechBeginTimestamp:(unsigned long long)arg1;
- (void)setSpeechEndTimestamp:(unsigned long long)arg1;
- (void)setUtterance:(id)arg1;
- (void)setVoiceAssetKey:(id)arg1;
- (unsigned long long)speechBeginTimestamp;
- (unsigned long long)speechEndTimestamp;
- (id)utterance;
- (id)voiceAssetKey;

@end