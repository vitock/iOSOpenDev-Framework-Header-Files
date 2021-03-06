/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CorePDF-Structs.h>


@class UIPDFDocument, NSString, UIPDFSelection;

@interface UIPDFPage : NSObject {
	CGPDFPageRef _cgPage;	// 4 = 0x4
	unsigned _pageNumber;	// 8 = 0x8
	NSString *_stringInReadingOrder;	// 12 = 0xc
	UIPDFSelection *_selection;	// 16 = 0x10
@private
	UIPDFDocument *_document;	// 20 = 0x14
	unsigned _pageIndex;	// 24 = 0x18
}
@property(readonly, assign) CGPDFPageRef CGPage;	// G=0x52261; @synthesize=_cgPage
@property(readonly, assign) unsigned pageNumber;	// G=0x52251; @synthesize=_pageNumber
@property(readonly, assign) unsigned pageIndex;	// G=0x52241; @synthesize=_pageIndex
@property(retain) UIPDFSelection *selection;	// G=0x522f5; S=0x522d1; @synthesize=_selection
@property(readonly, assign) UIPDFDocument *document;	// G=0x52231; @synthesize=_document
@property(readonly, assign) CGRect cropBox;	// G=0x52501; 
- (id)initWithCGPDFPage:(CGPDFPageRef)cgpdfpage;	// 0x52271
- (void)dealloc;	// 0x52629
- (void)drawInRect:(CGRect)rect context:(CGContextRef)context;	// 0x5254d
- (CGSize)size;	// 0x5251d
// declared property getter: - (CGRect)cropBox;	// 0x52501
- (CGRect)cropBoxAccountForRotation;	// 0x524e5
- (CGRect)mediaBox;	// 0x524c9
- (CGRect)mediaBoxAccountForRotation;	// 0x524ad
- (unsigned)rotation;	// 0x52471
- (id)string;	// 0x52439
- (unsigned long)cfCompareFlagsFromNSOptions:(unsigned)nsoptions;	// 0x5220d
- (id)findString:(id)string fromSelection:(id)selection options:(unsigned)options;	// 0x5230d
// declared property getter: - (id)document;	// 0x52231
// declared property getter: - (id)selection;	// 0x522f5
// declared property setter: - (void)setSelection:(id)selection;	// 0x522d1
// declared property getter: - (unsigned)pageIndex;	// 0x52241
// declared property getter: - (unsigned)pageNumber;	// 0x52251
// declared property getter: - (CGPDFPageRef)CGPage;	// 0x52261
@end
