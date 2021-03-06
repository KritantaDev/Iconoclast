/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SBApplicationIcon.h"

@class SBCalendarIconContentsView;

@interface SBCalendarApplicationIcon : SBApplicationIcon {
	SBCalendarIconContentsView *_dateContents;
}
-(id)initWithApplication:(id)application;
-(void)dealloc;
-(void)setHighlighted:(BOOL)highlighted delayUnhighlight:(BOOL)unhighlight;
-(void)updateInvitationBadge;
@end

