/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/DOMEventListener.h>
#import <ChatKit/CKTextContentView.h>
#import <ChatKit/ChatKit-Structs.h>


@interface CKRichContentView : CKTextContentView <DOMEventListener> {
	id _richContentDelegate;	// 124 = 0x7c
}
@property(assign, nonatomic) id richContentDelegate;	// G=0x5e0f1; S=0x5e101; @synthesize=_richContentDelegate
- (id)initWithFrame:(CGRect)frame;	// 0x5e111
- (void)dealloc;	// 0x5e9e9
- (id)brElement;	// 0x5e991
- (id)nodeForImageSize:(CGSize)imageSize ID:(id)anId URL:(id)url;	// 0x5e849
- (id)createDocumentFragment;	// 0x5e7f9
- (void)_wvHelperThawSelectionTag;	// 0x5e761
- (void)_wvInsertHTML:(id)html;	// 0x5e585
- (void)_wvRegisterForDOMEvents;	// 0x5e51d
- (void)_wvUnregisterForDOMEvents;	// 0x5e4bd
- (void)handleEvent:(id)event;	// 0x5e371
- (id)DOMDocument;	// 0x5e329
- (id)html;	// 0x5e319
- (void)setHTML:(id)html;	// 0x5e281
- (void)insertHTML:(id)html;	// 0x5e215
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x5e161
// declared property getter: - (id)richContentDelegate;	// 0x5e0f1
// declared property setter: - (void)setRichContentDelegate:(id)delegate;	// 0x5e101
@end
