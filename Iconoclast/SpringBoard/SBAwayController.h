/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"

@class NSMutableArray, NSTimeZone, SBAwayView, SBUIController, NSMutableDictionary, SBSlidingAlertDisplay, NSTimer, NSDictionary, SBSleepProofTimer, SBAlertItem, SBAwayModel, NSString;

@interface SBAwayController : SBAlert {
	SBUIController *_uiController;
	SBAwayModel *_model;
	SBAwayView *_awayView;
	NSTimer *_dimTimer;
	unsigned _isLocked : 1;
	unsigned _isDeviceLocked : 1;
	unsigned _isDeviceLockedInitialized : 1;
	unsigned _isDimmed : 1;
	unsigned _isDimming : 1;
	unsigned _orderedOutDimmed : 1;
	unsigned _frontDimmed : 1;
	unsigned _isPermanentlyBlocked : 1;
	unsigned _makingEmergencyCall : 1;
	unsigned _appRequestedPasscodeEntry : 1;
	unsigned _isSyncing : 1;
	unsigned _relockAfterUnlock : 1;
	unsigned _wasLockedOrMakingEmergencyCallBeforeSync : 1;
	unsigned _wasDeviceLockedBeforeSync : 1;
	unsigned _showOverheatUI : 1;
	NSDictionary *_nowPlayingInfo;
	SBSlidingAlertDisplay *_deviceUnlockDisplay;
	double _deviceLockBlockTime;
	double _lastLockWallTime;
	NSTimeZone *_lastLockTimeZone;
	double _lastLockSecondsSinceBoot;
	NSTimer *_deviceLockTimer;
	BOOL _devicePasscodeLoaded;
	NSString *_devicePasscode;
	NSMutableArray *_pendingAlertItems;
	SBAlertItem *_currentAlertItem;
	NSMutableDictionary *_awayViewPluginControllers;
	SBSleepProofTimer *_smsSoundWakeTimers[2];
}
@property(assign) BOOL showOverheatUI;
@property(readonly, retain) SBAwayView *awayView;
@property(readonly, retain) NSTimer *dimTimer;
@property(readonly, retain) NSString *devicePasscode;
@property(readonly, retain) NSMutableArray *pendingAlertItems;
@property(readonly, retain) SBAlertItem *currentAlertItem;
+(id)sharedAwayController;
+(void)registerForAlerts;
-(id)initWithUIController:(id)uicontroller;
-(id)awayModel;
-(CGRect)alertWindowRect;
-(float)finalAlpha;
-(BOOL)undimsDisplay;
-(id)alertDisplayViewWithSize:(CGSize)size;
-(void)alertDisplayWillBecomeVisible;
-(void)dealloc;
-(void)_releaseAwayView;
-(void)reactivatePendingAlertItems;
-(void)playLockSound;
-(void)_sendLockStateChangedNotification;
-(void)_pendAlertItem:(id)item;
-(void)lock;
-(void)_unlockWithSound:(BOOL)sound;
-(void)unlockWithSound:(BOOL)sound;
-(void)unlockWithSound:(BOOL)sound alertDisplay:(id)display;
-(void)loadPasscode;
-(BOOL)isPasswordProtected;
-(void)activationChanged:(id)changed;
-(BOOL)isDeviceLockedOrBlocked;
-(void)setDeviceLocked:(BOOL)locked;
-(int)_getGracePeriod;
-(void)_markLockTime;
-(void)_updateDeviceLockedState;
-(void)clearDeviceLockedTimer;
-(void)applicationRequestedDeviceUnlock;
-(void)cancelApplicationRequestedDeviceLockEntry;
-(void)_clearBlockedState;
-(BOOL)isBlocked;
-(BOOL)isPermanentlyBlocked:(double *)blocked;
-(void)noteSyncStateChanged;
-(BOOL)isSyncing;
-(void)noteResetRestoreStateChanged;
-(BOOL)isLocked;
-(BOOL)shouldShowLockStatusBarTime;
-(void)lockBarStartedTracking:(id)tracking;
-(void)lockBarStoppedTracking:(id)tracking;
-(void)resetAwayItems;
-(void)frontLockedAnimationFinished;
-(BOOL)shouldAnimateOtherDisplaysSuspension;
-(BOOL)shouldAnimateOtherDisplaysResumption;
-(void)printLockLog;
-(void)frontLocked:(BOOL)locked animate:(BOOL)animate automatically:(BOOL)automatically;
-(void)attemptUnlock;
-(BOOL)isAttemptingUnlock;
-(void)_finishedUnlockAttemptWithStatus:(BOOL)status;
-(BOOL)attemptDeviceUnlockWithPassword:(id)password alertDisplay:(id)display;
-(void)cancelDimTimer;
-(void)restartDimTimer:(float)timer;
-(BOOL)isDimmed;
-(void)finishedDimmingScreen;
-(BOOL)moveAlertItemToAwayView:(id)awayView;
-(void)cleansePendingQueueOfAwayItems;
-(void)smsMessageReceived;
-(void)cancelScheduledSMSSounds;
-(void)_smsSoundWakeTimerFired:(id)fired;
-(void)dimTimerFired;
-(void)relockForButtonPress:(BOOL)buttonPress afterCall:(BOOL)call;
-(void)relockForButtonPress:(BOOL)buttonPress afterCall:(BOOL)call dimmed:(BOOL)dimmed;
-(void)allowIdleSleep;
-(void)preventIdleSleep;
-(void)preventIdleSleepForNumberOfSeconds:(float)seconds;
-(void)dimScreen:(BOOL)screen;
-(void)_undimScreen;
-(void)undimScreen;
-(void)userEventOccurred;
-(void)activate;
-(void)deactivate;
-(BOOL)allowsStackingOfAlert:(id)alert;
-(BOOL)allowsDoubleHeightStatusBar:(BOOL)bar;
-(int)statusBarMode;
-(void)orderOut;
-(void)didFinishAnimatingOut;
-(void)updateNowPlayingInfo:(id)info;
-(void)handleRequestedAlbumArt:(id)art;
-(void)updateClockFormat;
-(void)makeEmergencyCall;
-(void)emergencyCallWasDisplayed;
-(void)emergencyCallWasRemoved;
-(BOOL)isMakingEmergencyCall;
-(void)didAnimateLockKeypadIn;
-(void)didAnimateLockKeypadOut;
-(void)pendOrDeactivateCurrentAlertItem;
-(BOOL)isCurrentAlertItemRinging;
-(BOOL)attemptSnoozeRingingAlertItem;
-(void)stopRingingAlertItem;
-(void)snoozeOrStopRingingAlertItem;
-(BOOL)activateAlertItem:(id)item;
-(BOOL)wantsToHandleAlert:(id)handleAlert;
-(void)deactivateAlertItem:(id)item;
-(void)updateInCallUI;
-(BOOL)isShowingMediaControls;
-(void)hideMediaControls;
-(BOOL)toggleMediaControls;
-(void)toggleShowsIMEIandICCID:(id)iccid;
-(BOOL)isAwayPluginViewVisible;
-(id)highestPriorityAwayPluginController;
-(void)enableLockScreenBundleWithName:(id)name;
-(void)disableLockScreenBundleWithName:(id)name;
-(void)disablePluginContainerNotification:(id)notification;
-(BOOL)awayPluginControllerShouldAnimateOthersResumption;
-(BOOL)handleMenuButtonTap;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)handleMenuButtonHeld;
@end

