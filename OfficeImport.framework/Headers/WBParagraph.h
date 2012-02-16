/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/WBParagraph.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface WBParagraph : XXUnknownSuperclass {
}
+ (void)readFrom:(id)from textRun:(WrdParagraphTextRun *)run paragraph:(id)paragraph;	// 0x13244d
+ (int)blockType;	// 0x26cddd
@end

@interface WBParagraph (Private)
+ (void)readRunsFor:(id)aFor from:(id)from textRun:(WrdParagraphTextRun *)run;	// 0x1326f1
+ (void)readCharacterRunsFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x132909
+ (void)checkForNoteFrom:(id)from footnote:(BOOL)footnote runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x132c01
+ (void)checkForAnnotationFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x26cde1
+ (bool)isCPAnnotationRangeEnd:(long)end bookmarkTable:(WrdBookmarkTable *)table;	// 0x26cdf1
+ (void)check:(id)check forFieldMarkerFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x132c75
+ (void)checkForBookmarkFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x132cf9
+ (void)checkForAnnotationBookmarkFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x26cde5
+ (void)readSpecialCharactersFor:(id)aFor from:(id)from textRun:(WrdCharacterTextRun *)run;	// 0x13c095
+ (void)readOfficeArtFor:(id)aFor from:(id)from at:(long)at textRun:(WrdCharacterTextRun *)run;	// 0x13c145
+ (void)readPictureFor:(id)aFor from:(id)from at:(long)at textRun:(WrdCharacterTextRun *)run;	// 0x150a89
+ (void)readSpecialCharacterFor:(id)aFor from:(id)from at:(long)at textRun:(WrdCharacterTextRun *)run;	// 0x142131
+ (void)readSymbolsFor:(id)aFor from:(id)from textRun:(WrdCharacterTextRun *)run;	// 0x1b8571
+ (void)readNoteFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x1516e9
+ (void)readAnnotationFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x26cde9
+ (void)readFieldMarkerFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x13b481
+ (void)readBookmarkFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x150ed9
+ (void)readAnnotationBookmarkFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x26cded
@end
