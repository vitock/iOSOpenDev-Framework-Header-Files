/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASChangedCollectionLeaf.h>
#import <DAEAS/DADataElement.h>

@class NSDate, NSArray, NSString;

@interface ASContact : ASChangedCollectionLeaf <DADataElement> {
	void *_abRecord;	// 64 = 0x40
	NSDate *_anniversary;	// 68 = 0x44
	NSString *_assistantName;	// 72 = 0x48
	NSString *_assistantTelephoneNumber;	// 76 = 0x4c
	NSDate *_birthday;	// 80 = 0x50
	NSString *_body;	// 84 = 0x54
	int _bodySize;	// 88 = 0x58
	BOOL _bodyTruncated;	// 92 = 0x5c
	NSString *_business2TelephoneNumber;	// 96 = 0x60
	NSString *_businessAddressCity;	// 100 = 0x64
	NSString *_businessAddressCountry;	// 104 = 0x68
	NSString *_businessAddressPostalCode;	// 108 = 0x6c
	NSString *_businessAddressState;	// 112 = 0x70
	NSString *_businessAddressStreet;	// 116 = 0x74
	NSString *_businessFaxNumber;	// 120 = 0x78
	NSString *_businessTelephoneNumber;	// 124 = 0x7c
	NSString *_carTelephoneNumber;	// 128 = 0x80
	NSArray *_categories;	// 132 = 0x84
	NSArray *_children;	// 136 = 0x88
	NSString *_companyName;	// 140 = 0x8c
	NSString *_department;	// 144 = 0x90
	NSString *_email1Address;	// 148 = 0x94
	NSString *_email2Address;	// 152 = 0x98
	NSString *_email3Address;	// 156 = 0x9c
	NSString *_fileAs;	// 160 = 0xa0
	NSString *_firstName;	// 164 = 0xa4
	NSString *_home2TelephoneNumber;	// 168 = 0xa8
	NSString *_homeAddressCity;	// 172 = 0xac
	NSString *_homeAddressCountry;	// 176 = 0xb0
	NSString *_homeAddressPostalCode;	// 180 = 0xb4
	NSString *_homeAddressState;	// 184 = 0xb8
	NSString *_homeAddressStreet;	// 188 = 0xbc
	NSString *_homeFaxNumber;	// 192 = 0xc0
	NSString *_homeTelephoneNumber;	// 196 = 0xc4
	NSString *_jobTitle;	// 200 = 0xc8
	NSString *_lastName;	// 204 = 0xcc
	NSString *_middleName;	// 208 = 0xd0
	NSString *_mobileTelephoneNumber;	// 212 = 0xd4
	NSString *_officeLocation;	// 216 = 0xd8
	NSString *_otherAddressCity;	// 220 = 0xdc
	NSString *_otherAddressCountry;	// 224 = 0xe0
	NSString *_otherAddressPostalCode;	// 228 = 0xe4
	NSString *_otherAddressState;	// 232 = 0xe8
	NSString *_otherAddressStreet;	// 236 = 0xec
	NSString *_pagerNumber;	// 240 = 0xf0
	NSString *_picture;	// 244 = 0xf4
	NSString *_radioTelephoneNumber;	// 248 = 0xf8
	NSString *_spouse;	// 252 = 0xfc
	NSString *_suffix;	// 256 = 0x100
	NSString *_title;	// 260 = 0x104
	NSString *_webpage;	// 264 = 0x108
	NSString *_yomiCompanyName;	// 268 = 0x10c
	NSString *_yomiFirstName;	// 272 = 0x110
	NSString *_yomiLastName;	// 276 = 0x114
	NSString *_customerID;	// 280 = 0x118
	NSString *_governmentID;	// 284 = 0x11c
	NSString *_im1Address;	// 288 = 0x120
	NSString *_im2Address;	// 292 = 0x124
	NSString *_im3Address;	// 296 = 0x128
	NSString *_managerName;	// 300 = 0x12c
	NSString *_companyMainPhone;	// 304 = 0x130
	NSString *_accountName;	// 308 = 0x134
	NSString *_nickName;	// 312 = 0x138
	NSString *_mms;	// 316 = 0x13c
	int _fileAsAutoConstruction;	// 320 = 0x140
}
@property(retain) NSString *mms;	// G=0x33b2d; S=0x33b41; @synthesize=_mms
@property(retain) NSString *nickName;	// G=0x33af5; S=0x33b09; @synthesize=_nickName
@property(retain) NSString *accountName;	// G=0x33abd; S=0x33ad1; @synthesize=_accountName
@property(retain) NSString *companyMainPhone;	// G=0x33a85; S=0x33a99; @synthesize=_companyMainPhone
@property(retain) NSString *managerName;	// G=0x33a4d; S=0x33a61; @synthesize=_managerName
@property(retain) NSString *im3Address;	// G=0x33a15; S=0x33a29; @synthesize=_im3Address
@property(retain) NSString *im2Address;	// G=0x339dd; S=0x339f1; @synthesize=_im2Address
@property(retain) NSString *im1Address;	// G=0x339a5; S=0x339b9; @synthesize=_im1Address
@property(retain) NSString *governmentID;	// G=0x3396d; S=0x33981; @synthesize=_governmentID
@property(retain) NSString *customerID;	// G=0x33935; S=0x33949; @synthesize=_customerID
@property(retain) NSString *yomiLastName;	// G=0x338fd; S=0x33911; @synthesize=_yomiLastName
@property(retain) NSString *yomiFirstName;	// G=0x338c5; S=0x338d9; @synthesize=_yomiFirstName
@property(retain) NSString *yomiCompanyName;	// G=0x3388d; S=0x338a1; @synthesize=_yomiCompanyName
@property(retain) NSString *webpage;	// G=0x33855; S=0x33869; @synthesize=_webpage
@property(retain) NSString *title;	// G=0x3381d; S=0x33831; @synthesize=_title
@property(retain) NSString *suffix;	// G=0x337e5; S=0x337f9; @synthesize=_suffix
@property(retain) NSString *spouse;	// G=0x337ad; S=0x337c1; @synthesize=_spouse
@property(retain) NSString *radioTelephoneNumber;	// G=0x33775; S=0x33789; @synthesize=_radioTelephoneNumber
@property(retain) NSString *picture;	// G=0x3373d; S=0x33751; @synthesize=_picture
@property(retain) NSString *pagerNumber;	// G=0x33705; S=0x33719; @synthesize=_pagerNumber
@property(retain) NSString *otherAddressStreet;	// G=0x336cd; S=0x336e1; @synthesize=_otherAddressStreet
@property(retain) NSString *otherAddressState;	// G=0x33695; S=0x336a9; @synthesize=_otherAddressState
@property(retain) NSString *otherAddressPostalCode;	// G=0x3365d; S=0x33671; @synthesize=_otherAddressPostalCode
@property(retain) NSString *otherAddressCountry;	// G=0x33625; S=0x33639; @synthesize=_otherAddressCountry
@property(retain) NSString *otherAddressCity;	// G=0x335ed; S=0x33601; @synthesize=_otherAddressCity
@property(retain) NSString *officeLocation;	// G=0x335b5; S=0x335c9; @synthesize=_officeLocation
@property(retain) NSString *mobileTelephoneNumber;	// G=0x3357d; S=0x33591; @synthesize=_mobileTelephoneNumber
@property(retain) NSString *middleName;	// G=0x33545; S=0x33559; @synthesize=_middleName
@property(retain) NSString *lastName;	// G=0x3350d; S=0x33521; @synthesize=_lastName
@property(retain) NSString *jobTitle;	// G=0x334d5; S=0x334e9; @synthesize=_jobTitle
@property(retain) NSString *homeFaxNumber;	// G=0x3349d; S=0x334b1; @synthesize=_homeFaxNumber
@property(retain) NSString *homeTelephoneNumber;	// G=0x33465; S=0x33479; @synthesize=_homeTelephoneNumber
@property(retain) NSString *homeAddressStreet;	// G=0x3342d; S=0x33441; @synthesize=_homeAddressStreet
@property(retain) NSString *homeAddressState;	// G=0x333f5; S=0x33409; @synthesize=_homeAddressState
@property(retain) NSString *homeAddressPostalCode;	// G=0x333bd; S=0x333d1; @synthesize=_homeAddressPostalCode
@property(retain) NSString *homeAddressCountry;	// G=0x33385; S=0x33399; @synthesize=_homeAddressCountry
@property(retain) NSString *homeAddressCity;	// G=0x3334d; S=0x33361; @synthesize=_homeAddressCity
@property(retain) NSString *home2TelephoneNumber;	// G=0x33315; S=0x33329; @synthesize=_home2TelephoneNumber
@property(retain) NSString *firstName;	// G=0x332dd; S=0x332f1; @synthesize=_firstName
@property(retain) NSString *fileAs;	// G=0x332a5; S=0x332b9; @synthesize=_fileAs
@property(retain) NSString *email3Address;	// G=0x3326d; S=0x33281; @synthesize=_email3Address
@property(retain) NSString *email2Address;	// G=0x33235; S=0x33249; @synthesize=_email2Address
@property(retain) NSString *email1Address;	// G=0x331fd; S=0x33211; @synthesize=_email1Address
@property(retain) NSString *department;	// G=0x331c5; S=0x331d9; @synthesize=_department
@property(retain) NSString *companyName;	// G=0x3318d; S=0x331a1; @synthesize=_companyName
@property(retain) NSArray *children;	// G=0x3311d; S=0x33131; @synthesize=_children
@property(retain) NSArray *categories;	// G=0x330e5; S=0x330f9; @synthesize=_categories
@property(retain) NSString *carTelephoneNumber;	// G=0x33155; S=0x33169; @synthesize=_carTelephoneNumber
@property(retain) NSString *businessTelephoneNumber;	// G=0x330ad; S=0x330c1; @synthesize=_businessTelephoneNumber
@property(retain) NSString *businessFaxNumber;	// G=0x33075; S=0x33089; @synthesize=_businessFaxNumber
@property(retain) NSString *businessAddressStreet;	// G=0x3303d; S=0x33051; @synthesize=_businessAddressStreet
@property(retain) NSString *businessAddressState;	// G=0x33005; S=0x33019; @synthesize=_businessAddressState
@property(retain) NSString *businessAddressPostalCode;	// G=0x32fcd; S=0x32fe1; @synthesize=_businessAddressPostalCode
@property(retain) NSString *businessAddressCountry;	// G=0x32f95; S=0x32fa9; @synthesize=_businessAddressCountry
@property(retain) NSString *businessAddressCity;	// G=0x32f5d; S=0x32f71; @synthesize=_businessAddressCity
@property(retain) NSString *business2TelephoneNumber;	// G=0x32f25; S=0x32f39; @synthesize=_business2TelephoneNumber
@property(assign) BOOL bodyTruncated;	// G=0x32f05; S=0x32f15; @synthesize=_bodyTruncated
@property(assign) int bodySize;	// G=0x32ee5; S=0x32ef5; @synthesize=_bodySize
@property(retain, nonatomic) NSString *body;	// G=0x32ed5; S=0x32bcd; @synthesize=_body
@property(retain) NSDate *birthday;	// G=0x32e9d; S=0x32eb1; @synthesize=_birthday
@property(retain) NSString *assistantTelephoneNumber;	// G=0x32e65; S=0x32e79; @synthesize=_assistantTelephoneNumber
@property(retain) NSString *assistantName;	// G=0x32e2d; S=0x32e41; @synthesize=_assistantName
@property(retain) NSDate *anniversary;	// G=0x32df5; S=0x32e09; @synthesize=_anniversary
+ (id)contactWithABRecord:(void *)abrecord serverID:(id)anId;	// 0x2c899
+ (void)_setSystemTimeZoneForUnitTests:(id)unitTests;	// 0x29bad
+ (BOOL)notifyOfUnknownTokens;	// 0x29b59
+ (BOOL)frontingBasicTypes;	// 0x29b05
+ (BOOL)parsingWithSubItems;	// 0x29ab1
+ (BOOL)parsingLeafNode;	// 0x29a5d
+ (BOOL)acceptsTopLevelLeaves;	// 0x29a09
// declared property setter: - (void)setMms:(id)mms;	// 0x33b41
// declared property getter: - (id)mms;	// 0x33b2d
// declared property setter: - (void)setNickName:(id)name;	// 0x33b09
// declared property getter: - (id)nickName;	// 0x33af5
// declared property setter: - (void)setAccountName:(id)name;	// 0x33ad1
// declared property getter: - (id)accountName;	// 0x33abd
// declared property setter: - (void)setCompanyMainPhone:(id)phone;	// 0x33a99
// declared property getter: - (id)companyMainPhone;	// 0x33a85
// declared property setter: - (void)setManagerName:(id)name;	// 0x33a61
// declared property getter: - (id)managerName;	// 0x33a4d
// declared property setter: - (void)setIm3Address:(id)address;	// 0x33a29
// declared property getter: - (id)im3Address;	// 0x33a15
// declared property setter: - (void)setIm2Address:(id)address;	// 0x339f1
// declared property getter: - (id)im2Address;	// 0x339dd
// declared property setter: - (void)setIm1Address:(id)address;	// 0x339b9
// declared property getter: - (id)im1Address;	// 0x339a5
// declared property setter: - (void)setGovernmentID:(id)anId;	// 0x33981
// declared property getter: - (id)governmentID;	// 0x3396d
// declared property setter: - (void)setCustomerID:(id)anId;	// 0x33949
// declared property getter: - (id)customerID;	// 0x33935
// declared property setter: - (void)setYomiLastName:(id)name;	// 0x33911
// declared property getter: - (id)yomiLastName;	// 0x338fd
// declared property setter: - (void)setYomiFirstName:(id)name;	// 0x338d9
// declared property getter: - (id)yomiFirstName;	// 0x338c5
// declared property setter: - (void)setYomiCompanyName:(id)name;	// 0x338a1
// declared property getter: - (id)yomiCompanyName;	// 0x3388d
// declared property setter: - (void)setWebpage:(id)webpage;	// 0x33869
// declared property getter: - (id)webpage;	// 0x33855
// declared property setter: - (void)setTitle:(id)title;	// 0x33831
// declared property getter: - (id)title;	// 0x3381d
// declared property setter: - (void)setSuffix:(id)suffix;	// 0x337f9
// declared property getter: - (id)suffix;	// 0x337e5
// declared property setter: - (void)setSpouse:(id)spouse;	// 0x337c1
// declared property getter: - (id)spouse;	// 0x337ad
// declared property setter: - (void)setRadioTelephoneNumber:(id)number;	// 0x33789
// declared property getter: - (id)radioTelephoneNumber;	// 0x33775
// declared property setter: - (void)setPicture:(id)picture;	// 0x33751
// declared property getter: - (id)picture;	// 0x3373d
// declared property setter: - (void)setPagerNumber:(id)number;	// 0x33719
// declared property getter: - (id)pagerNumber;	// 0x33705
// declared property setter: - (void)setOtherAddressStreet:(id)street;	// 0x336e1
// declared property getter: - (id)otherAddressStreet;	// 0x336cd
// declared property setter: - (void)setOtherAddressState:(id)state;	// 0x336a9
// declared property getter: - (id)otherAddressState;	// 0x33695
// declared property setter: - (void)setOtherAddressPostalCode:(id)code;	// 0x33671
// declared property getter: - (id)otherAddressPostalCode;	// 0x3365d
// declared property setter: - (void)setOtherAddressCountry:(id)country;	// 0x33639
// declared property getter: - (id)otherAddressCountry;	// 0x33625
// declared property setter: - (void)setOtherAddressCity:(id)city;	// 0x33601
// declared property getter: - (id)otherAddressCity;	// 0x335ed
// declared property setter: - (void)setOfficeLocation:(id)location;	// 0x335c9
// declared property getter: - (id)officeLocation;	// 0x335b5
// declared property setter: - (void)setMobileTelephoneNumber:(id)number;	// 0x33591
// declared property getter: - (id)mobileTelephoneNumber;	// 0x3357d
// declared property setter: - (void)setMiddleName:(id)name;	// 0x33559
// declared property getter: - (id)middleName;	// 0x33545
// declared property setter: - (void)setLastName:(id)name;	// 0x33521
// declared property getter: - (id)lastName;	// 0x3350d
// declared property setter: - (void)setJobTitle:(id)title;	// 0x334e9
// declared property getter: - (id)jobTitle;	// 0x334d5
// declared property setter: - (void)setHomeFaxNumber:(id)number;	// 0x334b1
// declared property getter: - (id)homeFaxNumber;	// 0x3349d
// declared property setter: - (void)setHomeTelephoneNumber:(id)number;	// 0x33479
// declared property getter: - (id)homeTelephoneNumber;	// 0x33465
// declared property setter: - (void)setHomeAddressStreet:(id)street;	// 0x33441
// declared property getter: - (id)homeAddressStreet;	// 0x3342d
// declared property setter: - (void)setHomeAddressState:(id)state;	// 0x33409
// declared property getter: - (id)homeAddressState;	// 0x333f5
// declared property setter: - (void)setHomeAddressPostalCode:(id)code;	// 0x333d1
// declared property getter: - (id)homeAddressPostalCode;	// 0x333bd
// declared property setter: - (void)setHomeAddressCountry:(id)country;	// 0x33399
// declared property getter: - (id)homeAddressCountry;	// 0x33385
// declared property setter: - (void)setHomeAddressCity:(id)city;	// 0x33361
// declared property getter: - (id)homeAddressCity;	// 0x3334d
// declared property setter: - (void)setHome2TelephoneNumber:(id)number;	// 0x33329
// declared property getter: - (id)home2TelephoneNumber;	// 0x33315
// declared property setter: - (void)setFirstName:(id)name;	// 0x332f1
// declared property getter: - (id)firstName;	// 0x332dd
// declared property setter: - (void)setFileAs:(id)as;	// 0x332b9
// declared property getter: - (id)fileAs;	// 0x332a5
// declared property setter: - (void)setEmail3Address:(id)address;	// 0x33281
// declared property getter: - (id)email3Address;	// 0x3326d
// declared property setter: - (void)setEmail2Address:(id)address;	// 0x33249
// declared property getter: - (id)email2Address;	// 0x33235
// declared property setter: - (void)setEmail1Address:(id)address;	// 0x33211
// declared property getter: - (id)email1Address;	// 0x331fd
// declared property setter: - (void)setDepartment:(id)department;	// 0x331d9
// declared property getter: - (id)department;	// 0x331c5
// declared property setter: - (void)setCompanyName:(id)name;	// 0x331a1
// declared property getter: - (id)companyName;	// 0x3318d
// declared property setter: - (void)setCarTelephoneNumber:(id)number;	// 0x33169
// declared property getter: - (id)carTelephoneNumber;	// 0x33155
// declared property setter: - (void)setChildren:(id)children;	// 0x33131
// declared property getter: - (id)children;	// 0x3311d
// declared property setter: - (void)setCategories:(id)categories;	// 0x330f9
// declared property getter: - (id)categories;	// 0x330e5
// declared property setter: - (void)setBusinessTelephoneNumber:(id)number;	// 0x330c1
// declared property getter: - (id)businessTelephoneNumber;	// 0x330ad
// declared property setter: - (void)setBusinessFaxNumber:(id)number;	// 0x33089
// declared property getter: - (id)businessFaxNumber;	// 0x33075
// declared property setter: - (void)setBusinessAddressStreet:(id)street;	// 0x33051
// declared property getter: - (id)businessAddressStreet;	// 0x3303d
// declared property setter: - (void)setBusinessAddressState:(id)state;	// 0x33019
// declared property getter: - (id)businessAddressState;	// 0x33005
// declared property setter: - (void)setBusinessAddressPostalCode:(id)code;	// 0x32fe1
// declared property getter: - (id)businessAddressPostalCode;	// 0x32fcd
// declared property setter: - (void)setBusinessAddressCountry:(id)country;	// 0x32fa9
// declared property getter: - (id)businessAddressCountry;	// 0x32f95
// declared property setter: - (void)setBusinessAddressCity:(id)city;	// 0x32f71
// declared property getter: - (id)businessAddressCity;	// 0x32f5d
// declared property setter: - (void)setBusiness2TelephoneNumber:(id)number;	// 0x32f39
// declared property getter: - (id)business2TelephoneNumber;	// 0x32f25
// declared property setter: - (void)setBodyTruncated:(BOOL)truncated;	// 0x32f15
// declared property getter: - (BOOL)bodyTruncated;	// 0x32f05
// declared property setter: - (void)setBodySize:(int)size;	// 0x32ef5
// declared property getter: - (int)bodySize;	// 0x32ee5
// declared property getter: - (id)body;	// 0x32ed5
// declared property setter: - (void)setBirthday:(id)birthday;	// 0x32eb1
// declared property getter: - (id)birthday;	// 0x32e9d
// declared property setter: - (void)setAssistantTelephoneNumber:(id)number;	// 0x32e79
// declared property getter: - (id)assistantTelephoneNumber;	// 0x32e65
// declared property setter: - (void)setAssistantName:(id)name;	// 0x32e41
// declared property getter: - (id)assistantName;	// 0x32e2d
// declared property setter: - (void)setAnniversary:(id)anniversary;	// 0x32e09
// declared property getter: - (id)anniversary;	// 0x32df5
- (BOOL)deleteFromContainer:(void *)container;	// 0x32ddd
- (BOOL)saveServerIDToExistingItem;	// 0x32dc5
- (BOOL)loadLocalItemWithAccount:(id)account;	// 0x32dad
- (void)setLocalItem:(void *)item;	// 0x32d9d
- (BOOL)saveAfterMapWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x32d99
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x32d35
- (void)encodeWithCoder:(id)coder;	// 0x32cb9
- (id)initWithCoder:(id)coder;	// 0x32c39
// declared property setter: - (void)setBody:(id)body;	// 0x32bcd
- (id)description;	// 0x32a31
- (void)setBodyTruncatedNumber:(id)number;	// 0x32a01
- (void)setBodySizeNumber:(id)number;	// 0x329d1
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x32939
- (void)dealloc;	// 0x32421
- (void)postProcessApplicationData;	// 0x305c1
- (void)setEmailFromAppData:(int)appData setter:(SEL)setter;	// 0x30531
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x2f52d
- (BOOL)deleteFromAddressBook;	// 0x2f461
- (void)loadClientIDs;	// 0x2f401
- (BOOL)saveServerIDToContact;	// 0x2f3bd
- (BOOL)loadABRecord;	// 0x2f221
- (void)setABRecord:(void *)record;	// 0x2f1e5
- (BOOL)saveToAddressBookWithExistingRecord:(void *)existingRecord inSource:(void *)source shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge storeExternalRep:(BOOL)rep;	// 0x2ea35
- (BOOL)_saveExternalRepToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties storeExternalRep:(BOOL)rep;	// 0x2e529
- (BOOL)_saveIMsToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x2e10d
- (BOOL)_saveURLsToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x2df91
- (BOOL)_saveEmailsToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x2dc39
- (BOOL)_saveStreetAddressesToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x2d615
- (BOOL)_savePhoneNumbersToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x2ccb9
- (BOOL)_saveRelatedNamesToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x2ca61
- (BOOL)_saveDatesToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x2c8d9
- (id)initWithABRecord:(void *)abrecord serverID:(id)anId;	// 0x2c825
- (void)_loadAttributesFromABRecord:(void *)abrecord;	// 0x2c311
- (void)_reconstructFileAsField;	// 0x2bc91
- (void)_detectFileAsAutoConstruction;	// 0x2b12d
- (BOOL)_setExternalRepWithExistingRecord:(void *)existingRecord;	// 0x2ad09
- (BOOL)_setIMsWithExistingRecord:(void *)existingRecord;	// 0x2ac1d
- (BOOL)_setURLsWithExistingRecord:(void *)existingRecord;	// 0x2ab4d
- (BOOL)_setEmailsWithExistingRecord:(void *)existingRecord;	// 0x2aaa1
- (BOOL)_setStreetAddressesWithExistingRecord:(void *)existingRecord;	// 0x2a729
- (BOOL)_setPhoneNumbersWithExistingRecord:(void *)existingRecord;	// 0x2a3f9
- (BOOL)_setRelatedNamesWithExistingRecord:(void *)existingRecord;	// 0x2a2bd
- (BOOL)_setDatesWithExistingRecord:(void *)existingRecord;	// 0x2a1d9
- (void)_setImageOnContactFromPerson:(void *)person;	// 0x2a121
- (int)dataclass;	// 0x2a11d
- (id)asParseRules;	// 0x29cb9
- (id)_transformedDateForActiveSync:(id)activeSync;	// 0x29c21
- (id)_transformedDateForABFramework:(id)abframework;	// 0x29be5
@end
