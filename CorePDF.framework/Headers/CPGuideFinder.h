/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPDisposable.h>

#import <CorePDF/CorePDF-Structs.h>

@class CPCluster, NSMutableArray, CPZone;

@interface CPGuideFinder : NSObject <CPDisposable> {
	CPZone *contentZone;	// 4 = 0x4
	unsigned countOfWordsInZone;	// 8 = 0x8
	double *anchorArray;	// 12 = 0xc
	double *rightHandSideArray;	// 16 = 0x10
	XXStruct_pkaZhB *crossingWordArray;	// 20 = 0x14
	CPCluster *anchors;	// 24 = 0x18
	CPCluster *rightHandSides;	// 28 = 0x1c
	float medianFontSizeOfFirstCharacter;	// 32 = 0x20
	float medianFontSizeOfLastCharacter;	// 36 = 0x24
	NSMutableArray *gutters;	// 40 = 0x28
	NSMutableArray *leftGuides;	// 44 = 0x2c
	NSMutableArray *rightGuides;	// 48 = 0x30
}
@property(readonly, assign) float medianFontSizeOfFirstCharacter;	// G=0x3d449; converted property
@property(readonly, assign) float medianFontSizeOfLastCharacter;	// G=0x3d459; converted property
@property(readonly, retain) NSMutableArray *gutters;	// G=0x3d4c5; converted property
@property(readonly, retain) NSMutableArray *leftGuides;	// G=0x3d4d5; converted property
@property(readonly, retain) NSMutableArray *rightGuides;	// G=0x3d4e5; converted property
+ (BOOL)guideSeparates:(id)separates from:(id)from;	// 0x3d8e5
+ (BOOL)gutterSeparates:(id)separates from:(id)from;	// 0x3d895
+ (void)reclusterPreservingAlignment:(id)alignment;	// 0x3d785
+ (void)reclusterBetweenGuides:(id)guides;	// 0x3d5b9
- (id)initWithContentZone:(id)contentZone;	// 0x3d4f5
- (void)dispose;	// 0x3f0e9
- (void)finalize;	// 0x3f0a9
- (void)dealloc;	// 0x3effd
// converted property getter: - (float)medianFontSizeOfFirstCharacter;	// 0x3d449
// converted property getter: - (float)medianFontSizeOfLastCharacter;	// 0x3d459
- (void)getWordEdges;	// 0x3eeb9
- (BOOL)addStripTo:(id)to bottom:(float)bottom left:(float)left top:(float)top right:(float)right;	// 0x3ed95
- (void)setAlignForWordWithExtent:(XXStruct_pkaZhB *)extent stripArray:(id)array stripMax:(double)max;	// 0x3d469
- (void)subdivideStripInto:(id)into from:(double)from to:(double)to borderedBy:(XXStruct_pkaZhB *)by ofCount:(unsigned)count crossedBy:(XXStruct_pkaZhB *)by6 ofCount:(unsigned)count7;	// 0x3e96d
- (void)subdivideGutterFrom:(unsigned)from to:(unsigned)to;	// 0x3e7f9
- (void)subdivideLeftGuideAt:(unsigned)at;	// 0x3e6ad
- (void)subdivideRightGuideAt:(unsigned)at;	// 0x3e561
- (void)findWordEdgeClusters;	// 0x3e2d9
- (void)findGutters;	// 0x3e141
- (void)findGuides;	// 0x3e075
- (void)splitTextLinesAtBorderWords;	// 0x3de39
- (void)splitTextLinesBetweenBorderWords;	// 0x3dbb1
- (void)splitTextLines;	// 0x3db85
- (void)markTextLines;	// 0x3d9d1
- (BOOL)hasGutters;	// 0x3d99d
// converted property getter: - (id)gutters;	// 0x3d4c5
- (BOOL)hasLeftGuides;	// 0x3d969
// converted property getter: - (id)leftGuides;	// 0x3d4d5
- (BOOL)hasRightGuides;	// 0x3d935
// converted property getter: - (id)rightGuides;	// 0x3d4e5
@end
