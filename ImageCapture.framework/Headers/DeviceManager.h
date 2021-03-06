/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <ImageCapture/XXUnknownSuperclass.h>
#import <ImageCapture/ICDeviceManagerProtocol.h>

@class NSMutableDictionary, NSDictionary, DeviceManagerThread;

@interface DeviceManager : XXUnknownSuperclass <ICDeviceManagerProtocol> {
	DeviceManagerThread *_thread;	// 4 = 0x4
	NSDictionary *_deviceMatchingInfo;	// 8 = 0x8
	NSMutableDictionary *_devices;	// 12 = 0xc
}
- (id)init;	// 0x10035
- (void)dealloc;	// 0xfe6d
- (void)startRunning;	// 0xf615
- (void)stopRunning;	// 0xf675
- (int)openDevice:(id)device contextInfo:(void *)info;	// 0xf6f5
- (int)closeDevice:(id)device contextInfo:(void *)info;	// 0xf7bd
- (int)openSession:(id)session contextInfo:(void *)info;	// 0xf885
- (int)closeSession:(id)session contextInfo:(void *)info;	// 0xf94d
- (int)syncClock:(id)clock contextInfo:(void *)info;	// 0xfa15
- (int)getThumbnailOfFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0xfadd
- (int)getMetadataOfFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0xfbb9
- (int)deleteFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0xfc95
- (int)downloadFile:(id)file fromDevice:(id)device options:(id)options contextInfo:(void *)info;	// 0xfee1
- (int)eject:(id)eject;	// 0xfd71
- (void)openDeviceImp:(id)imp;	// 0xf45d
- (void)closeDeviceImp:(id)imp;	// 0xf461
- (void)openSessionImp:(id)imp;	// 0xf465
- (void)closeSessionImp:(id)imp;	// 0xf469
- (void)syncClockImp:(id)imp;	// 0xf46d
- (void)getThumbnailOfFileImp:(id)fileImp;	// 0xf471
- (void)getMetadataOfFileImp:(id)fileImp;	// 0xf475
- (void)deleteFileImp:(id)imp;	// 0xf479
- (void)downloadFileImp:(id)imp;	// 0xf47d
- (void)ejectImp:(id)imp;	// 0xf481
- (void)postCommandCompletionNotification:(id)notification;	// 0xfddd
- (void)postNotification:(id)notification;	// 0xfe25
@end
