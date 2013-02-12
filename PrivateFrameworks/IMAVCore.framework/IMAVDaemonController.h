/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMAVDaemonListener, IMLocalObject, IMRemoteObject<IMAVDaemonProtocol>, NSLock, NSMutableArray, NSObject<OS_dispatch_queue>, NSProtocolChecker, NSString;

@interface IMAVDaemonController : NSObject {
    BOOL _acquiringDaemonConnection;
    NSLock *_connectionLock;
    IMAVDaemonListener *_daemonListener;
    BOOL _hasCheckedForDaemon;
    NSString *_listenerID;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSMutableArray *_listeners;
    IMLocalObject *_localObject;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    NSProtocolChecker *_protocol;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    IMRemoteObject<IMAVDaemonProtocol> *_remoteObject;
    struct __CFRunLoopSource { } *_runLoopSource;
}

@property(readonly) NSObject<OS_dispatch_queue> * _remoteMessageQueue;
@property(readonly) IMAVDaemonListener * listener;

+ (id)sharedInstance;

- (BOOL)__isLocalObjectValidOnQueue:(id)arg1;
- (BOOL)__isRemoteObjectValidOnQueue:(id)arg1;
- (void)_cleanUpConnection;
- (void)_connectToDaemon;
- (void)_disconnectFromDaemon;
- (void)_listenerSetUpdated;
- (void)_localObjectCleanup;
- (void)_localObjectDiedNotification:(id)arg1;
- (BOOL)_makeConnectionWithCompletionBlock:(id)arg1;
- (void)_noteSetupComplete;
- (id)_remoteMessageQueue;
- (void)_remoteObjectCleanup;
- (void)_remoteObjectDiedNotification:(id)arg1;
- (BOOL)addListenerID:(id)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hasListenerForID:(id)arg1;
- (id)init;
- (BOOL)isConnected;
- (BOOL)isConnecting;
- (id)listener;
- (void)localObjectDiedNotification:(id)arg1;
- (BOOL)localObjectExists;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)remoteObjectDiedNotification:(id)arg1;
- (BOOL)remoteObjectExists;
- (BOOL)removeListenerID:(id)arg1;

@end