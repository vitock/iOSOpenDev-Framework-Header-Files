/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/WebKit-Structs.h>
#import <WebKit/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface WebDeviceOrientationInternal : XXUnknownSuperclass {
@private
	RefPtr<WebCore::DeviceOrientation> m_orientation;	// 4 = 0x4
}
- (id)initWithCoreDeviceOrientation:(PassRefPtr<WebCore::DeviceOrientation>)coreDeviceOrientation;	// 0x8675d
- (id).cxx_construct;	// 0x86749
- (void).cxx_destruct;	// 0x867bd
@end
