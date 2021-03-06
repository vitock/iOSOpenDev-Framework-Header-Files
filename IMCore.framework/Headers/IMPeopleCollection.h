/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMPeople.h>

@class NSMutableArray, NSArray;

@interface IMPeopleCollection : IMPeople {
	NSMutableArray *_collectedPeople;	// 16 = 0x10
}
@property(assign, nonatomic) NSMutableArray *_collectedPeople;	// G=0x34595; S=0x345a5; @synthesize
@property(readonly, assign, nonatomic) NSArray *collectedIMPeople;	// G=0x341a1; 
// declared property setter: - (void)set_collectedPeople:(id)people;	// 0x345a5
// declared property getter: - (id)_collectedPeople;	// 0x34595
- (BOOL)containsPerson:(id)person;	// 0x34569
- (id)groups;	// 0x34445
- (id)people;	// 0x3431d
- (void)_collectionNotification:(id)notification;	// 0x342a9
- (void)removeIMPeople:(id)people;	// 0x34245
- (void)addIMPeople:(id)people;	// 0x341d5
- (BOOL)collectsIMPeople:(id)people;	// 0x341b1
// declared property getter: - (id)collectedIMPeople;	// 0x341a1
- (void)dealloc;	// 0x34155
- (id)init;	// 0x340f5
@end
