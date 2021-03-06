/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibraryNoUI.framework/ToneLibraryNoUI
 */



@class NSString;

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __TLTextToneInfo__
#define __TLTextToneInfo__ 1
@interface TLTextToneInfo : NSObject {
	unsigned long _previewSound;	// 4 = 0x4
	unsigned long _actualSound;	// 8 = 0x8
	NSString *_filePath;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *filePath;	// G=0x1895; @synthesize=_filePath
@property(readonly, assign, nonatomic) unsigned long actualSound;	// G=0x1885; @synthesize=_actualSound
@property(readonly, assign, nonatomic) unsigned long previewSound;	// G=0x1875; @synthesize=_previewSound
// declared property getter: - (id)filePath;	// 0x1895
// declared property getter: - (unsigned long)actualSound;	// 0x1885
// declared property getter: - (unsigned long)previewSound;	// 0x1875
- (void)dealloc;	// 0x1829
- (id)initWithPreviewSound:(unsigned long)previewSound actualSound:(unsigned long)sound filePath:(id)path;	// 0x17b5
@end
#endif
