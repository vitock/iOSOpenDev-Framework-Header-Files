/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import <BookmarkDAV/XXUnknownSuperclass.h>
#import <BookmarkDAV/CoreDAVLeafDataPayload.h>
#import <BookmarkDAV/NSXMLParserDelegate.h>

@class NSMutableString, NSURL, NSDictionary, NSData, CoreDAVErrorItem, NSString, NSArray;

@interface BookmarkDAVBookmark : XXUnknownSuperclass <CoreDAVLeafDataPayload, NSXMLParserDelegate> {
	NSURL *_bookmarkURL;	// 4 = 0x4
	NSURL *_serverID;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSString *_syncKey;	// 16 = 0x10
	NSMutableString *_appleAttributeString;	// 20 = 0x14
	NSDictionary *_appleAttributes;	// 24 = 0x18
	int _parseState;	// 28 = 0x1c
	int _ignoreLevel;	// 32 = 0x20
	CoreDAVErrorItem *_bulkUploadErrorItem;	// 36 = 0x24
}
@property(readonly, assign) NSArray *childrenOrder;
@property(readonly, assign) NSString *syncKey;	// G=0x2671; @synthesize=_syncKey
@property(readonly, assign) NSData *dataPayload;	// G=0x23f1; 
@property(retain) NSURL *serverID;	// G=0x2639; S=0x264d; @synthesize=_serverID
@property(retain) CoreDAVErrorItem *bulkUploadErrorItem;	// G=0x26bd; S=0x26d1; @synthesize=_bulkUploadErrorItem
@property(readonly, assign) NSDictionary *appleAttributes;	// G=0x26a9; @synthesize=_appleAttributes
@property(readonly, assign) NSString *name;	// G=0x2695; @synthesize=_name
@property(readonly, assign) NSURL *bookmarkURL;	// G=0x2681; @synthesize=_bookmarkURL
// declared property setter: - (void)setBulkUploadErrorItem:(id)item;	// 0x26d1
// declared property getter: - (id)bulkUploadErrorItem;	// 0x26bd
// declared property getter: - (id)appleAttributes;	// 0x26a9
// declared property getter: - (id)name;	// 0x2695
// declared property getter: - (id)bookmarkURL;	// 0x2681
// declared property getter: - (id)syncKey;	// 0x2671
// declared property setter: - (void)setServerID:(id)anId;	// 0x264d
// declared property getter: - (id)serverID;	// 0x2639
// declared property getter: - (id)dataPayload;	// 0x23f1
- (void)setPropertiesFromXBEL:(id)xbel;	// 0x22b1
- (void)parser:(id)parser foundCDATA:(id)cdata;	// 0x2105
- (void)parser:(id)parser foundCharacters:(id)characters;	// 0x201d
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x1fc1
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x1dd9
- (void)dealloc;	// 0x1d15
- (id)initWithBookmarkURL:(id)bookmarkURL serverID:(id)anId name:(id)name syncKey:(id)key appleAttributes:(id)attributes;	// 0x1c49
- (id)initWithURL:(id)url eTag:(id)tag dataPayload:(id)payload inContainerWithURL:(id)url4 withAccountInfoProvider:(id)accountInfoProvider;	// 0x1bbd
@end
