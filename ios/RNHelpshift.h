
#import "RCTBridgeModule.h"
#import "RCTEventEmitter.h"
#import <Helpshift/HelpshiftSupport.h>

@interface RNHelpshift : RCTEventEmitter <RCTBridgeModule, HelpshiftSupportDelegate>
@end
  
