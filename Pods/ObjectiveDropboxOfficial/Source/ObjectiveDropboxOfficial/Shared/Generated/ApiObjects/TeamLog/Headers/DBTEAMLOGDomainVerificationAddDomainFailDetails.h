///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGDomainVerificationAddDomainFailDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DomainVerificationAddDomainFailDetails` struct.
///
/// Failed to verify a domain belonging to the team.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDomainVerificationAddDomainFailDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Domain name.
@property (nonatomic, readonly, copy) NSString *domainName;

/// Domain name verification method. Might be missing due to historical data
/// gap.
@property (nonatomic, readonly, copy, nullable) NSString *verificationMethod;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param domainName Domain name.
/// @param verificationMethod Domain name verification method. Might be missing
/// due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDomainName:(NSString *)domainName verificationMethod:(nullable NSString *)verificationMethod;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param domainName Domain name.
///
/// @return An initialized instance.
///
- (instancetype)initWithDomainName:(NSString *)domainName;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DomainVerificationAddDomainFailDetails`
/// struct.
///
@interface DBTEAMLOGDomainVerificationAddDomainFailDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGDomainVerificationAddDomainFailDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGDomainVerificationAddDomainFailDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDomainVerificationAddDomainFailDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGDomainVerificationAddDomainFailDetails *)instance;

///
/// Deserializes `DBTEAMLOGDomainVerificationAddDomainFailDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDomainVerificationAddDomainFailDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGDomainVerificationAddDomainFailDetails` object.
///
+ (DBTEAMLOGDomainVerificationAddDomainFailDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
