/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CalDAV/XXUnknownSuperclass.h>


@interface XXUnknownSuperclass (CALExtensions)
+ (id)davCompatibleFilenameForFilename:(id)filename;	// 0x9a39
+ (id)iDiskSmallNameCompatibleNameForFilename:(id)filename;	// 0x9b11
- (id)queryParameters;	// 0xa4cd
- (id)URLWithUsername:(id)username withPassword:(id)password;	// 0x9c51
- (id)URLByRemovingLastPathComponent;	// 0x95fd
- (id)lastPathComponent;	// 0x96f1
- (id)initWithScheme:(id)scheme host:(id)host port:(int)port path:(id)path;	// 0x9739
- (id)unquotedPassword;	// 0x9881
- (id)serverURL;	// 0x98ad
- (BOOL)isEqualToURL:(id)url;	// 0x997d
- (id)pathWithoutTrailingRemovingSlash;	// 0x99b5
- (id)pathWithoutDecodingAndRemovingTrailingSlash;	// 0xa681
@end

@interface XXUnknownSuperclass (CALExtensions)
+ (id)nonRetainingArray;	// 0xa635
- (void)removeAllObjectsWithClass:(Class)aClass;	// 0xa3c5
@end

@interface XXUnknownSuperclass (CALExtensions)
- (id)allObjectsWithClass:(Class)aClass;	// 0xa2f1
@end

@interface XXUnknownSuperclass (CALExtensions)
- (id)allObjectsWithClass:(Class)aClass;	// 0xa21d
- (BOOL)containsObjectIdenticalTo:(id)to;	// 0x95d9
@end

@interface XXUnknownSuperclass (CALExtensions)
- (id)mutableCopyWithElementsCopy;	// 0xa0f5
@end

@interface XXUnknownSuperclass (CalendarExtensions)
+ (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation;	// 0xa0ad
- (id)quote;	// 0x9f25
- (id)trimWhiteSpace;	// 0xa065
- (id)trimFinalComma;	// 0x91bd
- (id)trimFirstComma;	// 0x921d
- (id)trimCommas;	// 0x9269
- (id)trimFinalChar:(unsigned short)aChar;	// 0x9291
- (id)trimFirstChar:(unsigned short)aChar;	// 0x92fd
- (id)trimChar:(unsigned short)aChar;	// 0x9349
- (id)unquote;	// 0x9fc5
- (id)searchAndReplaceString:(id)string withString:(id)string2;	// 0x9375
- (id)safeFilename;	// 0x94c5
- (id)removeSlashIfNeeded;	// 0x953d
- (id)appendSlashIfNeeded;	// 0x9591
@end

@interface XXUnknownSuperclass (CalendarExtensions)
- (void)replaceOccurrencesOfString:(id)string withString:(id)string2;	// 0x9011
- (void)searchAndReplaceInString:(id)string withString:(id)string2;	// 0x905d
@end

@interface XXUnknownSuperclass (CalendarPathExtensions)
+ (id)stringWithContentsOfFile:(id)file usingEncoding:(unsigned)encoding;	// 0x9e9d
@end

@interface XXUnknownSuperclass (CALIDExtensions)
- (id)stringByEncodingSlashes;	// 0x9c09
- (id)stringByDecodingSlashes;	// 0x9e5d
@end

@interface XXUnknownSuperclass (CALExtensions)
+ (id)ellipsisString;	// 0x8fdd
@end

@interface XXUnknownSuperclass (CALExtensions)
- (BOOL)isNull;	// 0x8fad
@end

@interface XXUnknownSuperclass (DAVExtensions)
+ (int)classicPortForScheme:(id)scheme;	// 0xa965
+ (id)URLWithScheme:(id)scheme host:(id)host port:(int)port uri:(id)uri;	// 0xa9b5
+ (id)URLWithDirtyString:(id)dirtyString;	// 0xaa8d
- (id)initWithDirtyString:(id)dirtyString;	// 0xad35
- (id)uri;	// 0xafe5
- (id)URLWithUsername:(id)username;	// 0xab6d
- (id)URLWithoutUsername;	// 0xa815
- (id)URLWithoutPassword;	// 0xa8c9
- (BOOL)absoluteURLisEqual:(id)equal;	// 0xa90d
@end

@interface XXUnknownSuperclass (DAVExtensions)
- (id)stringByXMLUnquoting;	// 0xa6a9
- (id)stringByURLQuotingPaths;	// 0xaad5
- (id)stringByURLQuoting;	// 0xab21
- (id)stringByURLUnquoting;	// 0xad01
@end

@interface XXUnknownSuperclass (CalDAVPrincipalSearchSupport)
- (int)wellKnownPrincipalSearchType;	// 0x17a41
@end
