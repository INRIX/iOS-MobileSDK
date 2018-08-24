Pod::Spec.new do |s|

  s.name         = 'INRIX-iOS-ClientLibrary'
  s.version      = '9.0.0'
  s.summary      = 'Provides access to data from INRIX web services.'

  s.description  = <<-DESC
                   INRIX Client Library (SDK) for iOS.
                   * Includes caches and networking objects for getting and using INRIX
                   data in an app.  The client library provides access to analytics
                   incidents, location, PHS data collection and reporting, network
                   reachability, routes, traffic quality and traffic tiles.
                   DESC

  s.homepage     = 'https://github.com/INRIX/iOS-MobileSDK'
  s.license      = { :type => 'Proprietary', :file => 'SDKLicense.txt' }
  s.author       = { 'INRIX Mobile Feedback' => 'mobilefeedback@inrix.com' }

  s.platform     = :ios
  s.ios.deployment_target = '8.0'

  s.source = { :git => 'https://github.com/INRIX/iOS-MobileSDK.git', :tag => "9.0.0" }

  s.xcconfig = { "GCC_PREPROCESSOR_DEFINITIONS" => '$(inherited) IXCL_FRAMEWORK=1' }

  s.ios.vendored_frameworks = 'IXClientLibrary.framework'
  s.preserve_paths          = 'IXClientLibrary.framework'
  s.source_files			= 'IXClientLibrary.framework/Headers/*.h'
  s.public_header_files     = 'IXClientLibrary.framework/Headers/*.h'

  s.frameworks   = 'CoreLocation', 'UIKit', 'CoreData'
  s.libraries    = 'sqlite3'

end
