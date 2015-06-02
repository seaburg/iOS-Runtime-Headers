/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLocalSearchCompleter : MKSearchCompleter {
    BOOL _dirty;
    double _lastRequestTime;
    NSArray *_results;
    <MKLocationManagerOperation> *_singleLocationUpdate;
    int _source;
    <GEOMapServiceCompletionTicket> *_ticket;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)_fireRequest;
- (void)_handleCompletion:(id)arg1 forTicket:(id)arg2;
- (void)_handleError:(id)arg1 forTicket:(id)arg2;
- (void)_markDirty;
- (void)_schedulePendingRequest;
- (void)_scheduleRequest;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (BOOL)isSearching;
- (id)results;
- (BOOL)resultsAreCurrent;
- (void)retry;
- (void)setBoundingRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFragment:(id)arg1;
- (void)setSource:(int)arg1;
- (int)source;

@end