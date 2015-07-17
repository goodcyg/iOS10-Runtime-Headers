/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioUpdateStationRequest : RadioSyncRequest {
    NSString *_name;
    NSArray *_seeds;
    int _songMixType;
    RadioStation *_station;
    NSString *_stationDescription;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *seeds;
@property (nonatomic) int songMixType;
@property (nonatomic, copy) NSString *stationDescription;

- (void).cxx_destruct;
- (id)_updatedStationDictionary;
- (id)changeList;
- (id)init;
- (id)initWithStation:(id)arg1;
- (id)name;
- (id)seeds;
- (void)setName:(id)arg1;
- (void)setSeeds:(id)arg1;
- (void)setSongMixType:(int)arg1;
- (void)setStationDescription:(id)arg1;
- (int)songMixType;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (id)stationDescription;

@end