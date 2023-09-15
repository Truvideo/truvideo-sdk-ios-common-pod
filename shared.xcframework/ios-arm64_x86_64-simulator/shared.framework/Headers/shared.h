#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedTruvideoSdk, SharedTruvideoSdkConfigurationImpl, SharedTruvideoSdkLogSeverity, SharedKotlinThrowable, SharedKotlinArray<T>, SharedKotlinException, SharedTruvideoSdkException, SharedTruvideoSdkSettings, SharedTruvideoSdkAuthentication, SharedTruvideoSdkAuthenticationStatus, SharedTruvideoSdkHttpResponse, SharedTruvideoSdkInternalLogModule, SharedApplicationForegroundCheckerUtil, SharedFileUtil, SharedSettingsFactory, SharedTruvideoSdkAuthenticationCompanion, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedTruvideoSdkHttpErrorResponseCompanion, SharedTruvideoSdkHttpErrorResponse, SharedTruvideoSdkLogCompanion, SharedTruvideoSdkLog, SharedTruvideoSdkSettingsCompanion, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedKotlinx_serialization_coreSerializersModule, SharedKotlinx_serialization_coreSerialKind, SharedKotlinNothing;

@protocol SharedTruvideoSdkAuthInterface, SharedTruvideoSdkHttpInterface, SharedKotlinx_coroutines_coreMutableStateFlow, SharedTruvideoSdkLogInterface, SharedTruvideoSdkSettingInterface, SharedTruvideoSdkConfigurationInterface, SharedMultiplatform_settingsSettingsFactory, SharedKotlinx_serialization_coreKSerializer, SharedKotlinComparable, SharedKotlinx_coroutines_coreFlowCollector, SharedKotlinx_coroutines_coreFlow, SharedKotlinx_coroutines_coreSharedFlow, SharedKotlinx_coroutines_coreStateFlow, SharedKotlinx_coroutines_coreMutableSharedFlow, SharedKotlinIterator, SharedMultiplatform_settingsSettings, SharedKotlinx_serialization_coreEncoder, SharedKotlinx_serialization_coreSerialDescriptor, SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDecoder, SharedKotlinx_serialization_coreDeserializationStrategy, SharedKotlinx_serialization_coreCompositeEncoder, SharedKotlinAnnotation, SharedKotlinx_serialization_coreCompositeDecoder, SharedKotlinx_serialization_coreSerializersModuleCollector, SharedKotlinKClass, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdk")))
@interface SharedTruvideoSdk : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)truvideoSdk __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdk *shared __attribute__((swift_name("shared")));
- (void)doInitAndroidContext:(id)context isCore:(BOOL)isCore __attribute__((swift_name("doInitAndroid(context:isCore:)")));
- (void)doInitIOSIsCore:(BOOL)isCore __attribute__((swift_name("doInitIOS(isCore:)")));
@property (readonly) id<SharedTruvideoSdkAuthInterface> auth __attribute__((swift_name("auth")));
@property (readonly) SharedTruvideoSdkConfigurationImpl *config __attribute__((swift_name("config")));
@property (readonly) id<SharedTruvideoSdkHttpInterface> http __attribute__((swift_name("http")));
@property SharedTruvideoSdkLogSeverity *internalLogSeverityLevel __attribute__((swift_name("internalLogSeverityLevel")));
@property (readonly) id<SharedKotlinx_coroutines_coreMutableStateFlow> internalLogStream __attribute__((swift_name("internalLogStream")));
@property BOOL internalLogStreamEnabled __attribute__((swift_name("internalLogStreamEnabled")));
@property (readonly) id<SharedTruvideoSdkLogInterface> log __attribute__((swift_name("log")));
@property (readonly) id<SharedTruvideoSdkSettingInterface> settings __attribute__((swift_name("settings")));
@end

