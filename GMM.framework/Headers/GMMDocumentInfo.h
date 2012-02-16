/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>

@class NSString;

@interface GMMDocumentInfo : XXUnknownSuperclass {
	NSString *_author;	// 4 = 0x4
	NSString *_attributionUrl;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *attributionUrl;	// G=0x130a5; S=0x130b5; @synthesize=_attributionUrl
@property(readonly, assign, nonatomic) BOOL hasAttributionUrl;	// G=0x12e1d; 
@property(retain, nonatomic) NSString *author;	// G=0x13071; S=0x13081; @synthesize=_author
@property(readonly, assign, nonatomic) BOOL hasAuthor;	// G=0x12e05; 
// declared property setter: - (void)setAttributionUrl:(id)url;	// 0x130b5
// declared property getter: - (id)attributionUrl;	// 0x130a5
// declared property setter: - (void)setAuthor:(id)author;	// 0x13081
// declared property getter: - (id)author;	// 0x13071
- (void)writeTo:(id)to;	// 0x13019
- (BOOL)readFrom:(id)from;	// 0x12f25
- (id)dictionaryRepresentation;	// 0x12ea5
- (id)description;	// 0x12e35
// declared property getter: - (BOOL)hasAttributionUrl;	// 0x12e1d
// declared property getter: - (BOOL)hasAuthor;	// 0x12e05
- (void)dealloc;	// 0x12dad
@end
