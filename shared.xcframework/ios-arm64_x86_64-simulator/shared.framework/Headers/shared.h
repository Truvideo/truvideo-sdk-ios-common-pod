#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedTruvideoSdkCompanion, SharedTruvideoSdkConfiguration, SharedTruvideoSdk, SharedKotlinThrowable, SharedKotlinArray<T>, SharedKotlinException, SharedTruvideoSdkException, SharedApplicationForegroundCheckerUtil, SharedFileUtil, SharedSettingsFactory, SharedTruvideoSdkAuthenticationCompanion, SharedTruvideoSdkAuthentication, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedTruvideoSdkAuthenticationStatus, SharedTruvideoSdkLogConfiguration, SharedTruvideoSdkConfigurationCompanion, SharedTruvideoSdkHttpErrorResponseCompanion, SharedTruvideoSdkHttpErrorResponse, SharedTruvideoSdkHttpResponse, SharedTruvideoSdkIPResponseCompanion, SharedTruvideoSdkIPResponse, SharedTruvideoSdkLogSeverity, SharedTruvideoSdkLogModule, SharedTruvideoSdkLogCompanion, SharedTruvideoSdkLog, SharedTruvideoSdkLogConfigurationCompanion, SharedTruvideoSdkNetworkType, SharedTruvideoSdkSettingsCompanion, SharedTruvideoSdkSettings, SharedTruvideoSdkHttpServiceCompanion, SharedTruvideoSdkIPServiceCompanion, SharedTruvideoSdkIPService, SharedTruvideoSdkLogServiceCompanion, SharedTruvideoSdkLocalStorageServiceCompanion, SharedTruvideoSdkAuthServiceCompanion, SharedBuildConfig, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedKotlinx_serialization_coreSerializersModule, SharedKotlinx_serialization_coreSerialKind, SharedKotlinNothing;

