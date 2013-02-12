/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@interface SWRunWorkoutProxy : NSObject {
}

@property(readonly) NSString *goalType;
@property(readonly) NSString *powerSongName;
@property(readonly) NSString *presetGoal;
@property(readonly) NSString *sensorSearchState;
@property(readonly) NSDictionary *workoutData;
@property(readonly) NSString *workoutState;
@property(readonly) float goal;
@property(readonly) BOOL hasEverStarted;
@property(readonly) BOOL hasPowerSong;

+ (id)createProxy;
+ (void)initialize;

- (void)activateWorkout;
- (void)endWorkout;
- (void)pauseWorkout;
- (void)playOnDemandPrompt;
- (void)playPowerSong;
- (void)prepareToActivateWorkout;

@end