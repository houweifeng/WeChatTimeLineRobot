/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"
#import "IOnlineClientMgrExt.h"
#import "MFBanner.h"

@class NSString, UIImageView, UILabel;

@interface MFWebMMBtn : XXUnknownSuperclass <IOnlineClientMgrExt, MFBanner> {
	UIImageView* _iconImgView;
	UIImageView* _muteView;
	UILabel* _title;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onOnlineInfoUpdated;
-(void)updateMuteIcon;
-(void)updateDeviceIcon;
-(void)updateWithOnlineStatus;
-(id)getDeviceImg;
-(id)GetOnlineSummaryWordingForKey:(id)key;
-(void)setFrame:(CGRect)frame;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

