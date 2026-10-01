//
// AACCardFilter.h
// AtomicSDK
// Copyright © 2021 Atomic.io Limited. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Represents a value of one of the card's properties supported by the SDK, which can be used to filter cards.
 Cards are filtered by applying one or more `AACCardFilterValue`s to an operator, such as `equal to` or `less than`.
 
 Properties can be card's metadata such as its priority or created date, or user defined variables.

 Combine `AACCardFilterValue` with `AACCardListFilter` to create card filters. For more details on
 card filtering, head to the Atomic documentation site.
 
 Note: `list` type user defined variables in Atomic Workbench are not supported for filtering yet.
 */
@interface AACCardFilterValue: NSObject

- (instancetype __nonnull)init NS_UNAVAILABLE;

/**
 Generates a priority value that can be used to filter cards.
 
 Card priority works on all operators except `includes`, `excludes`, `is included in` and `is excluded from`.
 
 @param priority The priority value of card.
 */
+ (AACCardFilterValue* __nonnull)byPriority:(NSInteger)priority;

/**
 Generates a card template ID that can be used to filter cards.
 
 Card template ID works on `equal`, `not equal`, `in`, `not in`, `includes`, `excludes`, `is included in` and `is excluded from` operators.
 
 @param templateId The unique ID of a card.
 */
+ (AACCardFilterValue* __nonnull)byCardTemplateID:(NSString* __nonnull)templateId;

/**
 Generates a card template name that can be used to filter cards.
 For filtering untitled cards, pass an empty string to it.
  
 Card template name works on `equal`, `not equal`, `in`, `not in`, `includes`, `excludes`, `is included in` and `is excluded from` operators.
 
 @param templateName The name of a card.
 */
+ (AACCardFilterValue* __nonnull)byCardTemplateName:(NSString* __nonnull)templateName;

/**
 Generates a date when a card instance is created, which can be used to filter cards.
 
 Created date works on all operators except `includes`, `excludes`, `is included in` and `is excluded from`.
 
 @param createdDate The date when a card instance is created, in UTC timezone.
 */
+ (AACCardFilterValue* __nonnull)byCreatedDate:(NSDate* __nonnull)createdDate;

/**
 Generates a string value of a given variable that can be used to filter cards.
 
 String variables work on `equal`, `not equal`, `in`, `not in`, `includes`, `excludes`, `is included in` and `is excluded from` operators.
 
 @param name The name of the variable, it must be the `string` type in Atomic Workbench.
 @param string The value of that string variable.
 */
+ (AACCardFilterValue* __nonnull)byVariableName:(NSString* __nonnull)name string:(NSString* __nonnull)string;

/**
 Generates a date value of a given variable that can be used to filter cards.
 
 Date variables work on all operators except `includes`, `excludes`, `is included in` and `is excluded from`.
 
 @param name The name of the variable, it must be the `date` type in Atomic Workbench.
 @param date The value of that date variable.
 */
+ (AACCardFilterValue* __nonnull)byVariableName:(NSString* __nonnull)name date:(NSDate* __nonnull)date;

/**
 Generates a number of a given variable that can be used to filter cards.
 
 Number variables work on all operators except `includes`, `excludes`, `is included in` and `is excluded from`.
 
 @param name The name of the variable, it must be the `number` type in Atomic Workbench.
 @param number The value of that number variable.
 */
+ (AACCardFilterValue* __nonnull)byVariableName:(NSString* __nonnull)name number:(NSNumber* __nonnull)number;

/**
 Generates a boolean value of a given variable that can be used to filter cards.
 
 Boolean variables work only on `equal` and `not equal` operator.
 
 @param name The name of the variable, it must be the `boolean` type in Atomic Workbench.
 @param boolean The value of that boolean variable.
 */
+ (AACCardFilterValue* __nonnull)byVariableName:(NSString* __nonnull)name boolean:(BOOL)boolean;

/**
 Generates a string value of the card's top-level content that can be used to filter cards.
 
 Content strings work on `equal`, `not equal`, `in`, `not in`, `includes`, `excludes`, `is included in` and `is excluded from` operators.
 
 @param key The dotted key path of the content value, relative to the card's default view. It starts with `content` or `actions`, followed by the element index and its attributes. For example `actions.0.attributes.values.targetPage`.
 @param string The value of that content string.
 */
+ (AACCardFilterValue* __nonnull)byCardContent:(NSString* __nonnull)key string:(NSString* __nonnull)string;

/**
 Generates a string value of a card subview's content that can be used to filter cards.
 
 Content strings work on `equal`, `not equal`, `in`, `not in`, `includes`, `excludes`, `is included in` and `is excluded from` operators.
 
 @param key The dotted key path of the content value, relative to the card's subviews. It starts with the subview ID, followed by `title`, `inputs` or `actions`. For example `<subview ID>.actions.0.attributes.text`.
 @param string The value of that content string.
 */
+ (AACCardFilterValue* __nonnull)bySubviewContent:(NSString* __nonnull)key string:(NSString* __nonnull)string;

