/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNContact : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    void *_addressBook;
    BOOL _checkedForOriginalRecord;
    CNContactIdentifier *_identifier;
    int _isFacebook;
    NSArray *_linkedContacts;
    void *_originalRecord;
    void *_record;
    unsigned int _recordType;
    void *_source;
    BOOL _unified;
}

@property void*addressBook;
@property (readonly, copy) NSDateComponents *alternateBirthday;
@property (readonly, copy) NSDateComponents *birthday;
@property (readonly, copy) NSArray *birthdays;
@property (readonly) int contactType;
@property (readonly, copy) NSArray *dates;
@property (readonly, copy) NSString *departmentName;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSArray *emailAddresses;
@property (getter=isFacebook, nonatomic, readonly) BOOL facebook;
@property (readonly, copy) NSString *familyName;
@property (readonly, copy) NSString *fullName;
@property (readonly, copy) NSString *givenName;
@property (readonly) BOOL hasChanges;
@property (readonly, copy) CNContactIdentifier *identifier;
@property (readonly, copy) NSArray *instantMessageAddresses;
@property (readonly, copy) NSString *jobTitle;
@property (readonly) NSData *largestAvailablePhoto;
@property (retain) NSArray *linkedContacts;
@property (getter=isMeContact, nonatomic, readonly) BOOL meContact;
@property (readonly, copy) NSString *middleName;
@property (readonly) int nameOrder;
@property (readonly, copy) NSString *namePrefix;
@property (readonly, copy) NSString *nameSuffix;
@property (readonly, copy) NSString *nickname;
@property (readonly, copy) NSString *note;
@property (readonly, copy) NSString *organizationName;
@property (readonly) void*originalRecord;
@property (readonly, copy) NSString *personName;
@property (readonly, copy) NSArray *phoneNumbers;
@property (readonly, copy) NSString *phoneticFamilyName;
@property (readonly, copy) NSString *phoneticFullName;
@property (readonly, copy) NSString *phoneticGivenName;
@property (readonly, copy) NSString *phoneticMiddleName;
@property (readonly) NSData *photoThumbnail;
@property (readonly, copy) NSArray *postalAddresses;
@property (readonly, copy) CNContact *preferredContactForName;
@property (readonly, copy) CNContact *preferredContactForPhoto;
@property (getter=isPreferredForName) BOOL preferredForName;
@property (getter=isPreferredForPhoto) BOOL preferredForPhoto;
@property (readonly, copy) NSString *previousFamilyName;
@property (readonly, copy) NSString *primarySourceName;
@property (getter=isReadonly, nonatomic, readonly) BOOL readonly;
@property (nonatomic, retain) CRRecentContact *recentContact;
@property (readonly) void*record;
@property (readonly) int recordID;
@property (readonly) unsigned int recordType;
@property (readonly, copy) NSArray *relatedNames;
@property (readonly, copy) NSArray *ringtone;
@property (readonly, copy) NSArray *socialProfiles;
@property void*source;
@property (readonly, copy) NSArray *textTone;
@property (getter=isUnified, readonly) BOOL unified;
@property (getter=isUnknown, nonatomic, readonly) BOOL unknown;
@property (readonly, copy) NSArray *urlAddresses;

// Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI

