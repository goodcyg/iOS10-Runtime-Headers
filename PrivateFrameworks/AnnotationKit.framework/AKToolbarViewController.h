/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKToolbarViewController : UIViewController {
    AKController * _controller;
}

@property AKController *controller;

+ (id)_imageNameForToolbarButtonItemOfType:(unsigned int)arg1;
+ (id)alternateImageForToolbarButtonItemOfType:(unsigned int)arg1;
+ (int)buttonTypeForToolbarButtonItemOfType:(unsigned int)arg1;
+ (id)imageForToolbarButtonItemOfType:(unsigned int)arg1;
+ (id)titleForToolbarButtonItemOfType:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)_toolbarButtonItemOfType:(unsigned int)arg1;
- (id)controller;
- (id)initWithController:(id)arg1;
- (void)revalidateItems;
- (void)setController:(id)arg1;
- (void)setFillColorUIDisplayToColor:(id)arg1;
- (void)setStrokeColorUIDisplayToColor:(id)arg1;
- (void)teardown;

@end