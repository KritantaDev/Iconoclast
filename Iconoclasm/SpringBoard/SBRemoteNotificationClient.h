/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "NSCoding.h"
#import <Foundation/NSObject.h>

@class NSData, NSString, SBRemoteNotificationAlert, NSDictionary, NSDate;

@interface SBRemoteNotificationClient : NSObject <NSCoding> {
	NSString *_bundleIdentifier;
	NSString *_environment;
	int _appEnabledTypes;
	int _settingsEnabledTypes;
	int _settingsPresentedTypes;
	NSData *_lastKnownDeviceToken;
	NSDate *_missingDate;
	BOOL _hasShownSystemwideEnableAlert;
	NSDictionary *_lastUserInfo;
	SBRemoteNotificationAlert *_currentAlertItem;
}
@property(readonly, retain, nonatomic) NSString *bundleIdentifier;
@property(retain, nonatomic) NSString *environment;
@property(assign, nonatomic) int appEnabledTypes;
@property(assign, nonatomic) int settingsEnabledTypes;
@property(assign, nonatomic) int settingsPresentedTypes;
@property(retain, nonatomic) NSData *lastKnownDeviceToken;
@property(retain, nonatomic) NSDate *missingDate;
@property(assign, nonatomic) BOOL hasShownSystemwideEnableAlert;
@property(retain, nonatomic) NSDictionary *lastUserInfo;
@property(retain, nonatomic) SBRemoteNotificationAlert *currentAlertItem;
-(id)initWithBundleIdentifier:(id)bundleIdentifier;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(int)effectivelyEnabledTypes;
@end
