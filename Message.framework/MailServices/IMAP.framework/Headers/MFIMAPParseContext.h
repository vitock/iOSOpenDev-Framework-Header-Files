/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <IMAP/IMAP-Structs.h>
#import <IMAP/XXUnknownSuperclass.h>

@class IMAPConnection, MFIMAPResponse;

@interface MFIMAPParseContext : XXUnknownSuperclass {
	IMAPConnection *_connection;	// 4 = 0x4
	MFIMAPResponse *_response;	// 8 = 0x8
	char *_start;	// 12 = 0xc
	char *_end;	// 16 = 0x10
	char *_originalStart;	// 20 = 0x14
	char *_originalEnd;	// 24 = 0x18
	char *_lastLoggedChar;	// 28 = 0x1c
	BOOL _invalid;	// 32 = 0x20
}
@property(assign) const char *start;	// G=0x38b21; S=0x39cd5; converted property
@property(assign) const char *end;	// G=0x38b45; S=0x39c89; converted property
@property(readonly, retain) IMAPConnection *connection;	// G=0x38b01; converted property
@property(readonly, retain) MFIMAPResponse *response;	// G=0x38b11; converted property
+ (BOOL)hadWarningOrError;	// 0x38ae1
+ (void)resetWarningOrError;	// 0x38af1
- (id)initWithConnection:(id)connection response:(id)response start:(const char *)start end:(const char *)end;	// 0x38bc1
- (void)dealloc;	// 0x39d21
// converted property getter: - (id)connection;	// 0x38b01
// converted property getter: - (id)response;	// 0x38b11
// converted property getter: - (const char *)start;	// 0x38b21
// converted property setter: - (void)setStart:(const char *)start;	// 0x39cd5
- (void)increment;	// 0x38b31
// converted property getter: - (const char *)end;	// 0x38b45
// converted property setter: - (void)setEnd:(const char *)end;	// 0x39c89
- (BOOL)isValid;	// 0x38b55
- (void)emitWarning:(id)warning;	// 0x39bf1
- (void)emitError:(id)error;	// 0x39a81
- (void)logReadChars;	// 0x39a19
- (id)copyAtom;	// 0x39991
- (BOOL)getNumber:(unsigned long long *)number;	// 0x398f5
- (id)copyNumber;	// 0x39891
- (BOOL)match:(const char *)match;	// 0x3981d
- (BOOL)match:(const char *)match upToSpecial:(const char *)special;	// 0x397cd
- (id)copyLiteral;	// 0x39379
- (id)copyLiteralString;	// 0x392e9
- (id)copyQuotedString;	// 0x391d5
- (id)copyNilOrString;	// 0x39159
- (id)copyAString;	// 0x39115
- (id)copyDateTime;	// 0x38ff1
- (CFArrayRef)copyArrayAllowingNulls:(BOOL)nulls;	// 0x38e65
- (id)copyArray;	// 0x38e51
- (id)copyMessageSet;	// 0x38d75
- (id)copyStringFrom:(const char *)from to:(const char *)to withCaseOption:(int)caseOption;	// 0x38cd5
- (BOOL)parseSpace;	// 0x38c89
- (unsigned char)lookAhead;	// 0x38b6d
- (const char *)nextSeparator;	// 0x38b95
@end
