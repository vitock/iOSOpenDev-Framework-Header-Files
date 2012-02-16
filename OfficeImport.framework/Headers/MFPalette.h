/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFObject.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFPalette : XXUnknownSuperclass <MFObject> {
@private
	NSMutableArray *m_colours;	// 4 = 0x4
}
+ (id)paletteWithColours:(id)colours;	// 0x17b3e5
- (id)init;	// 0x96f79
- (id)initWithColours:(id)colours;	// 0x17b421
- (void)dealloc;	// 0x922dd
- (int)selectInto:(id)into;	// 0x17b511
- (BOOL)setEntries:(int)entries :(id)arg2;	// 0x2c826d
- (BOOL)resize:(int)resize;	// 0x2c8191
- (id)getColour:(int)colour;	// 0x2c8121
@end
