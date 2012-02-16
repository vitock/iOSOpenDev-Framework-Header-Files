/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <SoftwareUpdateServices/NSCopying.h>
#import <SoftwareUpdateServices/XXUnknownSuperclass.h>
#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <SoftwareUpdateServices/NSCoding.h>


@interface SUDownloadMetadata : XXUnknownSuperclass <NSCoding, NSCopying> {
@private
	BOOL _autoDownload;	// 4 = 0x4
	BOOL _enabledFor2G;	// 5 = 0x5
	BOOL _enabledFor3G;	// 6 = 0x6
	BOOL _enabledForWifi;	// 7 = 0x7
	BOOL _enabledOnBatteryPower;	// 8 = 0x8
	BOOL _enforceWifiOnlyOverride;	// 9 = 0x9
	int _activeDownloadPolicy;	// 12 = 0xc
	int _downloadFeeAgreementStatus;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL enforceWifiOnlyOverride;	// G=0x12729; S=0x12739; @synthesize=_enforceWifiOnlyOverride
@property(assign, nonatomic) int downloadFeeAgreementStatus;	// G=0x12669; S=0x12679; @synthesize=_downloadFeeAgreementStatus
@property(assign, nonatomic, getter=isEnabledOnBatteryPower) BOOL enabledOnBatteryPower;	// G=0x12709; S=0x12719; @synthesize=_enabledOnBatteryPower
@property(assign, nonatomic, getter=isEnabledForWifi) BOOL enabledForWifi;	// G=0x126e9; S=0x126f9; @synthesize=_enabledForWifi
@property(assign, nonatomic, getter=isEnabledFor3G) BOOL enabledFor3G;	// G=0x126c9; S=0x126d9; @synthesize=_enabledFor3G
@property(assign, nonatomic, getter=isEnabledFor2G) BOOL enabledFor2G;	// G=0x126a9; S=0x126b9; @synthesize=_enabledFor2G
@property(assign, nonatomic) int activeDownloadPolicy;	// G=0x12689; S=0x12699; @synthesize=_activeDownloadPolicy
@property(assign, nonatomic, getter=isAutoDownload) BOOL autoDownload;	// G=0x12649; S=0x12659; @synthesize=_autoDownload
// declared property setter: - (void)setEnforceWifiOnlyOverride:(BOOL)override;	// 0x12739
// declared property getter: - (BOOL)enforceWifiOnlyOverride;	// 0x12729
// declared property setter: - (void)setEnabledOnBatteryPower:(BOOL)power;	// 0x12719
// declared property getter: - (BOOL)isEnabledOnBatteryPower;	// 0x12709
// declared property setter: - (void)setEnabledForWifi:(BOOL)wifi;	// 0x126f9
// declared property getter: - (BOOL)isEnabledForWifi;	// 0x126e9
// declared property setter: - (void)setEnabledFor3G:(BOOL)a3G;	// 0x126d9
// declared property getter: - (BOOL)isEnabledFor3G;	// 0x126c9
// declared property setter: - (void)setEnabledFor2G:(BOOL)a2G;	// 0x126b9
// declared property getter: - (BOOL)isEnabledFor2G;	// 0x126a9
// declared property setter: - (void)setActiveDownloadPolicy:(int)policy;	// 0x12699
// declared property getter: - (int)activeDownloadPolicy;	// 0x12689
// declared property setter: - (void)setDownloadFeeAgreementStatus:(int)status;	// 0x12679
// declared property getter: - (int)downloadFeeAgreementStatus;	// 0x12669
// declared property setter: - (void)setAutoDownload:(BOOL)download;	// 0x12659
// declared property getter: - (BOOL)isAutoDownload;	// 0x12649
- (unsigned)hash;	// 0x12581
- (BOOL)isEqual:(id)equal;	// 0x123d5
- (id)description;	// 0x122a1
- (id)_stringForBool:(BOOL)aBool;	// 0x12281
- (BOOL)isEnabledForNetworkType:(int)networkType;	// 0x12241
- (void)applyDownloadPolicy:(id)policy;	// 0x120ed
- (id)copyWithZone:(NSZone *)zone;	// 0x11fb5
- (void)encodeWithCoder:(id)coder;	// 0x11e89
- (id)initWithCoder:(id)coder;	// 0x11d15
- (id)init;	// 0x11cbd
- (void)dealloc;	// 0x11c91
@end