/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <iTunesStore/NSCoding.h>
#import <iTunesStore/XXUnknownSuperclass.h>
#import <iTunesStore/NSCopying.h>
#import <iTunesStore/iTunesStore-Structs.h>

@class NSURL, NSString;

@interface ISReview : XXUnknownSuperclass <NSCoding, NSCopying> {
	int _assetType;	// 4 = 0x4
	NSString *_body;	// 8 = 0x8
	unsigned _bodyMaxLength;	// 12 = 0xc
	NSURL *_infoURL;	// 16 = 0x10
	unsigned long long _itemIdentifier;	// 20 = 0x14
	NSString *_nickname;	// 28 = 0x1c
	BOOL _nicknameIsConfirmed;	// 32 = 0x20
	unsigned _nicknameMaxLength;	// 36 = 0x24
	float _rating;	// 40 = 0x28
	NSURL *_submitURL;	// 44 = 0x2c
	NSString *_title;	// 48 = 0x30
	unsigned _titleMaxLength;	// 52 = 0x34
}
@property(assign, nonatomic) unsigned titleMaxLength;	// G=0x1ab65; S=0x1ab75; @synthesize=_titleMaxLength
@property(assign, nonatomic) unsigned nicknameMaxLength;	// G=0x1aabd; S=0x1aacd; @synthesize=_nicknameMaxLength
@property(assign, nonatomic) BOOL nicknameIsConfirmed;	// G=0x1aa9d; S=0x1aaad; @synthesize=_nicknameIsConfirmed
@property(assign, nonatomic) unsigned bodyMaxLength;	// G=0x1a9e9; S=0x1a9f9; @synthesize=_bodyMaxLength
@property(retain, nonatomic) NSURL *submitURL;	// G=0x1aafd; S=0x1ab0d; @synthesize=_submitURL
@property(retain, nonatomic) NSURL *infoURL;	// G=0x1aa09; S=0x1aa19; @synthesize=_infoURL
@property(assign, nonatomic) unsigned long long itemIdentifier;	// G=0x1aa3d; S=0x1aa55; @synthesize=_itemIdentifier
@property(assign, nonatomic) int assetType;	// G=0x1a995; S=0x1a9a5; @synthesize=_assetType
@property(retain, nonatomic) NSString *title;	// G=0x1ab31; S=0x1ab41; @synthesize=_title
@property(assign, nonatomic) float rating;	// G=0x1aadd; S=0x1aaed; @synthesize=_rating
@property(retain, nonatomic) NSString *nickname;	// G=0x1aa69; S=0x1aa79; @synthesize=_nickname
@property(retain, nonatomic) NSString *body;	// G=0x1a9b5; S=0x1a9c5; @synthesize=_body
@property(readonly, assign, nonatomic) BOOL hasSavedDraft;	// G=0x19d55; 
// declared property setter: - (void)setTitleMaxLength:(unsigned)length;	// 0x1ab75
// declared property getter: - (unsigned)titleMaxLength;	// 0x1ab65
// declared property setter: - (void)setTitle:(id)title;	// 0x1ab41
// declared property getter: - (id)title;	// 0x1ab31
// declared property setter: - (void)setSubmitURL:(id)url;	// 0x1ab0d
// declared property getter: - (id)submitURL;	// 0x1aafd
// declared property setter: - (void)setRating:(float)rating;	// 0x1aaed
// declared property getter: - (float)rating;	// 0x1aadd
// declared property setter: - (void)setNicknameMaxLength:(unsigned)length;	// 0x1aacd
// declared property getter: - (unsigned)nicknameMaxLength;	// 0x1aabd
// declared property setter: - (void)setNicknameIsConfirmed:(BOOL)confirmed;	// 0x1aaad
// declared property getter: - (BOOL)nicknameIsConfirmed;	// 0x1aa9d
// declared property setter: - (void)setNickname:(id)nickname;	// 0x1aa79
// declared property getter: - (id)nickname;	// 0x1aa69
// declared property setter: - (void)setItemIdentifier:(unsigned long long)identifier;	// 0x1aa55
// declared property getter: - (unsigned long long)itemIdentifier;	// 0x1aa3d
// declared property setter: - (void)setInfoURL:(id)url;	// 0x1aa19
// declared property getter: - (id)infoURL;	// 0x1aa09
// declared property setter: - (void)setBodyMaxLength:(unsigned)length;	// 0x1a9f9
// declared property getter: - (unsigned)bodyMaxLength;	// 0x1a9e9
// declared property setter: - (void)setBody:(id)body;	// 0x1a9c5
// declared property getter: - (id)body;	// 0x1a9b5
// declared property setter: - (void)setAssetType:(int)type;	// 0x1a9a5
// declared property getter: - (int)assetType;	// 0x1a995
- (id)_draftsDirectoryPath;	// 0x1a949
- (id)_draftFileName;	// 0x1a8fd
- (BOOL)saveAsDraft;	// 0x1a801
- (BOOL)restoreFromDraft;	// 0x1a701
- (BOOL)removeDraft;	// 0x1a62d
- (void)mergeWithReview:(id)review preferLocalValues:(BOOL)values;	// 0x1a281
- (void)loadFromDictionary:(id)dictionary;	// 0x19dd5
// declared property getter: - (BOOL)hasSavedDraft;	// 0x19d55
- (void)encodeWithCoder:(id)coder;	// 0x19b41
- (id)copyWithZone:(NSZone *)zone;	// 0x199c9
- (void)dealloc;	// 0x19901
- (id)initWithCoder:(id)coder;	// 0x196c5
@end