@protocol SharedTruvideoSdkAuthServiceInterface, SharedTruvideoSdkHttpServiceInterface, SharedTruvideoSdkLocalStorageServiceInterface, SharedTruvideoSdkLogServiceInterface, SharedMultiplatform_settingsSettingsFactory, SharedKotlinx_serialization_coreKSerializer, SharedKotlinComparable, SharedTruvideoSdkIPServiceInterface, SharedTruvideoSdkLogFileUploadInterface, SharedKotlinIterator, SharedMultiplatform_settingsSettings, SharedKotlinx_serialization_coreEncoder, SharedKotlinx_serialization_coreSerialDescriptor, SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDecoder, SharedKotlinx_serialization_coreDeserializationStrategy, SharedKotlinx_serialization_coreCompositeEncoder, SharedKotlinAnnotation, SharedKotlinx_serialization_coreCompositeDecoder, SharedKotlinx_serialization_coreSerializersModuleCollector, SharedKotlinKClass, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier;

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
@property (class, readonly, getter=companion) SharedTruvideoSdkCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) id<SharedTruvideoSdkAuthServiceInterface> auth __attribute__((swift_name("auth")));
@property SharedTruvideoSdkConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) id<SharedTruvideoSdkHttpServiceInterface> http __attribute__((swift_name("http")));
@property (readonly) id<SharedTruvideoSdkLocalStorageServiceInterface> localStorage __attribute__((swift_name("localStorage")));
@property (readonly) id<SharedTruvideoSdkLogServiceInterface> log __attribute__((swift_name("log")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdk.Companion")))
@interface SharedTruvideoSdkCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedTruvideoSdk *instance __attribute__((swift_name("instance")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplicationForegroundCheckerUtil")))
@interface SharedApplicationForegroundCheckerUtil : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)applicationForegroundCheckerUtil __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedApplicationForegroundCheckerUtil *shared __attribute__((swift_name("shared")));
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
- (NSString *)getFileExtensionPath:(NSString *)path __attribute__((swift_name("getFileExtension(path:)")));
- (NSString *)getFileNamePath:(NSString *)path withExtension:(BOOL)withExtension __attribute__((swift_name("getFileName(path:withExtension:)")));
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
__attribute__((swift_name("TruvideoSdkConfiguration")))
@interface SharedTruvideoSdkConfiguration : SharedBase
- (instancetype)initWithLog:(SharedTruvideoSdkLogConfiguration *)log __attribute__((swift_name("init(log:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTruvideoSdkConfigurationCompanion *companion __attribute__((swift_name("companion")));
- (SharedTruvideoSdkConfiguration *)doCopyLog:(SharedTruvideoSdkLogConfiguration *)log __attribute__((swift_name("doCopy(log:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedTruvideoSdkLogConfiguration *log __attribute__((swift_name("log")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkConfiguration.Companion")))
@interface SharedTruvideoSdkConfigurationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkConfigurationCompanion *shared __attribute__((swift_name("shared")));
- (SharedTruvideoSdkConfiguration *)fromJsonJson:(NSString *)json __attribute__((swift_name("fromJson(json:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkIPResponse")))
@interface SharedTruvideoSdkIPResponse : SharedBase
- (instancetype)initWithOrigin:(NSString *)origin __attribute__((swift_name("init(origin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTruvideoSdkIPResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedTruvideoSdkIPResponse *)doCopyOrigin:(NSString *)origin __attribute__((swift_name("doCopy(origin:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *origin __attribute__((swift_name("origin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkIPResponse.Companion")))
@interface SharedTruvideoSdkIPResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkIPResponseCompanion *shared __attribute__((swift_name("shared")));
- (SharedTruvideoSdkIPResponse *)fromJsonJson:(NSString *)json __attribute__((swift_name("fromJson(json:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkLog")))
@interface SharedTruvideoSdkLog : SharedBase
- (instancetype)initWithTag:(NSString *)tag message:(NSString *)message severity:(SharedTruvideoSdkLogSeverity *)severity module:(SharedTruvideoSdkLogModule * _Nullable)module moduleVersion:(NSString *)moduleVersion __attribute__((swift_name("init(tag:message:severity:module:moduleVersion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTruvideoSdkLogCompanion *companion __attribute__((swift_name("companion")));
- (SharedTruvideoSdkLog *)doCopyTag:(NSString *)tag message:(NSString *)message severity:(SharedTruvideoSdkLogSeverity *)severity module:(SharedTruvideoSdkLogModule * _Nullable)module moduleVersion:(NSString *)moduleVersion __attribute__((swift_name("doCopy(tag:message:severity:module:moduleVersion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) SharedTruvideoSdkLogModule * _Nullable module __attribute__((swift_name("module")));
@property (readonly) NSString *moduleVersion __attribute__((swift_name("moduleVersion")));
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


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkLogConfiguration")))
@interface SharedTruvideoSdkLogConfiguration : SharedBase
- (instancetype)initWithSyncInterval:(int64_t)syncInterval closeBufferFileInterval:(int64_t)closeBufferFileInterval printEnabled:(BOOL)printEnabled severityLevel:(SharedTruvideoSdkLogSeverity *)severityLevel bufferFileSize:(int64_t)bufferFileSize __attribute__((swift_name("init(syncInterval:closeBufferFileInterval:printEnabled:severityLevel:bufferFileSize:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTruvideoSdkLogConfigurationCompanion *companion __attribute__((swift_name("companion")));
- (SharedTruvideoSdkLogConfiguration *)doCopySyncInterval:(int64_t)syncInterval closeBufferFileInterval:(int64_t)closeBufferFileInterval printEnabled:(BOOL)printEnabled severityLevel:(SharedTruvideoSdkLogSeverity *)severityLevel bufferFileSize:(int64_t)bufferFileSize __attribute__((swift_name("doCopy(syncInterval:closeBufferFileInterval:printEnabled:severityLevel:bufferFileSize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int64_t bufferFileSize __attribute__((swift_name("bufferFileSize")));
@property int64_t closeBufferFileInterval __attribute__((swift_name("closeBufferFileInterval")));
@property BOOL printEnabled __attribute__((swift_name("printEnabled")));
@property SharedTruvideoSdkLogSeverity *severityLevel __attribute__((swift_name("severityLevel")));
@property int64_t syncInterval __attribute__((swift_name("syncInterval")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkLogConfiguration.Companion")))
@interface SharedTruvideoSdkLogConfigurationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkLogConfigurationCompanion *shared __attribute__((swift_name("shared")));
- (SharedTruvideoSdkLogConfiguration *)fromJsonJson:(NSString *)json __attribute__((swift_name("fromJson(json:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkLogModule")))
@interface SharedTruvideoSdkLogModule : SharedKotlinEnum<SharedTruvideoSdkLogModule *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedTruvideoSdkLogModule *core __attribute__((swift_name("core")));
@property (class, readonly) SharedTruvideoSdkLogModule *camera __attribute__((swift_name("camera")));
@property (class, readonly) SharedTruvideoSdkLogModule *media __attribute__((swift_name("media")));
@property (class, readonly) SharedTruvideoSdkLogModule *testCommon __attribute__((swift_name("testCommon")));
+ (SharedKotlinArray<SharedTruvideoSdkLogModule *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedTruvideoSdkLogModule *> *entries __attribute__((swift_name("entries")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkNetworkType")))
@interface SharedTruvideoSdkNetworkType : SharedKotlinEnum<SharedTruvideoSdkNetworkType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedTruvideoSdkNetworkType *none __attribute__((swift_name("none")));
@property (class, readonly) SharedTruvideoSdkNetworkType *wifi __attribute__((swift_name("wifi")));
@property (class, readonly) SharedTruvideoSdkNetworkType *wifiAware __attribute__((swift_name("wifiAware")));
@property (class, readonly) SharedTruvideoSdkNetworkType *bluetooth __attribute__((swift_name("bluetooth")));
@property (class, readonly) SharedTruvideoSdkNetworkType *cellular __attribute__((swift_name("cellular")));
@property (class, readonly) SharedTruvideoSdkNetworkType *ethernet __attribute__((swift_name("ethernet")));
@property (class, readonly) SharedTruvideoSdkNetworkType *usb __attribute__((swift_name("usb")));
@property (class, readonly) SharedTruvideoSdkNetworkType *vpn __attribute__((swift_name("vpn")));
@property (class, readonly) SharedTruvideoSdkNetworkType *lowPan __attribute__((swift_name("lowPan")));
+ (SharedKotlinArray<SharedTruvideoSdkNetworkType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedTruvideoSdkNetworkType *> *entries __attribute__((swift_name("entries")));
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

__attribute__((swift_name("TruvideoSdkHttpServiceInterface")))
@protocol SharedTruvideoSdkHttpServiceInterface
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUrl:(NSString *)url headers:(NSDictionary<NSString *, NSString *> *)headers retry:(BOOL)retry printLogs:(BOOL)printLogs completionHandler:(void (^)(SharedTruvideoSdkHttpResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("get(url:headers:retry:printLogs:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)headUrl:(NSString *)url retry:(BOOL)retry printLogs:(BOOL)printLogs completionHandler:(void (^)(SharedTruvideoSdkHttpResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("head(url:retry:printLogs:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUrl:(NSString *)url headers:(NSDictionary<NSString *, NSString *> *)headers body:(id _Nullable)body retry:(BOOL)retry printLogs:(BOOL)printLogs completionHandler:(void (^)(SharedTruvideoSdkHttpResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("post(url:headers:body:retry:printLogs:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkHttpService")))
@interface SharedTruvideoSdkHttpService : SharedBase <SharedTruvideoSdkHttpServiceInterface>
@property (class, readonly, getter=companion) SharedTruvideoSdkHttpServiceCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUrl:(NSString *)url headers:(NSDictionary<NSString *, NSString *> *)headers retry:(BOOL)retry printLogs:(BOOL)printLogs completionHandler:(void (^)(SharedTruvideoSdkHttpResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("get(url:headers:retry:printLogs:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)headUrl:(NSString *)url retry:(BOOL)retry printLogs:(BOOL)printLogs completionHandler:(void (^)(SharedTruvideoSdkHttpResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("head(url:retry:printLogs:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUrl:(NSString *)url headers:(NSDictionary<NSString *, NSString *> *)headers body:(id _Nullable)body retry:(BOOL)retry printLogs:(BOOL)printLogs completionHandler:(void (^)(SharedTruvideoSdkHttpResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("post(url:headers:body:retry:printLogs:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkHttpService.Companion")))
@interface SharedTruvideoSdkHttpServiceCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkHttpServiceCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) id<SharedTruvideoSdkHttpServiceInterface> instance __attribute__((swift_name("instance")));
@end

__attribute__((swift_name("TruvideoSdkIPServiceInterface")))
@protocol SharedTruvideoSdkIPServiceInterface
@required
- (void)startService __attribute__((swift_name("startService()")));
- (void)stopService __attribute__((swift_name("stopService()")));
@property (readonly) NSString *ip __attribute__((swift_name("ip")));
@property (readonly) SharedLong * _Nullable lastUpdated __attribute__((swift_name("lastUpdated")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkIPService")))
@interface SharedTruvideoSdkIPService : SharedBase <SharedTruvideoSdkIPServiceInterface>
@property (class, readonly, getter=companion) SharedTruvideoSdkIPServiceCompanion *companion __attribute__((swift_name("companion")));
- (void)startService __attribute__((swift_name("startService()")));
- (void)stopService __attribute__((swift_name("stopService()")));
@property (readonly) NSString *ip __attribute__((swift_name("ip")));
@property (readonly) SharedLong * _Nullable lastUpdated __attribute__((swift_name("lastUpdated")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkIPService.Companion")))
@interface SharedTruvideoSdkIPServiceCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkIPServiceCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedTruvideoSdkIPService *instance __attribute__((swift_name("instance")));
@end

__attribute__((swift_name("TruvideoSdkLogServiceInterface")))
@protocol SharedTruvideoSdkLogServiceInterface
@required
- (void)clear __attribute__((swift_name("clear()")));
- (void)dTag:(NSString *)tag message:(NSString *)message module:(SharedTruvideoSdkLogModule * _Nullable)module moduleVersion:(NSString *)moduleVersion __attribute__((swift_name("d(tag:message:module:moduleVersion:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message module:(SharedTruvideoSdkLogModule * _Nullable)module moduleVersion:(NSString *)moduleVersion __attribute__((swift_name("e(tag:message:module:moduleVersion:)")));
- (void)iTag:(NSString *)tag message:(NSString *)message module:(SharedTruvideoSdkLogModule * _Nullable)module moduleVersion:(NSString *)moduleVersion __attribute__((swift_name("i(tag:message:module:moduleVersion:)")));
- (void)doInitServiceUploadFileHandler:(id<SharedTruvideoSdkLogFileUploadInterface>)uploadFileHandler __attribute__((swift_name("doInitService(uploadFileHandler:)")));
- (void)printLog:(SharedTruvideoSdkLog *)log __attribute__((swift_name("print(log:)")));
- (void)startService __attribute__((swift_name("startService()")));
- (void)stopService __attribute__((swift_name("stopService()")));
- (void)vTag:(NSString *)tag message:(NSString *)message module:(SharedTruvideoSdkLogModule * _Nullable)module moduleVersion:(NSString *)moduleVersion __attribute__((swift_name("v(tag:message:module:moduleVersion:)")));
- (void)wTag:(NSString *)tag message:(NSString *)message module:(SharedTruvideoSdkLogModule * _Nullable)module moduleVersion:(NSString *)moduleVersion __attribute__((swift_name("w(tag:message:module:moduleVersion:)")));
@property (readonly) NSString *directoryPath __attribute__((swift_name("directoryPath")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) NSString *errorDirectoryPath __attribute__((swift_name("errorDirectoryPath")));
@property (readonly) BOOL isServiceInit __attribute__((swift_name("isServiceInit")));
@property (readonly) BOOL isServiceRunning __attribute__((swift_name("isServiceRunning")));
@property (readonly) id<SharedTruvideoSdkLogFileUploadInterface> _Nullable logFileUpload __attribute__((swift_name("logFileUpload")));
@property SharedTruvideoSdkLogModule * _Nullable module __attribute__((swift_name("module")));
@property NSString *moduleVersion __attribute__((swift_name("moduleVersion")));
@property (readonly) NSString *pendingDirectoryPath __attribute__((swift_name("pendingDirectoryPath")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkLogService")))
@interface SharedTruvideoSdkLogService : SharedBase <SharedTruvideoSdkLogServiceInterface>
@property (class, readonly, getter=companion) SharedTruvideoSdkLogServiceCompanion *companion __attribute__((swift_name("companion")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)doInitServiceUploadFileHandler:(id<SharedTruvideoSdkLogFileUploadInterface>)uploadFileHandler __attribute__((swift_name("doInitService(uploadFileHandler:)")));
- (void)printLog:(SharedTruvideoSdkLog *)log __attribute__((swift_name("print(log:)")));
- (void)startService __attribute__((swift_name("startService()")));
- (void)stopService __attribute__((swift_name("stopService()")));
@property (readonly) NSString *directoryPath __attribute__((swift_name("directoryPath")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) NSString *errorDirectoryPath __attribute__((swift_name("errorDirectoryPath")));
@property (readonly) BOOL isServiceInit __attribute__((swift_name("isServiceInit")));
@property (readonly) BOOL isServiceRunning __attribute__((swift_name("isServiceRunning")));
@property (readonly) id<SharedTruvideoSdkLogFileUploadInterface> _Nullable logFileUpload __attribute__((swift_name("logFileUpload")));
@property SharedTruvideoSdkLogModule * _Nullable module __attribute__((swift_name("module")));
@property NSString *moduleVersion __attribute__((swift_name("moduleVersion")));
@property (readonly) NSString *pendingDirectoryPath __attribute__((swift_name("pendingDirectoryPath")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkLogService.Companion")))
@interface SharedTruvideoSdkLogServiceCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkLogServiceCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) id<SharedTruvideoSdkLogServiceInterface> instance __attribute__((swift_name("instance")));
@end

__attribute__((swift_name("TruvideoSdkLocalStorageServiceInterface")))
@protocol SharedTruvideoSdkLocalStorageServiceInterface
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
__attribute__((swift_name("TruvideoSdkLocalStorageService")))
@interface SharedTruvideoSdkLocalStorageService : SharedBase <SharedTruvideoSdkLocalStorageServiceInterface>
@property (class, readonly, getter=companion) SharedTruvideoSdkLocalStorageServiceCompanion *companion __attribute__((swift_name("companion")));
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
__attribute__((swift_name("TruvideoSdkLocalStorageService.Companion")))
@interface SharedTruvideoSdkLocalStorageServiceCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkLocalStorageServiceCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) id<SharedTruvideoSdkLocalStorageServiceInterface> instance __attribute__((swift_name("instance")));
@end

__attribute__((swift_name("TruvideoSdkAuthServiceInterface")))
@protocol SharedTruvideoSdkAuthServiceInterface
@required

/**
 * @note This method converts instances of TruvideoSdkException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)authenticateApiKey:(NSString *)apiKey payload:(NSString *)payload signature:(NSString *)signature forceRefresh:(BOOL)forceRefresh completionHandler:(void (^)(SharedTruvideoSdkAuthentication * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("authenticate(apiKey:payload:signature:forceRefresh:completionHandler:)")));
- (void)clear __attribute__((swift_name("clear()")));

/**
 * @note This method converts instances of TruvideoSdkAuthenticationRequiredException, TruvideoSdkExpiredTokenException, TruvideoSdkException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshAuthenticationForceRefresh:(BOOL)forceRefresh completionHandler:(void (^)(SharedTruvideoSdkAuthentication * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("refreshAuthentication(forceRefresh:completionHandler:)")));
- (BOOL)shouldCallAuthenticateApiKey:(NSString *)apiKey __attribute__((swift_name("shouldCallAuthenticate(apiKey:)")));
@property (readonly) SharedTruvideoSdkAuthentication * _Nullable authentication __attribute__((swift_name("authentication")));
@property (readonly) BOOL isAuthenticated __attribute__((swift_name("isAuthenticated")));
@property (readonly) BOOL isAuthenticationExpired __attribute__((swift_name("isAuthenticationExpired")));
@property (readonly) SharedTruvideoSdkSettings * _Nullable settings __attribute__((swift_name("settings")));
@property (readonly) SharedTruvideoSdkAuthenticationStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkAuthService")))
@interface SharedTruvideoSdkAuthService : SharedBase <SharedTruvideoSdkAuthServiceInterface>
@property (class, readonly, getter=companion) SharedTruvideoSdkAuthServiceCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of TruvideoSdkException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)authenticateApiKey:(NSString *)apiKey payload:(NSString *)payload signature:(NSString *)signature forceRefresh:(BOOL)forceRefresh completionHandler:(void (^)(SharedTruvideoSdkAuthentication * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("authenticate(apiKey:payload:signature:forceRefresh:completionHandler:)")));
- (void)clear __attribute__((swift_name("clear()")));

/**
 * @note This method converts instances of TruvideoSdkAuthenticationRequiredException, TruvideoSdkExpiredTokenException, TruvideoSdkException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshAuthenticationForceRefresh:(BOOL)forceRefresh completionHandler:(void (^)(SharedTruvideoSdkAuthentication * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("refreshAuthentication(forceRefresh:completionHandler:)")));
- (BOOL)shouldCallAuthenticateApiKey:(NSString *)apiKey __attribute__((swift_name("shouldCallAuthenticate(apiKey:)")));
@property (readonly) SharedTruvideoSdkAuthentication * _Nullable authentication __attribute__((swift_name("authentication")));
@property (readonly) BOOL isAuthenticated __attribute__((swift_name("isAuthenticated")));
@property (readonly) BOOL isAuthenticationExpired __attribute__((swift_name("isAuthenticationExpired")));
@property (readonly) SharedTruvideoSdkSettings * _Nullable settings __attribute__((swift_name("settings")));
@property (readonly) SharedTruvideoSdkAuthenticationStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruvideoSdkAuthService.Companion")))
@interface SharedTruvideoSdkAuthServiceCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTruvideoSdkAuthServiceCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) id<SharedTruvideoSdkAuthServiceInterface> instance __attribute__((swift_name("instance")));
@end

__attribute__((swift_name("TruvideoSdkLogFileUploadInterface")))
@protocol SharedTruvideoSdkLogFileUploadInterface
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadPath:(NSString *)path completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("upload(path:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuildConfig")))
@interface SharedBuildConfig : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)buildConfig __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedBuildConfig *shared __attribute__((swift_name("shared")));
@property (readonly) int64_t BUILD_TIME __attribute__((swift_name("BUILD_TIME")));
@property (readonly) NSString *NAME __attribute__((swift_name("NAME")));
@property (readonly) NSString *VERSION __attribute__((swift_name("VERSION")));
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
