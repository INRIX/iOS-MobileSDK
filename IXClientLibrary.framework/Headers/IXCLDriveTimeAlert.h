/*
 * @header IXCLDriveTimeAlert.h
 * @abstract Model class representing drive time alert data.
 * @author Mikhail Shalamitski
 * @created 7/5/18
 * @copyright Copyright (c) 2018 INRIX, Inc.
 *
 *  INRIX is a registered trademark of INRIX, Inc.  Any copyright, patent and
 *  trademark notice(s) contained herein or in related code, files or
 *  documentation shall not be altered and shall be included in all copies and
 *  substantial portions of the software. This software is "Source Code".
 */

#import <Foundation/Foundation.h>

@import CoreLocation;

/*!
 * @abstract Type of drive alert.
 * @discussion
 *      Describes types of drive time alerts, e.g. incidents, dangerous slowdowns etc.
 *
 * @constant IXCLDriveTimeAlertTypeInvalid              Represents Invalid drive-time alert type.
 * @constant IXCLDriveTimeAlertTypeIncident             Represents Incident on road ahead.
 * @constant IXCLDriveTimeAlertTypeParking              Represents Nearby parking ahead.
 * @constant IXCLDriveTimeAlertTypeDangerousSlowdown    Represents Dangerous Slowdown on road ahead.
 */

typedef NS_ENUM(NSUInteger, IXCLDriveTimeAlertType) {
    IXCLDriveTimeAlertTypeInvalid = 0,
    IXCLDriveTimeAlertTypeIncident,
    IXCLDriveTimeAlertTypeParking,
    IXCLDriveTimeAlertTypeDangerousSlowdown
};

/*!
 * @abstract
 *      Function-validator for IXCLDriveTimeAlertType variables.
 *      Checks if provided alert type is of known types.
 *
 * @param type Drive Alert type to validate.
 * @return YES if alert type is one of known types, NO otherwise.
 */
BOOL IXCLDriveTimeAlertTypeIsValid(IXCLDriveTimeAlertType type);

/*!
 * @abstract
 *      Function getting name for different IXCLDriveTimeAlertType values.
 *
 * @param type Drive Alert type to get name for.
 * @return String representing drive time alert type name.
 */
NSString* IXCLDriveTimeAlertTypeGetName(IXCLDriveTimeAlertType type);


NS_ASSUME_NONNULL_BEGIN

/*!
 * @class IXCLDriveTimeAlert
 * @abstract Model class representing drive time alert data.
 */
@interface IXCLDriveTimeAlert : NSObject <NSCopying>

/*!
 * @abstract Drive-time alert type.
 */
@property (assign, nonatomic, readonly) IXCLDriveTimeAlertType type;

/*!
 * @abstract
 *      Associated model object. Type of object may vary depending on alert type.
 */
@property (strong, nonatomic, readonly, nonnull) id object;

/*!
 * @abstract
 *      Geographic coordinate corresponding to the alert.
 */
@property (assign, nonatomic, readonly) CLLocationCoordinate2D coordinate;

/*!
 * @abstract
 *      Failable initializer of the IXCLDriveTimeAlert type with the specified alert type
 *      and corresponding model object.
 *
 * @param type
 *      Alert type.
 * @param object
 *      Associated model object.
 * @param coordinate
 *      Coordinate of the alert geographic location.
 *
 * @return
 *      Instance of the IXCLDriveTimeAlert class. Nil if alert type is invalid.
 */
- (nullable instancetype) initWithType: (IXCLDriveTimeAlertType)type
                                object: (id)object
                            coordinate: (CLLocationCoordinate2D)coordinate NS_DESIGNATED_INITIALIZER;


@end

NS_ASSUME_NONNULL_END
