/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKObject : NSObject <NSCopying, NSSecureCoding> {
    NSUUID *_UUID;
    double _creationTimestamp;
    HKDevice *_device;
    NSDictionary *_metadata;
    int _provenanceID;
    NSString *_sourceBundleIdentifier;
    HKSourceRevision *_sourceRevision;
}

@property (readonly) NSUUID *UUID;
@property (getter=_creationDate, setter=_setCreationDate:, nonatomic) NSDate *creationDate;
@property (getter=_creationTimestamp, setter=_setCreationTimestamp:, nonatomic) double creationTimestamp;
@property (readonly) HKDevice *device;
@property (readonly, copy) NSDictionary *metadata;
@property (readonly) HKSource *source;
@property (getter=_sourceBundleIdentifier, setter=_setSourceBundleIdentifier:, nonatomic, copy) NSString *sourceBundleIdentifier;
@property (readonly) HKSourceRevision *sourceRevision;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (BOOL)_isConcreteObjectClass;
+ (id)_newDataObjectWithMetadata:(id)arg1 device:(id)arg2 config:(id /* block */)arg3;
+ (id)_objectWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(double)arg4;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_creationDate;
- (double)_creationTimestamp;
- (id)_init;
- (BOOL)_objectCanBeSaved:(id*)arg1;
- (void)_setCreationDate:(id)arg1;
- (void)_setCreationTimestamp:(double)arg1;
- (void)_setDevice:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (void)_setSourceBundleIdentifier:(id)arg1;
- (void)_setSourceRevision:(id)arg1;
- (void)_setUUID:(id)arg1;
- (id)_source;
- (id)_sourceBundleIdentifier;
- (id)_validateConfiguration;
- (void)_validateForCreation;
- (id)_valueDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)metadata;
- (id)source;
- (id)sourceRevision;
- (BOOL)validateForSaving:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)hd_allObjectsToInsertWithObjects:(id)arg1;
+ (Class)hd_dataEntityClass;

- (BOOL)addCodableRepresentationToCollection:(id)arg1;
- (BOOL)addCodableRepresentationToCollectionForJournal:(id)arg1;
- (BOOL)addCodableRepresentationToCollectionForSync:(id)arg1;
- (id)codableRepresentationForSync;
- (int)entityType;
- (id)hd_associatedObjects;
- (id)hd_associatedSampleTypes;
- (Class)hd_dataEntityClass;
- (BOOL)hd_insertRelatedDataWithHealthDaemon:(id)arg1 database:(id)arg2 entityPersistentID:(id)arg3 error:(id*)arg4;
- (id)hd_relatedJournalEntries;
- (id)hd_sampleType;

// Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI

- (int)hk_integerValue;

@end