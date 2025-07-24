//
// AACCardNodeText.h
// ActionCardsSDK
// Copyright © 2019 Atomic.io Limited. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AtomicSDK/AACCardNode.h>
#import <AtomicSDK/AACCardNodeCustomIcon.h>
#import <AtomicSDK/AACCardNodeTextClickToExpandInfo.h>

/**
 A body of text, with an optional icon to the left.
 The `text` property supports basic Markdown formatting; namely bold,
 italic, links, and ordered lists and unordered lists.
 */
@interface AACCardNodeText: AACCardNode

/**
 The name of the optional FontAwesome icon to render next to the text.
 */
@property (nonatomic, copy, nullable) NSString* icon DEPRECATED_MSG_ATTRIBUTE("The icon property has been deprecated and will be removed in future releases. Please use customIcon instead.");

/**
 An optional icon to render next to the text.
 */
@property (nonatomic, nullable) AACCardNodeCustomIcon *customIcon;

/**
 The raw text to render, including all Markdown tokens.
 To get the formatted text in a performant way, use `attributedText` instead.
 */
@property (nonatomic, copy, nonnull) NSString* text;

/**
 * @brief Configuration for the "click to expand" behavior of the text block.
 *
 * If this property is non-nil, the text block is configured on the Workbench
 * to be able to be expanded and collapsed.
 *
 * You need to consider all text nodes, list nodes that have the same textBlockId
 * when rendering them, to support "click to expand" behavior.
 */
@property (nonatomic, nullable) AACCardNodeTextClickToExpandInfo *clickToExpandInfo;

/**
 * @brief Unique ID for text nodes belong to the same Workbench text block.
 *
 * Multiple text blocks can be created from a single text element from workbench, due to
 * markdown lists. It's essential to know which text element they belong to for click-to-expand to work.
 */
@property (nonatomic, copy, nonnull) NSString *textBlockId;

@end
