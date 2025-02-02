//
//  BDZoneEntryEvent.h
//  BDPointSDK
//
//  Created by Duncan Lau on 3/8/20.
//  Copyright © 2020 BlueDot. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class BDFenceInfo;
@class BDZoneInfo;
@class BDLocationInfo;

/**
 * Contains information about a Zone Entry Event
 *
 * A <b>BDZoneEntryEvent</b> objects will be delivered to your application's `BDPGeoTriggeringEventDelegate` when Geotriggering event occurs (for e.g. fence entry and exit events).
 *
*/
@interface BDZoneEntryEvent : NSObject

/**
 * The Fence that was entered into
*/
@property (copy,readonly) BDFenceInfo * fence;

/**
 * The Zone that was entered into
*/
@property (copy,readonly) BDZoneInfo * zone;

/**
 * Location of the Zone Entry event
*/
@property (copy,readonly) BDLocationInfo * location;

/**
 * Indicates whether the Zone is tracking for exit event
*/
@property (readonly) BOOL isExitEnabled;

/**
 * Custom data for the entry event
 */
@property (readonly, nullable) NSDictionary* customData;

@end

NS_ASSUME_NONNULL_END
