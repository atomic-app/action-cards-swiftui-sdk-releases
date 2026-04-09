//
// AACCardNodeCustomIcon.h
// ActionCardsSDK
// Copyright © 2024 Atomic.io Limited. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Represents an optional icon rendered next to the supported component.
 */
@interface AACCardNodeCustomIcon : NSObject

/**
 The URL of an optional image icon to render next to the supported component.
 */
@property (nonatomic, readonly, nullable) NSURL* iconUrl;

/**
 The name of an optional FontAwesome icon to render next to the supported component. If both `iconUrl` and `fontAwesomeIconName` are available, this property has no effect on cards rendered in Atomic SDK containers.
 */
@property (nonatomic, readonly, nullable) NSString* fontAwesomeIconName;

/**
 The optional alternative text of the icon defined in Workbench.
 */
@property (nonatomic, readonly, nullable) NSString* alternativeText;

@end
