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

@interface FTSFavSearchItem : XXUnknownSuperclass <WCDBCoding> {
	unsigned long localId;
	unsigned long updateTime;
	NSString* searchTitle;
	NSString* searchDesc;
	NSString* searchSource;
	NSString* searchTag;
	unsigned long FavItemReservedInt;
	NSString* FavItemReservedText;
	long long m___rowID;
}
@property(assign, nonatomic) long long __rowID;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* FavItemReservedText;
@property(assign, nonatomic) unsigned long FavItemReservedInt;
@property(retain, nonatomic) NSString* searchSource;
@property(retain, nonatomic) NSString* searchTag;
@property(retain, nonatomic) NSString* searchDesc;
@property(retain, nonatomic) NSString* searchTitle;
@property(assign, nonatomic) unsigned long updateTime;
@property(assign, nonatomic) unsigned long localId;
+(id)getWCDBTableHelperDictionary;
+(id)dummyObject;
-(void).cxx_destruct;
-(void)copyFromItem:(id)item;
-(BOOL)isEqual:(id)equal;
-(int)compareSearchItemAscending:(id)ascending;
-(id)init;
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
-(const WCDBCondition<NSString* >*)db_FavItemReservedText;
-(const WCDBCondition<unsigned long>*)db_FavItemReservedInt;
-(const WCDBCondition<NSString* >*)db_searchTag;
-(const WCDBCondition<NSString* >*)db_searchSource;
-(const WCDBCondition<NSString* >*)db_searchDesc;
-(const WCDBCondition<NSString* >*)db_searchTitle;
-(const WCDBCondition<unsigned long>*)db_updateTime;
-(const WCDBCondition<unsigned long>*)db_localId;
@end
