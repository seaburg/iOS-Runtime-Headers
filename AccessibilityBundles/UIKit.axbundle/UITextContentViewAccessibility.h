/* Generated by RuntimeBrowser
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */

@interface UITextContentViewAccessibility : UITextContentViewAccessibility_super {
}

+ (void)_initializeSafeCategory;

- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_accessibilityCurrentSelectionRange;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (id)_accessibilityTextViewTextOperationResponder;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)dealloc;
- (BOOL)isAccessibilityElement;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)webViewDidChange:(id)arg1;

@end