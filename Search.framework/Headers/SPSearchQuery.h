/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <Search/Search-Structs.h>

#import <Search/NSCopying.h>

@class NSString, NSArray;

@interface SPSearchQuery : NSObject <NSCopying> {
	unsigned _queryID;	// 4 = 0x4
	NSString *_searchString;	// 8 = 0x8
	BOOL _cancelled;	// 12 = 0xc
	BOOL _finished;	// 13 = 0xd
	char *_domainVector;	// 16 = 0x10
	int _domainCount;	// 20 = 0x14
	double _creationTime;	// 24 = 0x18
	double _cancellationTime;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) double cancellationTime;	// G=0x2e5d; @synthesize=_cancellationTime
@property(readonly, assign, nonatomic) double creationTime;	// G=0x2e45; @synthesize=_creationTime
@property(readonly, assign, nonatomic) NSArray *searchDomains;	// G=0x2d35; 
@property(readonly, assign, nonatomic) BOOL cancelled;	// G=0x2a19; 
@property(readonly, assign, nonatomic) NSString *searchString;	// G=0x2e35; @synthesize=_searchString
// declared property getter: - (double)cancellationTime;	// 0x2e5d
// declared property getter: - (double)creationTime;	// 0x2e45
// declared property getter: - (id)searchString;	// 0x2e35
- (unsigned)hash;	// 0x2e25
- (BOOL)isEqual:(id)equal;	// 0x2e09
- (id)copyWithZone:(NSZone *)zone;	// 0x2df9
- (int)domainsVectorCount;	// 0x2de9
- (char *)domainsVector;	// 0x2dd9
// declared property getter: - (id)searchDomains;	// 0x2d35
- (void)dealloc;	// 0x2cd5
- (id)initWithSearchString:(id)searchString;	// 0x2cc1
- (id)initWithSearchString:(id)searchString forSearchDomains:(id)searchDomains;	// 0x2b2d
- (id)initWithSearchString:(id)searchString andDomainsVector:(char *)vector vectorCount:(int)count;	// 0x2a69
- (void)cancel;	// 0x2a35
// declared property getter: - (BOOL)cancelled;	// 0x2a19
@end
