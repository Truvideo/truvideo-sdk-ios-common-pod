Pod::Spec.new do |s|
  s.name                    = 'truvideo_sdk_common'
  s.version                 = '0.0.17'
  s.summary                 = 'Truvideo Sdk Common'
  s.description             = 'Truvideo Sdk Common description'
  s.homepage                = 'https://github.com/Truvideo/truvideo-sdk-ios-common-pod'
  s.license                 = { :type => 'MIT', :text => 'See www.nickarner.com' }
  s.author                  = { 'Kenility' => 'federico.amura@kenility.com' }
  s.source                  = { :http => 'https://github.com/Truvideo/truvideo-sdk-ios-common-pod/releases/download/0.0.17/shared.xcframework.zip' }
  s.ios.deployment_target   = '15.2'
  s.ios.vendored_frameworks = 'shared.xcframework'
end
