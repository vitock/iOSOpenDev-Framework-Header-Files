/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/XXUnknownSuperclass.h>

@class NSData;

@interface XXUnknownSuperclass (_FTServerBagAdditions)
- (id)_cacheTime;	// 0x73c5
@end

@interface XXUnknownSuperclass (_FTServerBagAdditions)
- (id)_cacheTime;	// 0x73ed
@end

@interface XXUnknownSuperclass (FTAPSOutgoingMessage_Additions)
- (id)_FTFilteredArrayForAPS;	// 0x15db1
- (id)_IDsFromURIs;	// 0x15cb1
- (id)_URIsByTrimmingBindings:(id)bindings;	// 0x15bc1
- (id)_URIsFromIDs;	// 0x15a99
@end

@interface XXUnknownSuperclass (FTAPSOutgoingMessage_Additions)
- (id)_FTFilteredDictionaryForAPS;	// 0x15f5d
@end

@interface XXUnknownSuperclass (FaceTimeStringAdditions)
@property(readonly, assign, nonatomic) int _FTBestGuessFTIDType;	// G=0x1645d; 
@property(readonly, assign, nonatomic) int _FTIDType;	// G=0x1631d; 
@property(readonly, assign, nonatomic) NSData *_FTDataFromHexString;	// G=0x16179; 
@property(readonly, assign, nonatomic) NSData *_FTDataFromBase64String;	// G=0x16131; 
- (id)_FTNormalizedPhoneNumber;	// 0x164e9
- (id)_FTIDFromFTIDType:(int)ftidtype;	// 0x164b5
- (id)_URIFromFTIDType:(int)ftidtype;	// 0x16481
// declared property getter: - (int)_FTBestGuessFTIDType;	// 0x1645d
- (id)_URIFromPhoneNumber;	// 0x1641d
- (id)_URIFromEmail;	// 0x163dd
// declared property getter: - (int)_FTIDType;	// 0x1631d
- (id)_FTIDFromPhoneNumber;	// 0x162dd
- (id)_FTIDFromEmail;	// 0x162ad
- (id)_FTStripFTIDPrefix;	// 0x1624d
// declared property getter: - (id)_FTDataFromHexString;	// 0x16179
// declared property getter: - (id)_FTDataFromBase64String;	// 0x16131
@end

@interface XXUnknownSuperclass (CompressionAdditions)
- (id)_FTGzippedData;	// 0x16745
- (id)_FTOptionallyDecompressData;	// 0x16725
- (id)_FTDecompressData;	// 0x165a9
- (id)_FTStringFromBaseData;	// 0x16599
@end
