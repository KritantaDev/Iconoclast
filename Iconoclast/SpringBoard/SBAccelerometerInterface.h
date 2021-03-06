/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>
#import "SpringBoard-Structs.h"

@class NSMutableArray, NSLock;

@interface SBAccelerometerInterface : NSObject {
	NSLock *_lock;
	double _samplingInterval;
	double _topDisplayLastUpdateTime;
	double _topDisplayInterval;
	NSMutableArray *_clients;
}
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)updateSettings;
-(void)clientRequestedAccelerometerEvents:(unsigned)events updateInterval:(double)interval xThreshold:(float)threshold yThreshold:(float)threshold4 zThreshold:(float)threshold5 auditToken:(XXStruct_kUSYWB *)token;
-(void)_clientInvalidated:(id)invalidated;
-(void)accelerometerDataReceived:(double)received x:(float)x y:(float)y z:(float)z type:(unsigned)type;
@end

