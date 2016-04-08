/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCDBCoding.h"
#import "MMObject.h"
#import "WeChat-Structs.h"

@class NSString;

@interface WCNewYearReportDBItem : MMObject <WCDBCoding> {
	unsigned long m_uiLocalId;
	unsigned long m_uiCreateTime;
	unsigned long m_uiLogId;
	NSString* m_nsLogExt;
	long long m___rowID;
}
@property(assign, nonatomic) long long __rowID;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* m_nsLogExt;
@property(assign, nonatomic) unsigned long m_uiLogId;
@property(assign, nonatomic) unsigned long m_uiCreateTime;
@property(assign, nonatomic) unsigned long m_uiLocalId;
+(id)itemWithCreateTime:(unsigned long)createTime LogId:(unsigned long)anId LogExt:(id)ext;
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
-(const WCDBCondition<NSString* >*)db_m_nsLogExt;
-(const WCDBCondition<unsigned long>*)db_m_uiLogId;
-(const WCDBCondition<unsigned long>*)db_m_uiCreateTime;
-(const WCDBCondition<unsigned long>*)db_m_uiLocalId;
@end
