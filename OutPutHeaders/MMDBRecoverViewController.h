/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMDatabaseRecoverMgrDelegate.h"
#import "UIAlertViewDelegate.h"
#import "MMWindowViewController.h"
#import "WeChat-Structs.h"

@class UILabel, NSString, MMLoadingView, MMDBRecoverContext;

@interface MMDBRecoverViewController : MMWindowViewController <MMDatabaseRecoverMgrDelegate, UIAlertViewDelegate> {
	BOOL m_hasClickCancel;
	BOOL m_hasClickConfirm;
	BOOL m_isLowSpace;
	MMDBRecoverContext* m_recoverContext;
	MMLoadingView* m_loadingView;
	NSString* m_tip;
	UILabel* m_tipLabel;
	unsigned long long m_suggestSize;
	unsigned long long m_restSize;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned long long m_restSize;
@property(assign, nonatomic) unsigned long long m_suggestSize;
@property(assign, nonatomic) BOOL m_isLowSpace;
@property(retain, nonatomic) UILabel* m_tipLabel;
@property(retain, nonatomic) NSString* m_tip;
@property(assign, nonatomic) BOOL m_hasClickConfirm;
@property(assign, nonatomic) BOOL m_hasClickCancel;
@property(retain, nonatomic) MMLoadingView* m_loadingView;
@property(retain, nonatomic) MMDBRecoverContext* m_recoverContext;
-(void).cxx_destruct;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)onAutoRecoverEndWithResult:(BOOL)result errorMsg:(id)msg;
-(void)checkIsLowSpace;
-(void)setupData;
-(void)stopLoading;
-(void)startLoading;
-(id)lowFreeDiskTip;
-(void)delayExecuteConfirm;
-(void)onConfirm;
-(void)onCancel;
-(void)onStopRenewLowSpaceTipLoading;
-(void)renewLowSpaceTip;
-(void)hideRecoverView;
-(void)showRecoverView;
-(void)setupView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
-(id)init;
@end
