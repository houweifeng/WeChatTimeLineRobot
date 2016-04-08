/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMRefreshTableFooterView.h"

@class UIActivityIndicatorView, UILabel;

@interface EmoticonStoreFootView : MMRefreshTableFooterView {
	UIActivityIndicatorView* m_activityIndicatorView;
	UILabel* m_label;
	unsigned long m_lineViewWidth;
}
@property(assign, nonatomic) unsigned long m_lineViewWidth;
@property(retain, nonatomic) UILabel* m_label;
@property(retain, nonatomic) UIActivityIndicatorView* m_activityIndicatorView;
-(void).cxx_destruct;
-(void)onStateOfNoData:(id)noData;
-(void)onStateOfNoMoreData:(id)noMoreData;
-(void)onStateOfLoading;
-(void)onStateOfNormal;
-(void)layoutSubviews;
-(void)dealloc;
-(void)reset;
-(id)initWithFrame:(CGRect)frame;
@end
