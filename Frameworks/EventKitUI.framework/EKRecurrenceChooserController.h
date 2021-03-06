/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKRecurrenceChooserController : NSObject {
    UIColor * _backgroundColor;
    NSDate * _date;
    <EKRecurrenceChooserControllerDelegate> * _delegate;
}

@property (nonatomic, copy) UIColor *backgroundColor;
@property (copy) NSDate *date;
@property <EKRecurrenceChooserControllerDelegate> *delegate;
@property (nonatomic, readonly) int frequency;

+ (int)dayFromNumber:(int)arg1;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)cellForRow:(int)arg1;
- (id)date;
- (id)delegate;
- (BOOL)drawBackgroundForRow:(int)arg1;
- (int)frequency;
- (float)heightForRow:(int)arg1;
- (id)initWithDate:(id)arg1;
- (void)notifyDelegate;
- (int)numberOfRows;
- (void)rowTapped:(int)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)startDateComponents:(unsigned int)arg1;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;

@end
