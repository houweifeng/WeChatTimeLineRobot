/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCAddressBaseViewController.h"

@class WCBaseKeyboardToolBar, WCAddressPickerItem, NSMutableArray, WCBaseTextViewItem, UIButton, NSIndexPath, WCBaseTextFieldItem;
@protocol WCAddressInfoViewControllerDelegate;

@interface WCAddressInfoViewController : WCAddressBaseViewController {
	UIButton* m_footerButton;
	WCBaseTextFieldItem* m_textFieldNameItem;
	WCAddressPickerItem* m_pickerDistrictItem;
	WCBaseTextViewItem* m_textViewStreetItem;
	WCBaseTextFieldItem* m_textFieldPostalCodeItem;
	WCBaseTextFieldItem* m_textFieldPhoneItem;
	WCBaseKeyboardToolBar* m_keyboardBar;
	NSMutableArray* m_arrayInfo;
	id<WCAddressInfoViewControllerDelegate> m_delegate;
	NSIndexPath* m_selectItemIndex;
}
-(void).cxx_destruct;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)setDelegate:(id)delegate;
-(void)clickInfoCell:(id)cell index:(id)index;
-(void)makeInfoCell:(id)cell cellInfo:(id)info;
-(void)WCBaseInfoItemEndEdit:(id)edit;
-(void)WCBaseInfoItemEditChanged:(id)changed;
-(void)WCBaseInfoItemBeginEdit:(id)edit;
-(void)WCBaseInfoItemCancelEdit:(id)edit;
-(void)WCBaseInfoItemPressReturnKey:(id)key;
-(BOOL)checkIsEmpty:(id)empty;
-(void)onNext;
-(BOOL)getData:(id)data;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)initNavigationBar;
-(void)OnCancelClick;
-(void)OnComfireEnsureAlert;
-(void)refreshViewWithData:(id)data;
-(void)reloadTableView;
-(void)initInfoTemplate;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)view;
-(id)init;
@end
