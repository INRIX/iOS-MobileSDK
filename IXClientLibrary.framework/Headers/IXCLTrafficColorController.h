/*
 * @header IXCLTrafficColorController.h
 * @abstract Controller for reporting wrong traffic color.
 * @author Mikhail Shalamitski
 * @updated 04-16-2018
 * @copyright Copyright (c) 2015 INRIX, Inc.
 *
 *  INRIX is a registered trademark of INRIX, Inc.  Any copyright, patent and
 *  trademark notice(s) contained herein or in related code, files or
 *  documentation shall not be altered and shall be included in all copies and
 *  substantial portions of the software. This software is "Source Code".
 *  Refer to the License.pdf file for your rights to use this software.
 */

#import "IXCLBaseController.h"

//-----------------------------------------------------------------------------
#pragma mark - Protocol Declaration

/*!
 * @protocol IXCLTrafficColorControllerProtocol
 * @abstract
 *      Protocol definition for the Traffic Color Controller
 */
@protocol IXCLTrafficColorControllerProtocol<NSObject>

//-----------------------------------------------------------------------------
#pragma mark - Methods

/*!
 * @abstract Notifies server about wrong traffic color for current location.
 * @param completion Block that returns result of the report, and any errors.
 */
- (void) reportWrongTrafficColorWithCompletion:(void(^)(BOOL success, NSError *error))completion;

@end


@interface IXCLTrafficColorController : IXCLBaseController<IXCLTrafficColorControllerProtocol>

@end
