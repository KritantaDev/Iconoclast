/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SpringBoard-Structs.h"
#import "SBAlertItem.h"

@class NSString;

@interface SBCallFailureAlertItem : SBAlertItem {
	int _causeCode;
	NSString *_address;
	CTCallRef _call;
}
-(id)initWithCauseCode:(long)causeCode call:(CTCallRef)call;
-(void)dealloc;
-(void)_callback;
-(id)lockLabel;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)performUnlockAction;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
-(BOOL)isCallFailureAlertItem;
@end

