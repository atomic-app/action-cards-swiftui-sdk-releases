//
// AACPushNotification.h
// AtomicSDK
// Copyright © 2020 Atomic.io Limited. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 An immutable object that represents a push notification received from the Atomic Platform.
 See +[AACSession notificationFromPushPayload:] .
 */
@interface AACPushNotification: NSObject

/**
 Do not instantiate this object directly - use +[AACSession notificationFromPushPayload:] instead.
 */
- (instancetype __nonnull)init NS_UNAVAILABLE;

/**
 The unique ID of the push notification from the Atomic Platform.
 */
@property (nonatomic, copy, readonly, nonnull) NSString *atomicPushId;

/**
 The ID of the end user that the push notification was sent to.
 */
@property (nonatomic, copy, readonly, nonnull) NSString *endUserId;

/**
 The ID of the organisation that sent the push notification.
 */
@property (nonatomic, copy, readonly, nonnull) NSString *organisationId;

/**
 The instance ID of the card that triggered this notification to be created.
 */
@property (nonatomic, copy, readonly, nonnull) NSString* cardInstanceId;

/**
 The IDs of the stream containers that the card is contained within.
 */
@property (nonatomic, copy, readonly, nonnull) NSArray<NSString*> *streamContainerIds;

/**
 The ID of the stream container that the card is contained within.
 */
@property (nonatomic, copy, readonly, nonnull) NSString *containerId;

/**
 The issued-at timestamp from the Atomic push notification payload.
 */
@property (nonatomic, strong, readonly, nonnull) NSNumber *ia;

/**
 The signature from the Atomic push notification payload.
 */
@property (nonatomic, copy, readonly, nonnull) NSString *sig;

/**
 Custom data that is sent with the push notification payload, or an empty dictionary if there is no custom data.
 This data is sent in the `notificationDetail` object, in the event payload sent to the Atomic Platform.
 */
@property (nonatomic, copy, readonly, nonnull) NSDictionary *detail;

@end
