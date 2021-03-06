/*
 * @header IXClientLibrary.h
 * @abstract Top-level header file for including support for the IXCL framework.
 * @discussion
 *      The Client Library provides an API to a framework that manages caches
 *      and networking objects for getting and using INRIX data in an app.  It
 *      also provides access to analytics incidents, location, PHS data
 *      collection and reporting, network reachability, routes, traffic quality
 *      and traffic tiles.
 * @author Gaurav Agarwal
 * @updated 12-27-2013
 * @copyright Copyright (c) 2009-2015 INRIX, Inc.
 *
 *  INRIX is a registered trademark of INRIX, Inc.  Any copyright, patent and
 *  trademark notice(s) contained herein or in related code, files or
 *  documentation shall not be altered and shall be included in all copies and
 *  substantial portions of the software. This software is "Source Code".
 *  Refer to the License.pdf file for your rights to use this software.
 */

#import "CLLocation+IXCL.h"
#import "CLPlacemark+IXCL.h"
#import "InrixCore.h"
#import "IXCLAddress.h"
#import "IXCLAggregateMapPoint.h"
#import "IXCLAuthController.h"
#import "IXCLAuthResponse.h"
#import "IXCLBase64.h"
#import "IXCLBaseController.h"
#import "IXCLBaseControllerWithCache.h"
#import "IXCLBaseOptions.h"
#import "IXCLBaseRouteTrackingController.h"
#import "IXCLBaseURLRequestBuilder.h"
#import "IXCLBoundingBox.h"
#import "IXCLCacheController.h"
#import "IXCLCacheEntry.h"
#import "IXCLCameraImageOptions.h"
#import "IXCLCameraLicense.h"
#import "IXCLCamerasController.h"
#import "IXCLCamerasInBoxOptions.h"
#import "IXCLCamerasInRadiusOptions.h"
#import "IXCLCamerasOnRouteOptions.h"
#import "IXCLCameraStatus.h"
#import "IXCLChangePasswordOptions.h"
#import "IXCLContact.h"
#import "IXCLContact.h"
#import "IXCLCore.h"
#import "IXCLCoreOptions.h"
#import "IXCLCoreRequest.h"
#import "IXCLCoreResponse.h"
#import "IXCLCurrentLocationManager.h"
#import "IXCLDangerousSlowdown.h"
#import "IXCLDangerousSlowdownBaseOptions.h"
#import "IXCLDangerousSlowdownsController.h"
#import "IXCLDangerousSlowdownsInBoxOptions.h"
#import "IXCLDangerousSlowdownsInRadiusOptions.h"
#import "IXCLDriveTimeAlert.h"
#import "IXCLDriveTimeAlertsController.h"
#import "IXCLDriveTimeAlertsFreeDriveOptions.h"
#import "IXCLDriveTimeAlertsOptions.h"
#import "IXCLDriveTimeAlertsRouteOptions.h"
#import "IXCLEmailOptions.h"
#import "IXCLErrors.h"
#import "IXCLEvents.h"
#import "IXCLFuelProduct.h"
#import "IXCLGasStation.h"
#import "IXCLGasStationBaseOptions.h"
#import "IXCLGasStationBrand+String.h"
#import "IXCLGasStationBrand.h"
#import "IXCLGasStationBrandType.h"
#import "IXCLGasStationsController.h"
#import "IXCLGasStationsInBoxOptions.h"
#import "IXCLGasStationsInRadiusOptions.h"
#import "IXCLGasStationsOnRouteOptions.h"
#import "IXCLGeocodeController.h"
#import "IXCLGeocodeRequest.h"
#import "IXCLGetSavedTripsResponse.h"
#import "IXCLGetUserPropertiesResponse.h"
#import "IXCLIncident.h"
#import "IXCLIncidentBaseOptions.h"
#import "IXCLIncidentCommunity.h"
#import "IXCLIncidentContributor.h"
#import "IXCLIncidentDelayImpact.h"
#import "IXCLIncidentDeleteOptions.h"
#import "IXCLIncidentDescription.h"
#import "IXCLIncidentParameterizedDescription.h"
#import "IXCLIncidentReportOptions.h"
#import "IXCLIncidentReviewOptions.h"
#import "IXCLIncidentsController.h"
#import "IXCLIncidentsInBoxOptions.h"
#import "IXCLIncidentsInRadiusOptions.h"
#import "IXCLItinerary.h"
#import "IXCLItineraryController.h"
#import "IXCLItineraryEntry.h"
#import "IXCLItineraryOptions.h"
#import "IXCLLearnedLocation.h"
#import "IXCLLearnedLocationUpdateOptions.h"
#import "IXCLLocation.h"
#import "IXCLLocationBaseModifyOptions.h"
#import "IXCLLocationCreateOptions.h"
#import "IXCLLocationsController.h"
#import "IXCLLocationsDeleteOptions.h"
#import "IXCLLocationsReorderOptions.h"
#import "IXCLLocationsRequestOptions.h"
#import "IXCLLocationUpdateOptions.h"
#import "IXCLLogger.h"
#import "IXCLLogging.h"
#import "IXCLMapPoint.h"
#import "IXCLMotionActivityManager.h"
#import "IXCLNetworkReachabilityController.h"
#import "IXCLOAuthInfo.h"
#import "IXCLParkingAmenity.h"
#import "IXCLParkingBlock.h"
#import "IXCLParkingBlockAmenity.h"
#import "IXCLParkingBlockPaymentMethod.h"
#import "IXCLParkingBlockPricingPayment.h"
#import "IXCLParkingBlockSection.h"
#import "IXCLParkingCalculatedRate.h"
#import "IXCLParkingLot.h"
#import "IXCLParkingLotBaseOptions.h"
#import "IXCLParkingLotByIdOptions.h"
#import "IXCLParkingLotCurrentCapacity.h"
#import "IXCLParkingLotGate.h"
#import "IXCLParkingLotOpeningHours.h"
#import "IXCLParkingLotPhoto.h"
#import "IXCLParkingLotPricingPayment.h"
#import "IXCLParkingLotReview.h"
#import "IXCLParkingLotsController.h"
#import "IXCLParkingLotsInBoxOptions.h"
#import "IXCLParkingLotsInRadiusOptions.h"
#import "IXCLParkingObjectProtocol.h"
#import "IXCLParkingStructuredRate.h"
#import "IXCLPhoto.h"
#import "IXCLPointQuadTree.h"
#import "IXCLPointQuadTreeNode.h"
#import "IXCLProductsController.h"
#import "IXCLPushToken.h"
#import "IXCLRequestInBoxOptions.h"
#import "IXCLRequestInRadiusOptions.h"
#import "IXCLResetPasswordOptions.h"
#import "IXCLRoad.h"
#import "IXCLRoute.h"
#import "IXCLRoutePoint.h"
#import "IXCLRoutePointQuadTreeItem.h"
#import "IXCLRoutesBaseOptions.h"
#import "IXCLRoutesCollection.h"
#import "IXCLRoutesController.h"
#import "IXCLRoutesFromPointsOptions+RoutesCollection.h"
#import "IXCLRoutesFromPointsOptions.h"
#import "IXCLRoutesResponse.h"
#import "IXCLRouteSummary.h"
#import "IXCLRouteTrackingController.h"
#import "IXCLRouteTrackingSearch.h"
#import "IXCLRouteTravelTimes.h"
#import "IXCLRouteTravelTimesController.h"
#import "IXCLRouteUpdateController.h"
#import "IXCLSavedLocation.h"
#import "IXCLSavedTrip.h"
#import "IXCLSavedTripOptions.h"
#import "IXCLSearchAutocompleteMatch.h"
#import "IXCLSearchAutocompleteMatchedString.h"
#import "IXCLSearchAutocompleteOptions.h"
#import "IXCLSearchAutocompleteTerm.h"
#import "IXCLSearchController.h"
#import "IXCLSearchOptions.h"
#import "IXCLSearchResult.h"
#import "IXCLSegment.h"
#import "IXCLServerCamera.h"
#import "IXCLSharingAddress.h"
#import "IXCLSingleGasStationOptions.h"
#import "IXCLSocialProviderProtocol.h"
#import "IXCLSocialProviderService.h"
#import "IXCLSocialProviderServiceConfig.h"
#import "IXCLSpeedBucket.h"
#import "IXCLSpeedLimitController.h"
#import "IXCLSpeedLimitOptions.h"
#import "IXCLSphericalMercatorProjection.h"
#import "IXCLTimer.h"
#import "IXCLTrafficColorController.h"
#import "IXCLTrafficQuality.h"
#import "IXCLTrafficQualityController.h"
#import "IXCLTrafficQualityOptions.h"
#import "IXCLTrafficTileOptions.h"
#import "IXCLTrafficTilesController.h"
#import "IXCLTravelTime.h"
#import "IXCLTravelTimesOptions.h"
#import "IXCLTrip.h"
#import "IXCLTripController.h"
#import "IXCLTripPoint.h"
#import "IXCLTripSchedule.h"
#import "IXCLTripScheduleDate.h"
#import "IXCLTripScheduleNotification.h"
#import "IXCLUpdatedRouteOptions.h"
#import "IXCLUpdateUserOptions.h"
#import "IXCLUserAccount.h"
#import "IXCLUserAccountOptions.h"
#import "IXCLUserAuthOptions.h"
#import "IXCLUserPropertiesController.h"
#import "IXCLUserPropertiesOptions.h"
#import "IXCLUserToken.h"
#import "IXCLVehicleStateMeasurement.h"
#import "IXCLWaypoint.h"
#import "IXCLXDIncident.h"
#import "IXCLXDIncidentDetailsOptions.h"
#import "IXCLXDIncidentMessage.h"
#import "IXCLXDIncidentParameterizedDescription.h"
#import "IXCLXDIncidentReoccurringSchedule.h"
#import "IXCLXDIncidentsInBoxOptions.h"
#import "IXCLXDIncidentsInRadiusOptions.h"
#import "IXCLXMLParserDelegate.h"
#import "NSDate+IXCL.h"
#import "NSDateFormatter+IXCL.h"
#import "NSError+IXCL.h"
#import "NSException+IXCL.h"
#import "NSObject+IXCL.h"
#import "NSString+IXCL.h"
#import "UIDevice+IXCL.h"
