/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASFolderLocalUpdateTask.h>


@interface ASFolderCreateTask : ASFolderLocalUpdateTask {
}
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x4308d
- (void)_appendRequestBodyFolderDataToWBXMLData:(id)wbxmldata;	// 0x42fe5
- (id)initWithFolder:(id)folder previousSyncKey:(id)key completionBlock:(id)block;	// 0x42f8d
@end
