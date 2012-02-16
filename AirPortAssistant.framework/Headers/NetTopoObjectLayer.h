/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/XXUnknownSuperclass.h>

@class NSString, NSTimer, NSMutableArray, BubbleTextLayer;

__attribute__((visibility("hidden")))
@interface NetTopoObjectLayer : XXUnknownSuperclass {
	id _associatedNode;	// 48 = 0x30
	float _layoutScale;	// 52 = 0x34
	BOOL _smallSize;	// 56 = 0x38
	CGSize _boundsSizeConstraint;	// 60 = 0x3c
	CGImageRef _objectImage;	// 68 = 0x44
	BOOL _selectable;	// 72 = 0x48
	CGColorRef _selectionColor;	// 76 = 0x4c
	CGColorRef _labelUnselectedFillColor;	// 80 = 0x50
	CGColorRef _labelSelectedFillColor;	// 84 = 0x54
	CGColorRef _labelSelectedFillColor2;	// 88 = 0x58
	CGColorRef _labelUnselectedTextColor;	// 92 = 0x5c
	CGColorRef _labelSelectedTextColor;	// 96 = 0x60
	CGColorRef _secondaryLabelUnselectedTextColor;	// 100 = 0x64
	CGColorRef _secondaryLabelSelectedTextColor;	// 104 = 0x68
	CGRect _imageFrame;	// 108 = 0x6c
	CGRect _imageCroppedFrame;	// 124 = 0x7c
	CGSize _selectionSize;	// 140 = 0x8c
	NSString *_labelString;	// 148 = 0x94
	BubbleTextLayer *_labelLayer;	// 152 = 0x98
	NSString *_secondaryLabelString;	// 156 = 0x9c
	BubbleTextLayer *_secondaryLabelLayer;	// 160 = 0xa0
	CGImageRef _statusLights[4];	// 164 = 0xa4
	NSTimer *_statusLightTimer;	// 180 = 0xb4
	float _statusLightInterval;	// 184 = 0xb8
	unsigned _statusLightState;	// 188 = 0xbc
	unsigned _statusLightMode;	// 192 = 0xc0
	unsigned _row;	// 196 = 0xc4
	unsigned _column;	// 200 = 0xc8
	unsigned _number;	// 204 = 0xcc
	float _prelim;	// 208 = 0xd0
	float _mod;	// 212 = 0xd4
	float _change;	// 216 = 0xd8
	float _shift;	// 220 = 0xdc
	BOOL _isExpanded;	// 224 = 0xe0
	NetTopoObjectLayer *_contourThread;	// 228 = 0xe4
	NetTopoObjectLayer *_ancestor;	// 232 = 0xe8
	BOOL _selected;	// 236 = 0xec
	BOOL _ghosted;	// 237 = 0xed
	NetTopoObjectLayer *_parent;	// 240 = 0xf0
	NSMutableArray *_children;	// 244 = 0xf4
}
@property(assign, nonatomic) CGSize selectionSize;	// G=0x874c5; S=0x874dd; @synthesize=_selectionSize
@property(assign, nonatomic, getter=isGhosted) BOOL ghosted;	// @dynamic
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// @dynamic
@property(assign, nonatomic, getter=isSelectable) BOOL selectable;	// G=0x874f1; S=0x87501; @synthesize=_selectable
@property(assign, nonatomic) unsigned statusLightMode;	// G=0x85f85; S=0x860a1; 
// iOSOpenDev: removed retain: statusBadgeImage, statusLightImage, objectImage
@property(nonatomic) CGImageRef statusBadgeImage;	// G=0x85f39; S=0x85f5d; 
@property(nonatomic) CGImageRef statusLightImage;	// G=0x85eed; S=0x85f11; 
@property(nonatomic) CGImageRef objectImage;	// G=0x87491; S=0x874a1; @synthesize=_objectImage
@property(readonly, assign, nonatomic) unsigned numberOfChildren;	// G=0x855f9; 
@property(retain, nonatomic) NSMutableArray *children;	// G=0x8745d; S=0x8746d; @synthesize=_children
@property(readonly, assign, nonatomic) NetTopoObjectLayer *parentDevice;	// G=0x85589; 
@property(retain, nonatomic) NetTopoObjectLayer *parent;	// G=0x87429; S=0x87439; @synthesize=_parent
@property(retain, nonatomic) NSString *secondaryLabel;	// G=0x85ac1; S=0x85ad1; 
@property(retain, nonatomic) NSString *label;	// G=0x8592d; S=0x8593d; 
@property(retain, nonatomic) id associatedNode;	// G=0x873f5; S=0x87405; @synthesize=_associatedNode
@property(assign, nonatomic) NetTopoObjectLayer *ancestor;	// G=0x873d5; S=0x873e5; @synthesize=_ancestor
@property(assign, nonatomic) NetTopoObjectLayer *contourThread;	// G=0x873b5; S=0x873c5; @synthesize=_contourThread
@property(assign, nonatomic, getter=isExpanded) BOOL expanded;	// G=0x87395; S=0x873a5; @synthesize=_isExpanded
@property(assign, nonatomic) unsigned number;	// G=0x87375; S=0x87385; @synthesize=_number
@property(assign, nonatomic) float shift;	// G=0x87355; S=0x87365; @synthesize=_shift
@property(assign, nonatomic) float change;	// G=0x87335; S=0x87345; @synthesize=_change
@property(assign, nonatomic) float mod;	// G=0x87315; S=0x87325; @synthesize=_mod
@property(assign, nonatomic) float prelim;	// G=0x872f5; S=0x87305; @synthesize=_prelim
@property(assign, nonatomic) unsigned column;	// G=0x872d5; S=0x872e5; @synthesize=_column
@property(assign, nonatomic) unsigned row;	// G=0x872b5; S=0x872c5; @synthesize=_row
@property(assign, nonatomic) CGSize boundsSizeConstraint;	// G=0x85915; S=0x857f9; 
@property(assign, nonatomic) BOOL smallSize;	// G=0x87295; S=0x872a5; @synthesize=_smallSize
@property(assign, nonatomic) float layoutScale;	// G=0x861a1; S=0x8617d; @synthesize=_layoutScale
+ (BOOL)needsDisplayForKey:(id)key;	// 0x87115
// declared property setter: - (void)setSelectable:(BOOL)selectable;	// 0x87501
// declared property getter: - (BOOL)isSelectable;	// 0x874f1
// declared property setter: - (void)setSelectionSize:(CGSize)size;	// 0x874dd
// declared property getter: - (CGSize)selectionSize;	// 0x874c5
// declared property setter: - (void)setObjectImage:(CGImageRef)image;	// 0x874a1
// declared property getter: - (CGImageRef)objectImage;	// 0x87491
// declared property setter: - (void)setChildren:(id)children;	// 0x8746d
// declared property getter: - (id)children;	// 0x8745d
// declared property setter: - (void)setParent:(id)parent;	// 0x87439
// declared property getter: - (id)parent;	// 0x87429
// declared property setter: - (void)setAssociatedNode:(id)node;	// 0x87405
// declared property getter: - (id)associatedNode;	// 0x873f5
// declared property setter: - (void)setAncestor:(id)ancestor;	// 0x873e5
// declared property getter: - (id)ancestor;	// 0x873d5
// declared property setter: - (void)setContourThread:(id)thread;	// 0x873c5
// declared property getter: - (id)contourThread;	// 0x873b5
// declared property setter: - (void)setExpanded:(BOOL)expanded;	// 0x873a5
// declared property getter: - (BOOL)isExpanded;	// 0x87395
// declared property setter: - (void)setNumber:(unsigned)number;	// 0x87385
// declared property getter: - (unsigned)number;	// 0x87375
// declared property setter: - (void)setShift:(float)shift;	// 0x87365
// declared property getter: - (float)shift;	// 0x87355
// declared property setter: - (void)setChange:(float)change;	// 0x87345
// declared property getter: - (float)change;	// 0x87335
// declared property setter: - (void)setMod:(float)mod;	// 0x87325
// declared property getter: - (float)mod;	// 0x87315
// declared property setter: - (void)setPrelim:(float)prelim;	// 0x87305
// declared property getter: - (float)prelim;	// 0x872f5
// declared property setter: - (void)setColumn:(unsigned)column;	// 0x872e5
// declared property getter: - (unsigned)column;	// 0x872d5
// declared property setter: - (void)setRow:(unsigned)row;	// 0x872c5
// declared property getter: - (unsigned)row;	// 0x872b5
// declared property setter: - (void)setSmallSize:(BOOL)size;	// 0x872a5
// declared property getter: - (BOOL)smallSize;	// 0x87295
- (id)debugDescription;	// 0x87249
- (id)describeOne:(id)one uiLayer:(id)layer indent:(unsigned)indent;	// 0x871c9
- (CGRect)getFrameContainingAllSublayers;	// 0x86ff9
- (CGRect)getUserInteractionBounds;	// 0x86f3d
- (XXStruct_BUymIA)getConnectionAttachmentLocations;	// 0x86cd1
- (CGRect)getImageSelectionBounds;	// 0x86c35
- (void)drawInContext:(CGContextRef)context;	// 0x868c9
- (void)layoutSublayers;	// 0x861b1
// declared property getter: - (float)layoutScale;	// 0x861a1
// declared property setter: - (void)setLayoutScale:(float)scale;	// 0x8617d
// declared property setter: - (void)setStatusLightMode:(unsigned)mode;	// 0x860a1
- (void)updateStatusLight:(id)light;	// 0x85f95
// declared property getter: - (unsigned)statusLightMode;	// 0x85f85
// declared property setter: - (void)setStatusBadgeImage:(CGImageRef)image;	// 0x85f5d
// declared property getter: - (CGImageRef)statusBadgeImage;	// 0x85f39
// declared property setter: - (void)setStatusLightImage:(CGImageRef)image;	// 0x85f11
// declared property getter: - (CGImageRef)statusLightImage;	// 0x85eed
- (void)deallocStatusImages;	// 0x85e85
- (void)initializeStatusImages;	// 0x85c55
// declared property setter: - (void)setSecondaryLabel:(id)label;	// 0x85ad1
// declared property getter: - (id)secondaryLabel;	// 0x85ac1
// declared property setter: - (void)setLabel:(id)label;	// 0x8593d
// declared property getter: - (id)label;	// 0x8592d
// declared property getter: - (CGSize)boundsSizeConstraint;	// 0x85915
// declared property setter: - (void)setBoundsSizeConstraint:(CGSize)constraint;	// 0x857f9
- (void)removeChild:(id)child;	// 0x85795
- (void)addChild:(id)child;	// 0x85731
- (void)insertChild:(id)child atIndex:(unsigned)index;	// 0x856c1
- (id)lastChild;	// 0x85681
- (id)firstChild;	// 0x85669
- (id)childAtIndex:(unsigned)index;	// 0x8561d
// declared property getter: - (unsigned)numberOfChildren;	// 0x855f9
// declared property getter: - (id)parentDevice;	// 0x85589
- (void)dealloc;	// 0x85415
- (id)init;	// 0x8519d
@end
