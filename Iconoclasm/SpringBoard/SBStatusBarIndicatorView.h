/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SBStatusBarContentView.h"
#import "SpringBoard-Structs.h"

@class NSString;

@interface SBStatusBarIndicatorView : SBStatusBarContentView {
	BOOL _showIndicatorView;
	NSString *_indicatorName;
}
@property(assign, getter=isVisible) BOOL visible;
@property(readonly, retain) NSString *indicatorName;
-(id)initWithName:(id)name andMode:(int)mode;
-(void)dealloc;
-(int)priority;
-(id)description;
-(float)padding;
@end
