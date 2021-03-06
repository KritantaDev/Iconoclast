/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SpringBoard-Structs.h"
#import "SBApplicationIcon.h"

@class UIWebClip;

@interface SBWidgetApplicationIcon : SBApplicationIcon {
	UIWebClip *_webClip;
}
@property(readonly, retain) UIWebClip *webClip;
-(id)initWithApplication:(id)application;
-(void)dealloc;
-(id)icon;
-(BOOL)shouldEllipsizeLabel;
-(id)modificationDate:(BOOL)date;
-(BOOL)allowsCloseBox;
-(void)completeUninstall;
-(id)uninstallAlertTitle;
-(id)uninstallAlertBody;
-(id)uninstallAlertConfirmTitle;
-(id)uninstallAlertCancelTitle;
@end

