/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVOctetStreamParser.h>

@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser {
	NSFileHandle *_fileHandle;	// 12 = 0xc
}
@property(retain) NSFileHandle *fileHandle;	// G=0x269a1; S=0x269b5; @synthesize=_fileHandle
// declared property setter: - (void)setFileHandle:(id)handle;	// 0x269b5
// declared property getter: - (id)fileHandle;	// 0x269a1
- (BOOL)processData:(id)data forTask:(id)task;	// 0x26971
- (void)dealloc;	// 0x26925
- (id)initWithFileHandle:(id)fileHandle;	// 0x268dd
@end
