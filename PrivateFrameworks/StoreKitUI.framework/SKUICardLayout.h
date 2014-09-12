/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUICardViewElement, SKUIViewElementLayoutContext;

@interface SKUICardLayout : NSObject  {
    SKUICardViewElement *_cardViewElement;
    SKUIViewElementLayoutContext *_layoutContext;
}

@property(readonly) SKUICardViewElement * cardViewElement;
@property(readonly) SKUIViewElementLayoutContext * layoutContext;
@property(readonly) double horizontalContentInset;
@property(readonly) long long layoutStyle;

+ (bool)allowsViewElement:(id)arg1;
+ (id)layoutWithCardViewElement:(id)arg1 context:(id)arg2;

- (id)cardViewElement;
- (double)bottomInsetForLastViewElement:(id)arg1 width:(double)arg2;
- (double)topInsetForViewElement:(id)arg1 previousViewElement:(id)arg2 width:(double)arg3;
- (id)attributedStringForLabel:(id)arg1;
- (id)attributedStringForButton:(id)arg1;
- (double)horizontalContentInset;
- (long long)layoutStyle;
- (id)layoutContext;
- (struct CGSize { double x1; double x2; })sizeForViewElement:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;

@end