+ (id)contact;
+ (id)contactWithRecord:(void*)arg1;
+ (id)contactWithRecord:(void*)arg1 unify:(BOOL)arg2;
+ (id)contactWithRecordID:(int)arg1 addressBook:(void*)arg2;
+ (id)contactWithStateRestorationCoder:(id)arg1 addressBook:(void*)arg2;
+ (id)contactWithUserActivityUserInfo:(id)arg1 addressBook:(void*)arg2;
+ (int)defaultNameOrderForEdit;
+ (id)propertiesFromPropertyIDs:(id)arg1;
+ (id)propertyForPropertyID:(int)arg1;
+ (int)propertyIDForProperty:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)_CNLabelFromABLabel:(struct __CFString { }*)arg1;
- (id)_labeledValueForSoundIdentifier:(int)arg1;
- (id)_labelledStringValuesForProperty:(int)arg1;
- (id)_labelledValuesForProperty:(int)arg1 valueFromABValue:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_squareCropRectForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_squareImage:(id)arg1;
- (id)_stringValueForProperty:(int)arg1;
- (void*)addressBook;
- (id)alternateBirthday;
- (id)birthday;
- (id)birthdays;
- (int)contactType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dates;
- (void)dealloc;
- (BOOL)deleteContact;
- (id)departmentName;
- (id)description;
- (id)displayName;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)fullName;
- (id)givenName;
- (BOOL)hasChanges;
- (BOOL)hasLinkedContacts;
- (BOOL)hasValidRecordID;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(void*)arg1;
- (id)initWithRecord:(void*)arg1 unify:(BOOL)arg2;
- (id)initWithRecord:(void*)arg1 unify:(BOOL)arg2 originalRecord:(void*)arg3;
- (id)instantMessageAddresses;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContact:(id)arg1;
- (BOOL)isEqualToContact:(id)arg1 includeIdentifiers:(BOOL)arg2;
- (BOOL)isFacebook;
- (BOOL)isMeContact;
- (BOOL)isPreferredForName;
- (BOOL)isPreferredForPhoto;
- (BOOL)isReadonly;
- (BOOL)isUnified;
- (BOOL)isUnknown;
- (id)jobTitle;
- (id)largestAvailablePhoto;
- (id)largestAvailablePhotoAndCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1;
- (id)linkedContacts;
- (id)localizedNameForProperty:(id)arg1;
- (int)maximumNumberOfValuesForProperty:(id)arg1;
- (id)middleName;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)nameOrder;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickname;
- (id)note;
- (id)organizationName;
- (void*)originalRecord;
- (id)personName;
- (id)phoneNumbers;
- (id)phoneticFamilyName;
- (id)phoneticFullName;
- (id)phoneticGivenName;
- (id)phoneticMiddleName;
- (id)photoThumbnail;
- (id)postalAddresses;
- (id)preferredContactForName;
- (id)preferredContactForPhoto;
- (id)previousFamilyName;
- (id)primarySourceName;
- (void*)record;
- (int)recordID;
- (unsigned int)recordType;
- (id)relatedNames;
- (void)reloadRecord;
- (void)removePhoto;
- (id)ringtone;
- (void)setAddressBook:(void*)arg1;
- (void)setImageData:(id)arg1 forFormat:(int)arg2 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)setLinkedContacts:(id)arg1;
- (void)setPhoto:(id)arg1;
- (void)setPreferredForName:(BOOL)arg1;
- (void)setPreferredForPhoto:(BOOL)arg1;
- (void)setSource:(void*)arg1;
- (id)socialProfiles;
- (void*)source;
- (id)supportedLabelsForProperty:(id)arg1;
- (BOOL)supportsCustomLabelsForProperty:(id)arg1;
- (BOOL)supportsInstantMessageService;
- (id)textTone;
- (id)urlAddresses;
- (id)userActivityUserInfo;
- (id)vCardRepresentation;
- (BOOL)validatesPredicate:(id)arg1 onPropertyKey:(id)arg2 propertyIdentifier:(int)arg3;

// Image: /System/Library/Frameworks/PassKit.framework/PassKit

+ (id)contactWithPkDictionary:(id)arg1;
+ (void)pkAddLabeledValues:(id)arg1 toRecord:(void*)arg2 withProperty:(int)arg3;
+ (id)pkContactWithFirstName:(id)arg1 lastName:(id)arg2 labeledValue:(id)arg3 propertyID:(int)arg4;
+ (id)pkContactWithFirstName:(id)arg1 lastName:(id)arg2 postalAddresses:(id)arg3 emailAddresses:(id)arg4 phoneNumbers:(id)arg5;
+ (id)pkContactWithNameFromContact:(id)arg1 labeledValue:(id)arg2 propertyID:(int)arg3;

- (id)pkDictionaryForPropertyID:(int)arg1;
- (id)pkFormattedContactAddress;
- (id)pkSingleLineFormattedContactAddress;
- (id)recentContact;
- (void)setRecentContact:(id)arg1;

@end