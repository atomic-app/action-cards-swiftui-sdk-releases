//
// AACCardNodeCheckboxItem.h
// ActionCardsSDK
// Copyright © 2024 Atomic.io Limited. All rights reserved.
//

#import <AtomicSDK/AACCardNode.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Represents a selectable checkbox in a checkbox group.
 */
@interface AACCardNodeCheckboxItem : AACCardNode

/**
 The label to display on the right of the checkbox.
 */
@property (nonatomic, copy) NSString* label;

/**
 The key of the checkbox.
 */
@property (nonatomic, copy) NSString* key;

/**
 The default value of the checkbox.
 */
@property (nonatomic) BOOL defaultValue;

@end

NS_ASSUME_NONNULL_END