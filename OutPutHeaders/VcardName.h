/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface VcardName : XXUnknownSuperclass {
	NSString* _firstName;
	NSString* _middleName;
	NSString* _lastName;
}
@property(retain, nonatomic) NSString* lastName;
@property(retain, nonatomic) NSString* middleName;
@property(retain, nonatomic) NSString* firstName;
+(BOOL)isChineseName:(id)name;
+(BOOL)isValidName:(id)name;
-(void).cxx_destruct;
-(void)print;
@end
