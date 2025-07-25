#ifdef RCT_NEW_ARCH_ENABLED
#import "StepCounterSpec.h"
#import <React/RCTEventEmitter.h>

@interface StepCounter : RCTEventEmitter <NativeStepCounterSpec>
#else
#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
#import "SOMotionDetecter.h"

@interface StepCounter : RCTEventEmitter <RCTBridgeModule>
#endif
@end
