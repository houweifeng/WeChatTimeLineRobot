/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, NSString;

@interface EmojiDownloadInfoResp : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* id;
@property(retain, nonatomic) NSString* md5;
@property(retain, nonatomic) SKBuiltinBuffer_t* emojiBuffer;
@property(assign, nonatomic) int totalLen;
@property(assign, nonatomic) int startPos;
@property(assign, nonatomic) int ret;
+(void)initialize;
@end

