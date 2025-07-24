//
// AACCardNodeList.h
// ActionCardsSDK
// Copyright © 2019 Atomic.io Limited. All rights reserved.
//

#import <AtomicSDK/AACCardNode.h>
#import <AtomicSDK/AACCardNodeTextClickToExpandInfo.h>

/**
 An enumeration of possible styles for lists.
 */
typedef NS_ENUM(NSUInteger, AACCardNodeListStyle) {
    /// The list is ordered (i.e. with numbered bullets).
    AACCardNodeListStyleOrdered,
    /// The list is unordered (i.e. with solid bullets).
    AACCardNodeListStyleUnordered,
    /// The list's items are separated by commas.
    AACCardNodeListStyleComma
};

/**
 A list node is a wrapper node for a collection of list items.
 */
@interface AACCardNodeList: AACCardNode

/**
 The style of list to render - either ordered or unordered.
 */
@property (nonatomic) AACCardNodeListStyle style;

/// Whether this node is the first node of a card.
///
/// This property can be used to make the first list item have more top and trailing
/// spacing to make room for the action button.
///
/// This property is set during the parsing the card layout.
@property (nonatomic) BOOL isFirstNodeOfCard;

/**
 * @brief Configuration for the "click to expand" behavior of the markdown list items in a text block.
 *
 * If this property is non-nil, the text block containing the markdown list is configured on the Workbench
 * to be able to be expanded and collapsed.
 *
 * You need to consider all text nodes, list nodes that have the same textBlockId
 * when rendering them, to support "click to expand" behavior.
 *
 * Items' clickToExpandInfo is assigned while parsing markdown lists.
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
