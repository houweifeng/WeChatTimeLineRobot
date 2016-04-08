/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class JSAPIPermissionBitSet, NSString;

@interface JSFunctionDef : XXUnknownSuperclass {
	SEL funcSelector;
	int funcType;
	NSString* funcName;
	JSAPIPermissionBitSet* permissionBitset;
	int permissionByteIndex;
}
@property(assign, nonatomic) int permissionByteIndex;
@property(copy, nonatomic) JSAPIPermissionBitSet* permissionBitset;
@property(copy, nonatomic) NSString* funcName;
@property(assign, nonatomic) int funcType;
@property(assign, nonatomic) SEL funcSelector;
+(id)FuncDefWithFunc:(id)func Selector:(SEL)selector FuncType:(int)type PermissionByteIndex:(int)index;
+(id)FuncDefWithFunc:(id)func Selector:(SEL)selector FuncType:(int)type PermissionBitSet3:(unsigned long)a3;
+(id)FuncDefWithFunc:(id)func Selector:(SEL)selector FuncType:(int)type PermissionBitSet2:(unsigned long)a2;
+(id)FuncDefWithFunc:(id)func Selector:(SEL)selector FuncType:(int)type PermissionBitSet:(unsigned long)set;
-(void).cxx_destruct;
-(id)init;
@end
