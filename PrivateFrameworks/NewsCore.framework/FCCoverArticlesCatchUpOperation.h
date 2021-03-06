/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCoverArticlesCatchUpOperation : FCOperation {
    FCCloudContext * _context;
    NSDate * _date;
    NSError * _error;
    NSDictionary * _feedContextByFeedID;
    NSArray * _feedItems;
    NSArray * _supplementalFeedItems;
}

@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, retain) NSDate *date;
@property (retain) NSError *error;
@property (copy) NSDictionary *feedContextByFeedID;
@property (copy) NSArray *feedItems;
@property (copy) NSArray *supplementalFeedItems;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_generateSupplementaFeedRequestsWithCompletionHandler:(id /* block */)arg1;
- (id)context;
- (id)date;
- (id)error;
- (id)feedContextByFeedID;
- (id)feedItems;
- (void)performOperation;
- (void)setContext:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFeedContextByFeedID:(id)arg1;
- (void)setFeedItems:(id)arg1;
- (void)setSupplementalFeedItems:(id)arg1;
- (id)supplementalFeedItems;
- (bool)validateOperation;

@end
