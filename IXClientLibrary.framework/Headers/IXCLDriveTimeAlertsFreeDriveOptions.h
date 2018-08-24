/*
 * @header IXCLDriveTimeAlertsFreeDriveOptions.h
 * @abstract Drive time alerts options for free drive tracking.
 * @author Mikhail Shalamitski
 * @created 7/18/18
 * @copyright Copyright (c) 2018 INRIX, Inc.
 *
 *  INRIX is a registered trademark of INRIX, Inc.  Any copyright, patent and
 *  trademark notice(s) contained herein or in related code, files or
 *  documentation shall not be altered and shall be included in all copies and
 *  substantial portions of the software. This software is "Source Code".
 */

#import "IXCLDriveTimeAlertsOptions.h"

#pragma mark - Global Exports

/*!
 * @abstract
 *      Value which indicates that the default value stored in the
 *      searchRadius property should be used.
 */
FOUNDATION_EXPORT CLLocationDistance const IXCLDriveTimeAlertsFreeDriveDefaultSearchInterval;

/*!
 * @abstract
 *      Indicates minimum distance ahead used in alerts check.
 *      Value is 1 mile.
 */
FOUNDATION_EXPORT CLLocationDistance const IXCLDriveTimeAlertsFreeDriveDefaultMinLookupDistance;

/*!
 * @abstract
 *      Indicates maximum distance ahead used in alerts check.
 *      Value is 3 mile.
 */
FOUNDATION_EXPORT CLLocationDistance const IXCLDriveTimeAlertsFreeDriveDefaultMaxLookupDistance;


//-----------------------------------------------------------------------------
#pragma mark - Class Declaration

@interface IXCLDriveTimeAlertsFreeDriveOptions : IXCLDriveTimeAlertsOptions

/*!
 * @abstract
 *      Filter for both cached incidents and requested incidents from the
 *      server. Defaults to IXCLIncidentsFilterIncludeAll.
 */
@property (nonatomic, assign, readwrite) IXCLIncidentsFilter incidentsFilter;

/*!
 * @abstract
 *      Specifies if dangerous slowdown alerts should be sent.
 *      Defaults to YES.
 */
@property (nonatomic, assign, readwrite) BOOL includeDangerousSlowdowns;

/*!
 * @abstract
 *      Specifies if parking alerts should be sent.
 *      Defaults to YES.
 */
@property (nonatomic, assign, readwrite) BOOL includeParking;

/*!
 * @abstract
 *      Search radius for drive time alerts. Alerts will be loaded for circular
 *      region with center in current location and search radius as region radius.
 *      Defaults to IXCLDriveTimeAlertsFreeDriveDefaultSearchInterval.
 */
@property (nonatomic, assign, readwrite) CLLocationDistance searchRadius;

/*!
 * @abstract
 *      Maximum radius for drive time alerts. Check radius determined
 *      dynamically using current speed and speed factor.
 *      This setting serves as a bottom cap for calculated value.
 *      Defaults to IXCLDriveTimeAlertsFreeDriveDefaultMinLookupDistance.
 */
@property (nonatomic, assign, readwrite) CLLocationDistance maximumLookupDistance;

/*!
 * @abstract
 *      Maximum radius for drive time alerts. Check radius determined
 *      dynamically using current speed and speed factor.
 *      This setting serves as a top cap for calculated value.
 *      Defaults to IXCLDriveTimeAlertsFreeDriveDefaultMaxLookupDistance.
 */
@property (nonatomic, assign, readwrite) CLLocationDistance minimumLookupDistance;

@end
