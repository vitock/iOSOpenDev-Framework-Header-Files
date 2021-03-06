/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Preferences/PSRootController.h>

@class UIViewController, NSDictionary;

@interface PSSetupController : PSRootController {
	NSDictionary *_rootInfo;	// 244 = 0xf4
	UIViewController<PSController> *_parentController;	// 248 = 0xf8
	PSRootController *_parentRootController;	// 252 = 0xfc
}
@property(retain) id parentController;	// G=0x1435d; S=0x14771; converted property
- (id)init;	// 0x14375
- (void)dealloc;	// 0x14b59
- (void)handleURL:(id)url;	// 0x14b05
// converted property getter: - (id)parentController;	// 0x1435d
- (void)setupController;	// 0x1499d
- (void)viewWillDisappear:(BOOL)view;	// 0x1490d
- (void)viewDidDisappear:(BOOL)view;	// 0x1487d
- (void)pushController:(id)controller;	// 0x147f9
// converted property setter: - (void)setParentController:(id)controller;	// 0x14771
- (id)controller;	// 0x14745
- (void)dismiss;	// 0x14731
- (void)dismissAnimated:(BOOL)animated;	// 0x146a1
- (void)pushControllerOnParentWithSpecifier:(id)specifier;	// 0x14571
- (void)popControllerOnParent;	// 0x144f1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x14485
- (void)forwardInvocation:(id)invocation;	// 0x1445d
- (BOOL)usePopupStyle;	// 0x1436d
- (BOOL)popupStyleIsModal;	// 0x14371
- (void)statusBarWillChangeHeight:(id)statusBar;	// 0x143fd
@end
