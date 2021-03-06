/*
 * @header IXCLEmailOptions.h
 * @abstract Represents request parameters for managing user account.
 * @author Gaurav Agarwal
 * @updated 11-26-2014
 * @copyright Copyright (c) 2015 INRIX, Inc.
 *
 *  INRIX is a registered trademark of INRIX, Inc.  Any copyright, patent and
 *  trademark notice(s) contained herein or in related code, files or
 *  documentation shall not be altered and shall be included in all copies and
 *  substantial portions of the software. This software is "Source Code".
 *  Refer to the License.pdf file for your rights to use this software.
 */

#import "IXCLBaseOptions.h"


//-----------------------------------------------------------------------------
#pragma mark - Class Declaration

/*!
 * @class IXCLEmailOptions
 * @abstract Represents request parameters for managing user account.
 */
@interface IXCLEmailOptions : IXCLBaseOptions <NSCopying>

//-----------------------------------------------------------------------------
#pragma mark - Properties

/*!
 * @abstract User's email address.
 */
@property (nonatomic, strong, readwrite) NSString * email;

//-----------------------------------------------------------------------------
#pragma mark - Methods

/*!
 * @abstract
 *      Initialize the IXCLEmailOptions with the specified email.
 *
 * @param email
 *      User's email address.
 *
 * @return
 *      Instance of the IXCLEmailOptions class.
 */
- (instancetype) initWithEmail: (NSString *) email;

@end