/**
 Generates a number value of the card's top-level content that can be used to filter cards.
 
 Content numbers work on `equal`, `not equal`, `greater than`, `greater than or equal`, `less than`, `less than or equal`, `in`, `not in` and `between` operators.
 
 @param key The dotted key path of the content value, relative to the card's default view. It starts with `content` or `actions`, followed by the element index and its attributes. For example `content.0.attributes.maxDisplayLines`.
 @param number The value of that content number.
 */
+ (AACCardFilterValue* __nonnull)byCardContent:(NSString* __nonnull)key number:(NSNumber* __nonnull)number;

/**
 Generates a boolean value of the card's top-level content that can be used to filter cards.
 
 Content booleans work only on `equal` and `not equal` operators.
 
 @param key The dotted key path of the content value, relative to the card's default view. It starts with `content` or `actions`, followed by the element index and its attributes. For example `content.0.attributes.clickToExpandEnabled`.
 @param boolean The value of that content boolean.
 */
+ (AACCardFilterValue* __nonnull)byCardContent:(NSString* __nonnull)key boolean:(BOOL)boolean;

/**
 Generates a number value of a card subview's content that can be used to filter cards.
 
 Content numbers work on `equal`, `not equal`, `greater than`, `greater than or equal`, `less than`, `less than or equal`, `in`, `not in` and `between` operators.
 
 @param key The dotted key path of the content value, relative to the card's subviews. It starts with the subview ID, followed by `title`, `inputs` or `actions`. For example `<subview ID>.inputs.0.attributes.stepValue`.
 @param number The value of that content number.
 */
+ (AACCardFilterValue* __nonnull)bySubviewContent:(NSString* __nonnull)key number:(NSNumber* __nonnull)number;

/**
 Generates a boolean value of a card subview's content that can be used to filter cards.
 
 Content booleans work only on `equal` and `not equal` operators.
 
 @param key The dotted key path of the content value, relative to the card's subviews. It starts with the subview ID, followed by `title`, `inputs` or `actions`. For example `<subview ID>.inputs.0.attributes.enabledThumbnailIcon`.
 @param boolean The value of that content boolean.
 */
+ (AACCardFilterValue* __nonnull)bySubviewContent:(NSString* __nonnull)key boolean:(BOOL)boolean;

/**
 Generates a string value for a complete filter key that can be used to filter cards.

 Strings work on `equal`, `not equal`, `in`, `not in`, `includes`, `excludes`, `is included in` and `is excluded from` operators.

 @param key The complete filter key, with its namespace and without an operator. For example `metadata.cardDescription`. The key is not validated.
 @param string The value to compare with.
 */
+ (AACCardFilterValue* __nonnull)byFilterKey:(NSString* __nonnull)key string:(NSString* __nonnull)string;

/**
 Generates a number value for a complete filter key that can be used to filter cards.

 Numbers work on `equal`, `not equal`, `greater than`, `greater than or equal`, `less than`, `less than or equal`, `in`, `not in` and `between` operators.

 @param key The complete filter key, with its namespace and without an operator. For example `metadata.cardDescriptionMediaAttributes.dimension.height`. The key is not validated.
 @param number The value to compare with.
 */
+ (AACCardFilterValue* __nonnull)byFilterKey:(NSString* __nonnull)key number:(NSNumber* __nonnull)number;

/**
 Generates a boolean value for a complete filter key that can be used to filter cards.

 Booleans work only on `equal` and `not equal` operators.

 @param key The complete filter key, with its namespace and without an operator. For example `variables.isSpecial`. The key is not validated.
 @param boolean The value to compare with.
 */
+ (AACCardFilterValue* __nonnull)byFilterKey:(NSString* __nonnull)key boolean:(BOOL)boolean;

@end

/**
 Represents an instance of a filter that can be applied to a list of cards.
 */
@interface AACCardFilter: NSObject

@end

/**
 Provides static methods to generate card list filters supported by the SDK.
 */
@interface AACCardListFilter: NSObject

- (instancetype __nonnull)init NS_UNAVAILABLE;

/**
 Generates a card list filter that is restricted to the card with the provided instance ID.
 This can be used in stream containers or single card view to show only a particular card.
 
 @param cardInstanceId The instance ID of the card to show.
 */
+ (AACCardFilter* __nonnull)filterByCardInstanceId:(NSString* __nonnull)cardInstanceId NS_SWIFT_NAME(filter(byCardInstanceId:));

/**
 Generates a card list filter that is restricted to the card with the same filter value.
 
 @param value The value used to compare with cards. For example, the priority of the card.
 */
+ (AACCardFilter* __nonnull)filterByCardsEqualTo:(AACCardFilterValue* __nonnull)value NS_SWIFT_NAME(filter(byCardsEqualTo:));

/**
 Generates a card list filter that is restricted to the card different with the filter value.
 
 @param value The value used to compare with cards. For example, the priority of the card.
 */
+ (AACCardFilter* __nonnull)filterByCardsNotEqualTo:(AACCardFilterValue* __nonnull)value NS_SWIFT_NAME(filter(byCardsNotEqualTo:));

