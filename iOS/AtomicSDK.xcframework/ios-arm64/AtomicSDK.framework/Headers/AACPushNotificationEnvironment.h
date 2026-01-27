//
// AACPushNotificationEnvironment.h
// AtomicSDK
// Copyright © 2025 Atomic.io Limited. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Represents the Apple Push Notification service environment to register or de-register a device token against.
 */
typedef NS_ENUM(NSUInteger, AACPushNotificationEnvironment) {
    /// Register the token against the APNs sandbox environment.
    AACPushNotificationEnvironmentSandbox,
    /// Register the token against the APNs production environment.
    AACPushNotificationEnvironmentProduction,
    /// Register the token against both APNs environments.
    ///
    /// Note: If only one APNs environment exists, that one is still registered/de-registered.
    AACPushNotificationEnvironmentBoth
};
