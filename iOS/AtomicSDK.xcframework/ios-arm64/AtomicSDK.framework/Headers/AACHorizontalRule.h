//
// AACHorizontalRule.h
// ActionCardsSDK
// Copyright © 2025 Atomic.io Limited. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <AtomicSDK/AACMeasurement.h>
#import <AtomicSDK/AACColor.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a horizontal rule placed between buttons and other elements by the SDK theme, converting JSON values into the corresponding properties.
@interface AACHorizontalRule: NSObject

- (instancetype)init NS_UNAVAILABLE;

/// The veritical width of the rule.
@property (nonatomic, readonly) AACMeasurement *width;
@property (nonatomic, readonly) AACColor *color;
@property (nonatomic, readonly) AACMeasurement *insetLeft;
@property (nonatomic, readonly) AACMeasurement *insetRight;

@end

NS_ASSUME_NONNULL_END


