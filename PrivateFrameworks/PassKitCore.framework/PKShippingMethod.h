/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKShippingMethod : PKPaymentSummaryItem <NSCopying, NSSecureCoding> {
    NSString *_detail;
    NSString *_identifier;
}

@property (nonatomic, copy) NSString *detail;
@property (nonatomic, copy) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)detail;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedString;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToShippingMethod:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end