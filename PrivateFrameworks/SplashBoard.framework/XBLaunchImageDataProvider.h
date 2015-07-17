/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBLaunchImageDataProvider : NSObject <XBSnapshotDataProvider> {
    NSData * _cachedImageData;
    XBDisplaySnapshot * _snapshot;
}

@property (nonatomic, readonly, retain) XBSnapshotDataProviderContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_invalidateSnapshotData;
- (id)context;
- (void)dealloc;
- (id)fetchImageData:(out struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg1;
- (id)initWithRequest:(id)arg1 contextID:(unsigned int)arg2;

@end