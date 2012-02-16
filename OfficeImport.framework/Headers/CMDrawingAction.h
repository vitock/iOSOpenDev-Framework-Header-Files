/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface CMDrawingAction : XXUnknownSuperclass {
@private
	int _type;	// 4 = 0x4
	id _value;	// 8 = 0x8
	float _floatValue;	// 12 = 0xc
}
@property(readonly, assign) int type;	// G=0xcc709; converted property
@property(readonly, retain) id value;	// G=0xcc719; converted property
@property(readonly, assign) float floatValue;	// G=0xcfff9; converted property
- (id)initWithType:(int)type andValue:(id)value;	// 0xc98ed
- (id)initWithType:(int)type andFloatValue:(float)value;	// 0xcfa95
- (void)dealloc;	// 0xcc84d
// converted property getter: - (int)type;	// 0xcc709
// converted property getter: - (id)value;	// 0xcc719
// converted property getter: - (float)floatValue;	// 0xcfff9
- (id)description;	// 0x2f46f9
@end
