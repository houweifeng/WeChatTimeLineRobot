/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IContactMgrExt.h"
#import "WeChat-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "MMSearchBarDisplayController.h"
#import "contactInfoDelegate.h"

@class NSMutableArray, NSString, MMLoadingView, MMTableView, NSMutableDictionary;
@protocol contactsDelegate;

@interface ContactsGenericViewController : MMSearchBarDisplayController <UITableViewDelegate, UITableViewDataSource, contactInfoDelegate, IContactMgrExt> {
	MMTableView* m_tableView;
	NSMutableDictionary* m_dicAllContacts;
	NSMutableArray* m_arrAllKey;
	BOOL m_bSearching;
	NSMutableArray* m_arrFilteredContacts;
	int m_iViewType;
	NSString* m_nsDomain;
	BOOL m_bPopUp;
	MMLoadingView* m_loadingView;
	id<contactsDelegate> m_delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_bPopUp;
@property(retain, nonatomic) NSString* m_nsDomain;
@property(assign, nonatomic) int m_iViewType;
@property(assign, nonatomic) __weak id<contactsDelegate> m_delegate;
-(void).cxx_destruct;
-(void)dealloc;
-(float)getVisibleHeight;
-(void)onDeleteContact:(id)contact;
-(void)onModifyContact:(id)contact;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)doSearch:(id)search;
-(int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;
-(id)sectionIndexTitlesForTableView:(id)tableView;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)makeCell:(id)cell tableCell:(id)cell2 section:(unsigned)section row:(unsigned)row;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)initView;
-(void)initSearchBar;
-(void)initTableView;
-(void)initTitleArea;
-(void)initData;
-(void)onDone:(id)done;
-(void)loadContacts;
-(id)addSectionKey:(id)key;
-(void)showSearchFriendView;
-(void)showContactInfoView:(id)view;
-(void)reloadData;
-(void)newMessageFromContactInfo:(id)contactInfo;
-(void)addToContactsFromContactInfo:(id)contactInfo;
-(void)processNewContact:(id)contact;
-(void)addContactInternal:(id)internal;
-(void)tryDeleteContactInSection:(id)section;
-(void)deleteContact:(id)contact deleteInDB:(BOOL)db;
-(id)parseContactKey:(id)key;
-(void)processContact:(id)contact;
-(void)stopLoading;
-(void)startLoading;
@end

