/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSData, NSString, BaseResponse;

@interface GetAvailableCardResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSData* buff;
@property(assign, nonatomic) unsigned isEnd;
@property(retain, nonatomic) NSString* jsonRet;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end