/**
 Generates a card list filter that is restricted to the card with the value greater than the filter.
 
 `Greater than` operator works only on number or date values.
 
 @param value The value used to compare with cards. For example, the priority of the card.
 */
+ (AACCardFilter* __nonnull)filterByCardsGreaterThan:(AACCardFilterValue* __nonnull)value NS_SWIFT_NAME(filter(byCardsGreaterThan:));

/**
 Generates a card list filter that is restricted to the card with the value greater than or equal to the filter.
 
 `Greater than or equal to` operator works only on number or date values.
 
 @param value The value used to compare with cards. For example, the priority of the card.
 */
+ (AACCardFilter* __nonnull)filterByCardsGreaterThanOrEqualTo:(AACCardFilterValue* __nonnull)value NS_SWIFT_NAME(filter(byCardsGreaterThanOrEqualTo:));

/**
 Generates a card list filter that is restricted to the card with the value less than the filter.
 
 `Less than` operator works only on number or date values.
 
 @param value The value used to compare with cards. For example, the priority of the card.
 */
+ (AACCardFilter* __nonnull)filterByCardsLessThan:(AACCardFilterValue* __nonnull)value NS_SWIFT_NAME(filter(byCardsLessThan:));

/**
 Generates a card list filter that is restricted to the card with the value less than or equal to the filter.
 
 `Less than or equal to` operator works only on number or date values.
 
 @param value The value used to compare with cards. For example, the priority of the card.
 */
+ (AACCardFilter* __nonnull)filterByCardsLessThanOrEqualTo:(AACCardFilterValue* __nonnull)value NS_SWIFT_NAME(filter(byCardsLessThanOrEqualTo:));

/**
 Generates a card list filter that is restricted to the card with the value equal to one of the filter values.
 
 `In` operator works only on number, date or string values.
 
 Note: values must be of the same type. For example, they must all be priority values. Otherwise an exception will be raised.
 
 @param values The values for the card to match within. For example, the priority values of cards.
 */
+ (AACCardFilter* __nonnull)filterByCardsIn:(NSArray<AACCardFilterValue*>* __nonnull)values NS_SWIFT_NAME(filter(byCardsIn:));

/**
 Generates a card list filter that is restricted to the card with the value equal to NONE of the filter values.
 
 `Not in` operator works only on number, date or string values.
 
 Note: values must be of the same type. For example, they must all be priority values. Otherwise an exception will be raised.
 
 @param values The values for the card to match within. For example, the priority values of cards.
 */
+ (AACCardFilter* __nonnull)filterByCardsNotIn:(NSArray<AACCardFilterValue*>* __nonnull)values NS_SWIFT_NAME(filter(byCardsNotIn:));

/**
 Generates a card list filter that is restricted to the card with the values within a closed interval, defined by the start and end value.
 
 `Between` operator works only on number or date values.
 
 Note: Values defining the interval must be of the same type. For example, they must be both priority values. Otherwise an exception will be raised.
 
 @param start The start of the interval, included when checking.
 @param end The end of the interval, included when checking.
 */
+ (AACCardFilter* __nonnull)filterByCardsBetweenStartValue:(AACCardFilterValue* __nonnull)start endValue:(AACCardFilterValue* __nonnull)end
NS_SWIFT_NAME(filter(byCardsBetweenStartValue:endValue:));

/**
 Generates a card list filter that is restricted to the card whose value contains the filter value.
 
 `Includes` operator works only on string values.
 
 @param value The value that the card's value must contain. For example, part of a card template name.
 */
+ (AACCardFilter* __nonnull)filterByCardsIncluding:(AACCardFilterValue* __nonnull)value NS_SWIFT_NAME(filter(byCardsIncluding:));

/**
 Generates a card list filter that is restricted to the card whose value does not contain the filter value.
 A card without the property never matches.
 
 `Excludes` operator works only on string values.
 
 @param value The value that the card's value must not contain. For example, part of a card template name.
 */
+ (AACCardFilter* __nonnull)filterByCardsExcluding:(AACCardFilterValue* __nonnull)value NS_SWIFT_NAME(filter(byCardsExcluding:));

/**
 Generates a card list filter that is restricted to the card whose value is contained in the filter value.
 
 `Is included in` operator works only on string values.
 
 @param value The value that must contain the card's value. For example, the path of the current page.
 */
+ (AACCardFilter* __nonnull)filterByCardsIncludedIn:(AACCardFilterValue* __nonnull)value NS_SWIFT_NAME(filter(byCardsIncludedIn:));

/**
 Generates a card list filter that is restricted to the card whose value is not contained in the filter value.
 A card without the property never matches.
 
 `Is excluded from` operator works only on string values.
 
 @param value The value that must not contain the card's value. For example, the path of the current page.
 */
+ (AACCardFilter* __nonnull)filterByCardsExcludedFrom:(AACCardFilterValue* __nonnull)value NS_SWIFT_NAME(filter(byCardsExcludedFrom:));

@end
