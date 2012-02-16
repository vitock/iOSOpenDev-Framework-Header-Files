/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/XXUnknownSuperclass.h>

@class NSMutableDictionary;

@interface CKMediaObjectManager : XXUnknownSuperclass {
	NSMutableDictionary *_mediaObjectDict;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x5014d
- (void)_registerAllMediaTypes;	// 0x50275
- (id)newMediaObjectForFilename:(id)filename mimeType:(id)type exportedFilename:(id)filename3;	// 0x50015
- (id)newMediaObjectForData:(id)data mimeType:(id)type exportedFilename:(id)filename;	// 0x50089
- (Class)mediaObjectClassForPath:(id)path;	// 0x500fd
- (Class)mediaObjectClassForMIMEType:(id)mimetype;	// 0x501f1
- (void)dealloc;	// 0x501a5
@end
