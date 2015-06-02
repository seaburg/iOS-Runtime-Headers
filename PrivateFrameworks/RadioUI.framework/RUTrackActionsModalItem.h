/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUTrackActionsModalItem : _UIModalItem <RUTrackActioning> {
    _RUTrackActionsModalItemContentView *_contentView;
}

@property (nonatomic, copy) NSString *artistText;
@property (nonatomic, retain) UIImage *artworkImage;
@property (nonatomic, readonly) int cancelIndex;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int enabledActions;
@property (readonly) unsigned int hash;
@property (nonatomic) int onActions;
@property (nonatomic, copy) NSString *songText;
@property (readonly) Class superclass;
@property (nonatomic) <RUTrackActionsDelegate> *trackActionsDelegate;

+ (struct CGSize { float x1; float x2; })artworkSize;

- (void).cxx_destruct;
- (id)_contentView;
- (void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1;
- (int)actionForButtonIndex:(int)arg1;
- (id)artistText;
- (id)artworkImage;
- (int)cancelIndex;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)arg1 withSelectedAction:(int)arg2 atIndex:(int)arg3;
- (int)enabledActions;
- (id)init;
- (int)onActions;
- (void)setArtistText:(id)arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setEnabledActions:(int)arg1;
- (void)setOnActions:(int)arg1;
- (void)setSongText:(id)arg1;
- (void)setTrackActionsDelegate:(id)arg1;
- (id)songText;
- (id)trackActionsDelegate;

@end