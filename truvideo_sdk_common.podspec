Pod::Spec.new do |s|
  s.name             = 'truvideo_sdk_common'
  s.version          = '0.0.4'
  s.summary          = 'Truvideo Sdk Common'
  s.description      = 'Truvideo Sdk Common description'
  s.homepage         = 'https://github.com/Truvideo/truvideo-sdk-ios-common-pod'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Kenility' => 'federico.amura@kenility.com' }
  spec.source            = { :http => 'https://github.com/Truvideo/truvideo-sdk-ios-common-pod/releases/download/0.0.4/shared.xcframework.zip' }
  spec.ios.vendored_frameworks = 'shared.xcframework'
end
