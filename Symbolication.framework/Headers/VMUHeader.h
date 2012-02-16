/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */




@interface VMUHeader : NSObject {
}
+ (id)extractMachOHeadersFromHeader:(id)header matchingArchitecture:(id)architecture considerArchives:(BOOL)archives;	// 0x76c4
+ (id)headerWithMemory:(id)memory address:(unsigned long long)address name:(id)name path:(id)path timestamp:(id)timestamp;	// 0x75d0
+ (id)headerWithUniverse:(id)universe memory:(id)memory name:(id)name path:(id)path timestamp:(id)timestamp;	// 0x78a4
- (BOOL)isFat;	// 0x75a8
- (BOOL)isMachO;	// 0x75b0
- (BOOL)isMachO32;	// 0x75b8
- (BOOL)isMachO64;	// 0x75c0
- (BOOL)isArchive;	// 0x75c8
- (id)signature;	// 0x7678
@end
