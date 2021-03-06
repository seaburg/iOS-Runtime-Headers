/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTransactionSourceOrigin : NSObject {
    BOOL  _active;
    unsigned long long  _name;
    struct _MROrigin { } * _origin;
    double  _outOfMemoryWaitDuration;
    MRTransactionPacketizer * _packetizer;
    NSMutableArray * _packets;
}

@property (getter=isActive, nonatomic, readonly) BOOL active;

- (void)_begin;
- (void)_cleanUp;
- (void)_processMessage:(id)arg1;
- (void)dealloc;
- (id)initWithName:(unsigned long long)arg1 forOrigin:(struct _MROrigin { }*)arg2;
- (BOOL)isActive;
- (void)sendPackets:(id)arg1;

@end
