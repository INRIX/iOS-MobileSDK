/*
 * @header IXCLRouteDriveTimeAlertsOptions.h
 * @abstract Drive time alerts options for route tracking.
 * @author Mikhail Shalamitski
 * @created 7/15/18
 * @copyright Copyright (c) 2018 INRIX, Inc.
 *
 *  INRIX is a registered trademark of INRIX, Inc.  Any copyright, patent and
 *  trademark notice(s) contained herein or in related code, files or
 *  documentation shall not be altered and shall be included in all copies and
 *  substantial portions of the software. This software is "Source Code".
 */

#import "IXCLDriveTimeAlertsOptions.h"

//-----------------------------------------------------------------------------
#pragma mark - Class Declaration

/*!
 * @class IXCLRouteDriveTimeAlertsOptions
 * @abstract Represents parameters for creating drive time alerts for route tracking.
 */
@interface IXCLDriveTimeAlertsRouteOptions : IXCLDriveTimeAlertsOptions

//-----------------------------------------------------------------------------
#pragma mark - Properties

/*!
 * @abstract Route on which drive time alerts need to be tracked.
 */
@property (nonatomic, strong, readwrite) IXCLRoute * route;

/*!
 * @abstract
 *      Route progression status tracking notification block.
 * @discussion
 *      This notification block will return the route tracking status.
 */
@property (nonatomic, copy, readwrite) IXCLRouteTrackingStatusNotificationBlock routeTrackingStatusNotificationBlock;

@end
