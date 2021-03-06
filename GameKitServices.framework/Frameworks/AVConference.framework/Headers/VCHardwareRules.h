/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/XXUnknownSuperclass.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCHardwareRules : XXUnknownSuperclass {
@private
	NSMutableDictionary *ruleSet;	// 4 = 0x4
	CFRunLoopSourceRef runLoopSource;	// 8 = 0x8
	int viceroyHardwarePowerSource;	// 12 = 0xc
	int encodeScore;	// 16 = 0x10
	int decodeScore;	// 20 = 0x14
	BOOL encodeHiDef;	// 24 = 0x18
	BOOL decodeHiDef;	// 25 = 0x19
}
@property(readonly, assign) int viceroyHardwarePowerSource;	// G=0x8c29d; @synthesize
@property(readonly, assign) int encodeScore;	// G=0x8c28d; @synthesize
@property(readonly, assign) int decodeScore;	// G=0x8c27d; @synthesize
@property(readonly, assign) BOOL encodeHiDef;	// G=0x8c26d; @synthesize
@property(readonly, assign) BOOL decodeHiDef;	// G=0x8c25d; @synthesize
+ (id)VCHardwareRulesSingleton;	// 0x8cd7d
- (id)init;	// 0x8ca79
- (void)dealloc;	// 0x8da7d
- (void)addRulesToDictionary;	// 0x8c7f5
- (void)addRuleToDictionaryForScore:(int)score frameWidth:(int)width frameHeight:(int)height frameRate:(float)rate;	// 0x8d86d
- (void)deleteRuleFromDictionaryForScore:(int)score;	// 0x8d75d
- (id)getSupportedEncodingSizesFromDictionary;	// 0x8c495
- (id)getSupportedDecodingSizesFromDictionary;	// 0x8c5ad
- (id)getSupportedEncodingRulesFromDictionary;	// 0x8c6c5
- (id)getSupportedDecodingRulesFromDictionary;	// 0x8c6e5
- (id)getSupportedRulesFromDictionaryForScore:(int)score;	// 0x8d4f9
- (int)getRuleFromDictionaryForScore:(int)score frameWidth:(int *)width frameHeight:(int *)height frameRate:(float *)rate;	// 0x8d291
- (int)getEncodingRuleFromDictionaryFrameWidth:(int *)dictionaryFrameWidth frameHeight:(int *)height frameRate:(float *)rate;	// 0x8c705
- (int)getDecodingRuleFromDictionaryFrameWidth:(int *)dictionaryFrameWidth frameHeight:(int *)height frameRate:(float *)rate;	// 0x8c73d
- (float)getBestFramerateForFrameWidth:(int)frameWidth frameHeight:(int)height isEncoding:(BOOL)encoding;	// 0x8cf8d
- (float)getBestEncodingFrameRateForFrameWidth:(int)frameWidth frameHeight:(int)height;	// 0x8c775
- (float)getBestDecodingFrameRateForFrameWidth:(int)frameWidth frameHeight:(int)height;	// 0x8c799
- (int)getHardwareScore;	// 0x8c7bd
- (id)getCPUTypeStringForMachineType:(int)machineType;	// 0x8c241
- (BOOL)isMacBookAirModel;	// 0x8c245
- (int)getScoreFromHardwareInfo:(id)hardwareInfo cpuFamily:(int)family frequency:(int)frequency numProcs:(int)procs;	// 0x8cedd
- (void)handlePowerSourceChange;	// 0x8c249
- (BOOL)isGVAEncoderAvailable;	// 0x8c24d
- (BOOL)canDoHiDefEncoding;	// 0x8c251
- (BOOL)canDoHiDefDecoding;	// 0x8c255
- (int)getCPUFamilyType;	// 0x8c259
- (id)getMachineName;	// 0x8ce85
// declared property getter: - (BOOL)decodeHiDef;	// 0x8c25d
// declared property getter: - (BOOL)encodeHiDef;	// 0x8c26d
// declared property getter: - (int)decodeScore;	// 0x8c27d
// declared property getter: - (int)encodeScore;	// 0x8c28d
// declared property getter: - (int)viceroyHardwarePowerSource;	// 0x8c29d
@end
