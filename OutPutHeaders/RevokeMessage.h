/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCDBCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class NSString;

@interface RevokeMessage : XXUnknownSuperclass <WCDBCoding> {
	long long m_n64SvrId;
	NSString* m_nsContent;
	unsigned long m_uiCreateTime;
	NSString* MSG_REVOKE_COL_STRRES1;
	NSString* MSG_REVOKE_COL_STRRES2;
	NSString* MSG_REVOKE_COL_STRRES3;
	long long MSG_REVOKE_COL_INTRES2;
	long long MSG_REVOKE_COL_INTRES3;
	long long m___rowID;
}
@property(assign, nonatomic) long long __rowID;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* MSG_REVOKE_COL_STRRES3;
@property(retain, nonatomic) NSString* MSG_REVOKE_COL_STRRES2;
@property(retain, nonatomic) NSString* MSG_REVOKE_COL_STRRES1;
@property(assign, nonatomic) long long MSG_REVOKE_COL_INTRES3;
@property(assign, nonatomic) long long MSG_REVOKE_COL_INTRES2;
@property(assign, nonatomic) unsigned long m_uiCreateTime;
@property(retain, nonatomic) NSString* m_nsContent;
@property(assign, nonatomic) long long m_n64SvrId;
+(id)dummyObject;
-(void).cxx_destruct;
-(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)getWCDBPrimaryColumnName;
-(const WCDBIndexHelper*)getWCDBIndexArray;
-(unsigned long)getWCDBIndexArrayCount;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getFileValueTagIndexMap;
-(id)getFileValueTypeTable;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getPackedValueTagIndexMap;
-(id)getPackedValueTypeTable;
-(const map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >*)getValueNameIndexMap;
-(id)getValueTable;
-(const WCDBCondition<NSString* >*)db_MSG_REVOKE_COL_STRRES3;
-(const WCDBCondition<NSString* >*)db_MSG_REVOKE_COL_STRRES2;
-(const WCDBCondition<NSString* >*)db_MSG_REVOKE_COL_STRRES1;
-(const WCDBCondition<long long>*)db_MSG_REVOKE_COL_INTRES3;
-(const WCDBCondition<long long>*)db_MSG_REVOKE_COL_INTRES2;
-(const WCDBCondition<unsigned long>*)db_m_uiCreateTime;
-(const WCDBCondition<NSString* >*)db_m_nsContent;
-(const WCDBCondition<long long>*)db_m_n64SvrId;
@end
