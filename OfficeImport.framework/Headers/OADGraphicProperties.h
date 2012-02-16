/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADProperties3DParent.h>
#import <OfficeImport/OADDrawableProperties.h>
#import <OfficeImport/OADEffectsParent.h>

@class OADScene3D, OADStroke, OADShape3D, NSArray, OADFill;

__attribute__((visibility("hidden")))
@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
@private
	OADFill *mFill;	// 28 = 0x1c
	NSArray *mEffects;	// 32 = 0x20
	OADScene3D *mScene3D;	// 36 = 0x24
	OADShape3D *mShape3D;	// 40 = 0x28
	OADStroke *mStroke;	// 44 = 0x2c
	unsigned mHasIsBehindText : 1;	// 48 = 0x30
	unsigned mIsBehindText : 1;	// 48 = 0x30
}
@property(retain) id fill;	// G=0x2b75; S=0x7aa75; converted property
@property(retain) id effects;	// G=0x88845; S=0x7d4fd; converted property
@property(retain) id scene3D;	// G=0x2a32a9; S=0xbe2a1; converted property
@property(retain) id shape3D;	// G=0x2a3279; S=0xbe3f1; converted property
@property(retain) id stroke;	// G=0x34e9; S=0x7d0b9; converted property
@property(assign) BOOL isBehindText;	// G=0x149afd; S=0xbe431; converted property
- (id)initWithDefaults;	// 0xbdc8d
- (void)dealloc;	// 0x8c789
- (void)setParent:(id)parent;	// 0xa3bd
// converted property getter: - (id)fill;	// 0x2b75
// converted property setter: - (void)setFill:(id)fill;	// 0x7aa75
- (BOOL)hasFill;	// 0x2ba5
// converted property getter: - (id)effects;	// 0x88845
// converted property setter: - (void)setEffects:(id)effects;	// 0x7d4fd
- (BOOL)hasEffects;	// 0x8880d
// converted property getter: - (id)scene3D;	// 0x2a32a9
// converted property setter: - (void)setScene3D:(id)d;	// 0xbe2a1
- (BOOL)hasScene3D;	// 0x88875
// converted property getter: - (id)shape3D;	// 0x2a3279
// converted property setter: - (void)setShape3D:(id)d;	// 0xbe3f1
- (BOOL)hasShape3D;	// 0x888ad
// converted property getter: - (id)stroke;	// 0x34e9
// converted property setter: - (void)setStroke:(id)stroke;	// 0x7d0b9
- (BOOL)hasStroke;	// 0x3519
// converted property getter: - (BOOL)isBehindText;	// 0x149afd
// converted property setter: - (void)setIsBehindText:(BOOL)text;	// 0xbe431
- (BOOL)hasIsBehindText;	// 0x891c9
- (void)removeUnnecessaryOverrides;	// 0x88409
- (unsigned)hash;	// 0x2a3145
- (BOOL)isEqual:(id)equal;	// 0x2a2dd1
@end
