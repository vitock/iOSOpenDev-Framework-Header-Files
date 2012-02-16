/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Stocks/XMLHTTPRequest.h>
#import <Stocks/Stocks-Structs.h>

@class NSString, StockChartData;

@interface ChartUpdater : XMLHTTPRequest {
	id _delegate;	// 144 = 0x90
	NSString *_symbol;	// 148 = 0x94
	int _interval;	// 152 = 0x98
	StockChartData *_currentChartData;	// 156 = 0x9c
}
@property(assign, nonatomic) id delegate;	// G=0xc171; S=0xc181; @synthesize=_delegate
+ (id)_rangeStringForInterval:(int)interval;	// 0xc10d
- (id)init;	// 0xc191
- (BOOL)updateChartForStock:(id)stock interval:(int)interval;	// 0xcae9
- (int)parseData:(id)data;	// 0xca25
- (void)didParseData;	// 0xc2a5
- (void)cancel;	// 0xc251
- (void)failWithError:(id)error;	// 0xc211
// declared property getter: - (id)delegate;	// 0xc171
// declared property setter: - (void)setDelegate:(id)delegate;	// 0xc181
@end