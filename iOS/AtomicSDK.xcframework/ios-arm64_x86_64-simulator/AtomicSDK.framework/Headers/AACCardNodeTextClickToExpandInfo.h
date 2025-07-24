//
// AACCardNodeTextClickToExpandInfo.h
// AtomicSDK
// Copyright © 2025 Atomic.io Limited. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * @brief Configuration data for a text block element that can be expanded and collapsed by the user.
 *
 * This object holds the properties needed to manage the state and appearance of a
 * "click to expand" text element within a card node.
 */
@interface AACCardNodeTextClickToExpandInfo: NSObject

/**
 * @brief The maximum number of lines to display when the text is in its collapsed state.
 *
 * If the full text exceeds this number of lines, it will be truncated, and an
 * option to expand it will be shown.
 */
@property (nonatomic) NSNumber *maxDisplayLines;

/**
 * @brief The text label defined in Workbench, displayed to collapse the text.
 *
 * This text is shown on the interactive label that allows the user to
 * collapse the text after it has been expanded.
 *
 * Defaults to "Show less".
 */
@property (nonatomic, copy) NSString* hideTextLabel;

/**
 * @brief The text label defined in Workbench, displayed to expand the text.
 *
 * This text is shown on the interactive label that allows the user to
 * expand the text to see its full content.
 *
 * Defaults to "Show more".
 */
@property (nonatomic, copy) NSString* showTextLabel;

/**
 * @brief Initialize the object with dictionary values.
 */
- (instancetype __nullable)initWithAttributes:(NSDictionary *)attributes;

@end

NS_ASSUME_NONNULL_END
