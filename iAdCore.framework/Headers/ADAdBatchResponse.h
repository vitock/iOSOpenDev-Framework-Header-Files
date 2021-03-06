/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import <iAdCore/ADAdBatchResponse.h>
#import <iAdCore/XXUnknownSuperclass.h>

@class NSString, ADAdDefaultsOverrides, NSMutableArray;

@interface ADAdBatchResponse : XXUnknownSuperclass {
	BOOL _hasError;	// 4 = 0x4
	int _error;	// 8 = 0x8
	NSString *_batchId;	// 12 = 0xc
	NSMutableArray *_ads;	// 16 = 0x10
	BOOL _hasSupplyMetrics;	// 20 = 0x14
	BOOL _supplyMetrics;	// 21 = 0x15
	ADAdDefaultsOverrides *_overrideDefaults;	// 24 = 0x18
}
@property(retain, nonatomic) ADAdDefaultsOverrides *overrideDefaults;	// G=0x11475; S=0x11485; @synthesize=_overrideDefaults
@property(readonly, assign, nonatomic) BOOL hasOverrideDefaults;	// G=0x10bf5; 
@property(assign, nonatomic) BOOL supplyMetrics;	// G=0x11465; S=0x10bd1; @synthesize=_supplyMetrics
@property(assign, nonatomic) BOOL hasSupplyMetrics;	// G=0x11445; S=0x11455; @synthesize=_hasSupplyMetrics
@property(retain, nonatomic) NSMutableArray *ads;	// G=0x11411; S=0x11421; @synthesize=_ads
@property(retain, nonatomic) NSString *batchId;	// G=0x113dd; S=0x113ed; @synthesize=_batchId
@property(readonly, assign, nonatomic) BOOL hasBatchId;	// G=0x10b15; 
@property(assign, nonatomic) int error;	// G=0x113cd; S=0x10af1; @synthesize=_error
@property(assign, nonatomic) BOOL hasError;	// G=0x113ad; S=0x113bd; @synthesize=_hasError
// declared property setter: - (void)setOverrideDefaults:(id)defaults;	// 0x11485
// declared property getter: - (id)overrideDefaults;	// 0x11475
// declared property getter: - (BOOL)supplyMetrics;	// 0x11465
// declared property setter: - (void)setHasSupplyMetrics:(BOOL)metrics;	// 0x11455
// declared property getter: - (BOOL)hasSupplyMetrics;	// 0x11445
// declared property setter: - (void)setAds:(id)ads;	// 0x11421
// declared property getter: - (id)ads;	// 0x11411
// declared property setter: - (void)setBatchId:(id)anId;	// 0x113ed
// declared property getter: - (id)batchId;	// 0x113dd
// declared property getter: - (int)error;	// 0x113cd
// declared property setter: - (void)setHasError:(BOOL)error;	// 0x113bd
// declared property getter: - (BOOL)hasError;	// 0x113ad
- (void)writeTo:(id)to;	// 0x11185
- (BOOL)readFrom:(id)from;	// 0x10f09
- (id)dictionaryRepresentation;	// 0x10c7d
- (id)description;	// 0x10c0d
// declared property getter: - (BOOL)hasOverrideDefaults;	// 0x10bf5
// declared property setter: - (void)setSupplyMetrics:(BOOL)metrics;	// 0x10bd1
- (id)adAtIndex:(unsigned)index;	// 0x10bb1
- (unsigned)adsCount;	// 0x10b91
- (void)addAd:(id)ad;	// 0x10b2d
// declared property getter: - (BOOL)hasBatchId;	// 0x10b15
// declared property setter: - (void)setError:(int)error;	// 0x10af1
- (void)dealloc;	// 0x10a85
@end

@interface ADAdBatchResponse (Swizzle)
+ (void)initialize;	// 0x92b9
@end
