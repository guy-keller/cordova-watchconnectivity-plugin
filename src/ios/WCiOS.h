#import <Cordova/CDV.h>
#import <WatchConnectivity/WatchConnectivity.h>

// This file belongs to: 'cordova-watchconnectivity-plugin-source'
// Any fixes, improvements please send a PR there, thanks!
@interface WCiOS : CDVPlugin <WCSessionDelegate>
{
    NSString *messageReceiver;
    NSDictionary *messageDictionary;
}

@property (nonatomic, strong) NSString *messageReceiver;
@property (nonatomic, copy) NSDictionary *messageDictionary;

- (void) init:(CDVInvokedUrlCommand*)command;
- (void) messageReceiver:(CDVInvokedUrlCommand*)command;
- (void) sendMessage:(CDVInvokedUrlCommand*)command;
- (void) updateApplicationContext:(CDVInvokedUrlCommand*)command;

@end
