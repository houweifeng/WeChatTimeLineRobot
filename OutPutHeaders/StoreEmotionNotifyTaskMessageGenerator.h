/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"


@interface StoreEmotionNotifyTaskMessageGenerator : MMObject {
}
+(const char*)emojiMd5NodeName;
+(const char*)emojiBackupNodeName;
+(const char*)opCodeNodeName;
+(id)filterMsgType;
+(int)opcodeForAdd;
+(int)opcodeForDelete;
+(id)getTaskFromXML:(id)xml andDelegate:(id)delegate;
@end