__attribute__((swift_name("TruvideoSdkConfigurationInterface")))
@protocol SharedTruvideoSdkConfigurationInterface
@required
- (void)doInitAndroidContext:(id)context __attribute__((swift_name("doInitAndroid(context:)")));
@property id androidApp __attribute__((swift_name("androidApp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkConfigurationImpl")))
@interface SharedTruvideoSdkConfigurationImpl : SharedBase <SharedTruvideoSdkConfigurationInterface>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)doInitAndroidContext:(id)context __attribute__((swift_name("doInitAndroid(context:)")));
@property id androidApp __attribute__((swift_name("androidApp")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("TruvideoSdkException")))
@interface SharedTruvideoSdkException : SharedKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkAuthenticationRequiredException")))
@interface SharedTruvideoSdkAuthenticationRequiredException : SharedTruvideoSdkException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkExpiredTokenException")))
@interface SharedTruvideoSdkExpiredTokenException : SharedTruvideoSdkException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("TruvideoSdkApiCallsInterface")))
@protocol SharedTruvideoSdkApiCallsInterface
@required

/**
 * @note This method converts instances of TruvideoSdkException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSettingsDeviceID:(NSString *)deviceID accessToken:(NSString *)accessToken completionHandler:(void (^)(SharedTruvideoSdkSettings * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getSettings(deviceID:accessToken:completionHandler:)")));

/**
 * @note This method converts instances of TruvideoSdkException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshTokenApiKey:(NSString *)apiKey refreshToken:(NSString *)refreshToken deviceID:(NSString *)deviceID completionHandler:(void (^)(SharedTruvideoSdkAuthentication * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("refreshToken(apiKey:refreshToken:deviceID:completionHandler:)")));

/**
 * @note This method converts instances of TruvideoSdkException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)registerDeviceApiKey:(NSString *)apiKey payload:(NSString *)payload signature:(NSString *)signature deviceID:(NSString * _Nullable)deviceID completionHandler:(void (^)(SharedTruvideoSdkAuthentication * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("registerDevice(apiKey:payload:signature:deviceID:completionHandler:)")));
@end

__attribute__((swift_name("TruvideoSdkAuthInterface")))
@protocol SharedTruvideoSdkAuthInterface
@required

/**
 * @note This method converts instances of TruvideoSdkException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)authenticateApiKey:(NSString *)apiKey payload:(NSString *)payload signature:(NSString *)signature forceRefresh:(BOOL)forceRefresh completionHandler:(void (^)(SharedTruvideoSdkAuthentication * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("authenticate(apiKey:payload:signature:forceRefresh:completionHandler:)")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)doInit __attribute__((swift_name("doInit()")));

/**
 * @note This method converts instances of TruvideoSdkAuthenticationRequiredException, TruvideoSdkExpiredTokenException, TruvideoSdkException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshAuthenticationForceRefresh:(BOOL)forceRefresh completionHandler:(void (^)(SharedTruvideoSdkAuthentication * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("refreshAuthentication(forceRefresh:completionHandler:)")));
- (BOOL)shouldCallAuthenticateApiKey:(NSString *)apiKey __attribute__((swift_name("shouldCallAuthenticate(apiKey:)")));
@property (readonly) SharedTruvideoSdkAuthentication * _Nullable authentication __attribute__((swift_name("authentication")));
@property (readonly) id<SharedKotlinx_coroutines_coreMutableStateFlow> authenticationStream __attribute__((swift_name("authenticationStream")));
@property (readonly) BOOL isAuthenticated __attribute__((swift_name("isAuthenticated")));
@property (readonly) id<SharedKotlinx_coroutines_coreMutableStateFlow> isAuthenticatedStream __attribute__((swift_name("isAuthenticatedStream")));
@property (readonly) BOOL isAuthenticationExpired __attribute__((swift_name("isAuthenticationExpired")));
@property (readonly) SharedTruvideoSdkSettings * _Nullable settings __attribute__((swift_name("settings")));
@property (readonly) id<SharedKotlinx_coroutines_coreMutableStateFlow> settingsStream __attribute__((swift_name("settingsStream")));
@property (readonly) SharedTruvideoSdkAuthenticationStatus *status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("TruvideoSdkHttpInterface")))
@protocol SharedTruvideoSdkHttpInterface
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUrl:(NSString *)url headers:(NSDictionary<NSString *, NSString *> *)headers retry:(int32_t)retry completionHandler:(void (^)(SharedTruvideoSdkHttpResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("get(url:headers:retry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)headUrl:(NSString *)url retry:(int32_t)retry completionHandler:(void (^)(SharedTruvideoSdkHttpResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("head(url:retry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUrl:(NSString *)url headers:(NSDictionary<NSString *, NSString *> *)headers body:(id _Nullable)body retry:(int32_t)retry completionHandler:(void (^)(SharedTruvideoSdkHttpResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("post(url:headers:body:retry:completionHandler:)")));
@end

__attribute__((swift_name("TruvideoSdkInternalLogInterface")))
@protocol SharedTruvideoSdkInternalLogInterface
@required
- (void)dModule:(SharedTruvideoSdkInternalLogModule *)module message:(NSString *)message separatorVisible:(BOOL)separatorVisible __attribute__((swift_name("d(module:message:separatorVisible:)")));
- (void)eModule:(SharedTruvideoSdkInternalLogModule *)module message:(NSString *)message separatorVisible:(BOOL)separatorVisible __attribute__((swift_name("e(module:message:separatorVisible:)")));
- (void)iModule:(SharedTruvideoSdkInternalLogModule *)module message:(NSString *)message separatorVisible:(BOOL)separatorVisible __attribute__((swift_name("i(module:message:separatorVisible:)")));
- (BOOL)isModuleEnabledModule:(SharedTruvideoSdkInternalLogModule *)module __attribute__((swift_name("isModuleEnabled(module:)")));
- (void)printModule:(SharedTruvideoSdkInternalLogModule *)module message:(NSString *)message separatorVisible:(BOOL)separatorVisible severity:(SharedTruvideoSdkLogSeverity *)severity __attribute__((swift_name("print(module:message:separatorVisible:severity:)")));
- (void)setModuleEnabledModule:(SharedTruvideoSdkInternalLogModule *)module enabled:(BOOL)enabled __attribute__((swift_name("setModuleEnabled(module:enabled:)")));
- (void)vModule:(SharedTruvideoSdkInternalLogModule *)module message:(NSString *)message separatorVisible:(BOOL)separatorVisible __attribute__((swift_name("v(module:message:separatorVisible:)")));
- (void)wModule:(SharedTruvideoSdkInternalLogModule *)module message:(NSString *)message separatorVisible:(BOOL)separatorVisible __attribute__((swift_name("w(module:message:separatorVisible:)")));
@property BOOL printEnabled __attribute__((swift_name("printEnabled")));
@property SharedTruvideoSdkLogSeverity *severityLevel __attribute__((swift_name("severityLevel")));
@property (readonly) id<SharedKotlinx_coroutines_coreMutableStateFlow> stream __attribute__((swift_name("stream")));
@property BOOL streamEnabled __attribute__((swift_name("streamEnabled")));
@end

__attribute__((swift_name("TruvideoSdkLogInterface")))
@protocol SharedTruvideoSdkLogInterface
@required
- (void)clear __attribute__((swift_name("clear()")));
- (void)dTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("d(tag:message:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("e(tag:message:)")));
- (void)iTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("i(tag:message:)")));
- (void)doInitIsCore:(BOOL)isCore __attribute__((swift_name("doInit(isCore:)")));
- (void)printTag:(NSString *)tag message:(NSString *)message severity:(SharedTruvideoSdkLogSeverity *)severity __attribute__((swift_name("print(tag:message:severity:)")));
- (void)vTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("v(tag:message:)")));
- (void)wTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("w(tag:message:)")));
@property int64_t bufferFileSizeLimit __attribute__((swift_name("bufferFileSizeLimit")));
@property (readonly) NSString *directoryPath __attribute__((swift_name("directoryPath")));
@property (readonly) BOOL isSyncRunning __attribute__((swift_name("isSyncRunning")));
@property SharedTruvideoSdkLogSeverity *severityLevel __attribute__((swift_name("severityLevel")));
@property int64_t syncInterval __attribute__((swift_name("syncInterval")));
@end

__attribute__((swift_name("TruvideoSdkSettingInterface")))
@protocol SharedTruvideoSdkSettingInterface
@required
- (void)deleteKey:(NSString *)key __attribute__((swift_name("delete(key:)")));
- (BOOL)readBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("readBoolean(key:defaultValue:)")));
- (int32_t)readIntKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("readInt(key:defaultValue:)")));
- (int64_t)readLongKey:(NSString *)key defaultValue:(int64_t)defaultValue __attribute__((swift_name("readLong(key:defaultValue:)")));
- (NSString *)readStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("readString(key:defaultValue:)")));
- (void)storeBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("storeBoolean(key:value:)")));
- (void)storeIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("storeInt(key:value:)")));
- (void)storeLongKey:(NSString *)key value:(int64_t)value __attribute__((swift_name("storeLong(key:value:)")));
- (void)storeStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("storeString(key:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplicationForegroundCheckerUtil")))
@interface SharedApplicationForegroundCheckerUtil : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)applicationForegroundCheckerUtil __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedApplicationForegroundCheckerUtil *shared __attribute__((swift_name("shared")));
- (void)doInit __attribute__((swift_name("doInit()")));
@property (readonly) BOOL foreground __attribute__((swift_name("foreground")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FileUtil")))
@interface SharedFileUtil : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fileUtil __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFileUtil *shared __attribute__((swift_name("shared")));
- (void)deletePath:(NSString *)path __attribute__((swift_name("delete(path:)")));
- (BOOL)existsPath:(NSString *)path __attribute__((swift_name("exists(path:)")));
- (NSString *)getCacheDirectoryPath __attribute__((swift_name("getCacheDirectoryPath()")));
- (NSString *)getContentPath:(NSString *)path __attribute__((swift_name("getContent(path:)")));
- (NSString *)getFileNamePath:(NSString *)path __attribute__((swift_name("getFileName(path:)")));
- (NSArray<NSString *> *)getListPath:(NSString *)path __attribute__((swift_name("getList(path:)")));
- (int64_t)getSizePath:(NSString *)path __attribute__((swift_name("getSize(path:)")));
- (BOOL)isEmptyPath:(NSString *)path __attribute__((swift_name("isEmpty(path:)")));
- (void)writePath:(NSString *)path content:(NSString *)content __attribute__((swift_name("write(path:content:)")));
- (void)writeLinePath:(NSString *)path line:(NSString *)line __attribute__((swift_name("writeLine(path:line:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsFactory")))
@interface SharedSettingsFactory : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)settingsFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSettingsFactory *shared __attribute__((swift_name("shared")));
- (id<SharedMultiplatform_settingsSettingsFactory>)create __attribute__((swift_name("create()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerUtil")))
@interface SharedTimerUtil : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)startInterval:(int64_t)interval callback:(void (^)(void))callback __attribute__((swift_name("start(interval:callback:)")));
- (void)stop __attribute__((swift_name("stop()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkAuthentication")))
@interface SharedTruvideoSdkAuthentication : SharedBase
- (instancetype)initWithId:(NSString *)id accessToken:(NSString *)accessToken refreshToken:(NSString *)refreshToken __attribute__((swift_name("init(id:accessToken:refreshToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTruvideoSdkAuthenticationCompanion *companion __attribute__((swift_name("companion")));
- (SharedTruvideoSdkAuthentication *)doCopyId:(NSString *)id accessToken:(NSString *)accessToken refreshToken:(NSString *)refreshToken __attribute__((swift_name("doCopy(id:accessToken:refreshToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *refreshToken __attribute__((swift_name("refreshToken")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkAuthentication.Companion")))
@interface SharedTruvideoSdkAuthenticationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkAuthenticationCompanion *shared __attribute__((swift_name("shared")));
- (SharedTruvideoSdkAuthentication *)fromJsonJson:(NSString *)json __attribute__((swift_name("fromJson(json:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkAuthenticationStatus")))
@interface SharedTruvideoSdkAuthenticationStatus : SharedKotlinEnum<SharedTruvideoSdkAuthenticationStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedTruvideoSdkAuthenticationStatus *authenticated __attribute__((swift_name("authenticated")));
@property (class, readonly) SharedTruvideoSdkAuthenticationStatus *authenticationExpired __attribute__((swift_name("authenticationExpired")));
@property (class, readonly) SharedTruvideoSdkAuthenticationStatus *notAuthenticated __attribute__((swift_name("notAuthenticated")));
+ (SharedKotlinArray<SharedTruvideoSdkAuthenticationStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedTruvideoSdkAuthenticationStatus *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkHttpErrorResponse")))
@interface SharedTruvideoSdkHttpErrorResponse : SharedBase
- (instancetype)initWithType:(NSString *)type title:(NSString *)title status:(int32_t)status detail:(NSString *)detail instance:(NSString *)instance errors:(NSString *)errors __attribute__((swift_name("init(type:title:status:detail:instance:errors:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTruvideoSdkHttpErrorResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedTruvideoSdkHttpErrorResponse *)doCopyType:(NSString *)type title:(NSString *)title status:(int32_t)status detail:(NSString *)detail instance:(NSString *)instance errors:(NSString *)errors __attribute__((swift_name("doCopy(type:title:status:detail:instance:errors:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *detail __attribute__((swift_name("detail")));
@property (readonly) NSString *errors __attribute__((swift_name("errors")));
@property (readonly) NSString *instance __attribute__((swift_name("instance")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkHttpErrorResponse.Companion")))
@interface SharedTruvideoSdkHttpErrorResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkHttpErrorResponseCompanion *shared __attribute__((swift_name("shared")));
- (SharedTruvideoSdkHttpErrorResponse *)fromJsonJson:(NSString *)json __attribute__((swift_name("fromJson(json:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkHttpResponse")))
@interface SharedTruvideoSdkHttpResponse : SharedBase
- (instancetype)initWithCode:(int32_t)code body:(NSString *)body isSuccess:(BOOL)isSuccess __attribute__((swift_name("init(code:body:isSuccess:)"))) __attribute__((objc_designated_initializer));
- (SharedTruvideoSdkHttpResponse *)doCopyCode:(int32_t)code body:(NSString *)body isSuccess:(BOOL)isSuccess __attribute__((swift_name("doCopy(code:body:isSuccess:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *body __attribute__((swift_name("body")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkInternalLogModule")))
@interface SharedTruvideoSdkInternalLogModule : SharedKotlinEnum<SharedTruvideoSdkInternalLogModule *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedTruvideoSdkInternalLogModule *auth __attribute__((swift_name("auth")));
@property (class, readonly) SharedTruvideoSdkInternalLogModule *apiCalls __attribute__((swift_name("apiCalls")));
@property (class, readonly) SharedTruvideoSdkInternalLogModule *http __attribute__((swift_name("http")));
@property (class, readonly) SharedTruvideoSdkInternalLogModule *log __attribute__((swift_name("log")));
+ (SharedKotlinArray<SharedTruvideoSdkInternalLogModule *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedTruvideoSdkInternalLogModule *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkLog")))
@interface SharedTruvideoSdkLog : SharedBase
- (instancetype)initWithTag:(NSString *)tag message:(NSString *)message severity:(SharedTruvideoSdkLogSeverity *)severity __attribute__((swift_name("init(tag:message:severity:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTruvideoSdkLogCompanion *companion __attribute__((swift_name("companion")));
- (SharedTruvideoSdkLog *)doCopyTag:(NSString *)tag message:(NSString *)message severity:(SharedTruvideoSdkLogSeverity *)severity __attribute__((swift_name("doCopy(tag:message:severity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) SharedTruvideoSdkLogSeverity *severity __attribute__((swift_name("severity")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkLog.Companion")))
@interface SharedTruvideoSdkLogCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkLogCompanion *shared __attribute__((swift_name("shared")));
- (SharedTruvideoSdkLog *)fromJsonJson:(NSString *)json __attribute__((swift_name("fromJson(json:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkLogSeverity")))
@interface SharedTruvideoSdkLogSeverity : SharedKotlinEnum<SharedTruvideoSdkLogSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedTruvideoSdkLogSeverity *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) SharedTruvideoSdkLogSeverity *debug __attribute__((swift_name("debug")));
@property (class, readonly) SharedTruvideoSdkLogSeverity *info __attribute__((swift_name("info")));
@property (class, readonly) SharedTruvideoSdkLogSeverity *warning __attribute__((swift_name("warning")));
@property (class, readonly) SharedTruvideoSdkLogSeverity *error __attribute__((swift_name("error")));
+ (SharedKotlinArray<SharedTruvideoSdkLogSeverity *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedTruvideoSdkLogSeverity *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkSettings")))
@interface SharedTruvideoSdkSettings : SharedBase
- (instancetype)initWithCameraModule:(BOOL)cameraModule noiseCancelling:(BOOL)noiseCancelling __attribute__((swift_name("init(cameraModule:noiseCancelling:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTruvideoSdkSettingsCompanion *companion __attribute__((swift_name("companion")));
- (SharedTruvideoSdkSettings *)doCopyCameraModule:(BOOL)cameraModule noiseCancelling:(BOOL)noiseCancelling __attribute__((swift_name("doCopy(cameraModule:noiseCancelling:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL cameraModule __attribute__((swift_name("cameraModule")));
@property (readonly) BOOL noiseCancelling __attribute__((swift_name("noiseCancelling")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkSettings.Companion")))
@interface SharedTruvideoSdkSettingsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkSettingsCompanion *shared __attribute__((swift_name("shared")));
- (SharedTruvideoSdkSettings *)fromJsonJson:(NSString *)json __attribute__((swift_name("fromJson(json:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SharedKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol SharedKotlinx_coroutines_coreSharedFlow <SharedKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol SharedKotlinx_coroutines_coreStateFlow <SharedKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SharedKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol SharedKotlinx_coroutines_coreMutableSharedFlow <SharedKotlinx_coroutines_coreSharedFlow, SharedKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol SharedKotlinx_coroutines_coreMutableStateFlow <SharedKotlinx_coroutines_coreStateFlow, SharedKotlinx_coroutines_coreMutableSharedFlow>
@required
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Multiplatform_settingsSettingsFactory")))
@protocol SharedMultiplatform_settingsSettingsFactory
@required
- (id<SharedMultiplatform_settingsSettings>)createName:(NSString * _Nullable)name __attribute__((swift_name("create(name:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SharedKotlinx_serialization_coreKSerializer <SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Multiplatform_settingsSettings")))
@protocol SharedMultiplatform_settingsSettings
@required
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBoolean(key:defaultValue:)")));
- (SharedBoolean * _Nullable)getBooleanOrNullKey:(NSString *)key __attribute__((swift_name("getBooleanOrNull(key:)")));
- (double)getDoubleKey:(NSString *)key defaultValue:(double)defaultValue __attribute__((swift_name("getDouble(key:defaultValue:)")));
- (SharedDouble * _Nullable)getDoubleOrNullKey:(NSString *)key __attribute__((swift_name("getDoubleOrNull(key:)")));
- (float)getFloatKey:(NSString *)key defaultValue:(float)defaultValue __attribute__((swift_name("getFloat(key:defaultValue:)")));
- (SharedFloat * _Nullable)getFloatOrNullKey:(NSString *)key __attribute__((swift_name("getFloatOrNull(key:)")));
- (int32_t)getIntKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("getInt(key:defaultValue:)")));
- (SharedInt * _Nullable)getIntOrNullKey:(NSString *)key __attribute__((swift_name("getIntOrNull(key:)")));
- (int64_t)getLongKey:(NSString *)key defaultValue:(int64_t)defaultValue __attribute__((swift_name("getLong(key:defaultValue:)")));
- (SharedLong * _Nullable)getLongOrNullKey:(NSString *)key __attribute__((swift_name("getLongOrNull(key:)")));
- (NSString *)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getString(key:defaultValue:)")));
- (NSString * _Nullable)getStringOrNullKey:(NSString *)key __attribute__((swift_name("getStringOrNull(key:)")));
- (BOOL)hasKeyKey:(NSString *)key __attribute__((swift_name("hasKey(key:)")));
- (void)putBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBoolean(key:value:)")));
- (void)putDoubleKey:(NSString *)key value:(double)value __attribute__((swift_name("putDouble(key:value:)")));
- (void)putFloatKey:(NSString *)key value:(float)value __attribute__((swift_name("putFloat(key:value:)")));
- (void)putIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("putInt(key:value:)")));
- (void)putLongKey:(NSString *)key value:(int64_t)value __attribute__((swift_name("putLong(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
@property (readonly) NSSet<NSString *> *keys __attribute__((swift_name("keys")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SharedKotlinx_serialization_coreEncoder
@required
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SharedKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<SharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<SharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) SharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SharedKotlinx_serialization_coreDecoder
@required
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (SharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SharedKotlinx_serialization_coreSerializersModule : SharedBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<SharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SharedKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SharedKotlinx_serialization_coreSerialKind : SharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass provider:(id<SharedKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass serializer:(id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedKotlinKClass>)baseClass actualClass:(id<SharedKotlinKClass>)actualClass actualSerializer:(id<SharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultSerializerProvider:(id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
