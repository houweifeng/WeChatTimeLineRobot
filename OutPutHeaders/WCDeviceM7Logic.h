/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSMutableArray, CMStepCounter, WCDeviceStepObject;
@protocol WCDeviceM7LogicDelegate;

@interface WCDeviceM7Logic : MMObject {
	id<WCDeviceM7LogicDelegate> _delegate;
	BOOL m_bStepGetting;
	BOOL m_bHadGetHKStep;
	BOOL m_bHadGetM7Step;
	WCDeviceStepObject* m_oStepObject;
	BOOL m_bHadObserverQuery;
	BOOL m_bDataChanged;
	NSMutableArray* m_aryWhiteList;
	CMStepCounter* _m_cmStepCounter;
}
@property(retain, nonatomic) NSMutableArray* m_aryWhiteList;
@property(retain, nonatomic) CMStepCounter* m_cmStepCounter;
@property(assign, nonatomic) BOOL m_bDataChanged;
@property(assign, nonatomic) __weak id<WCDeviceM7LogicDelegate> delegate;
-(void).cxx_destruct;
-(void)checkCallDelegate;
-(int)getCurrM7StepCount;
-(void)getStepCount:(id)count;
-(BOOL)isInWhiteList:(id)whiteList;
-(id)hkSource2ClientSource:(id)source;
-(id)getHKSourcePropertyLD;
-(id)getHKSourcePropertyPT;
-(int)getStepFromHealthKit;
-(int)tryGetStepFromHealthKit;
-(void)tryDoObserverStepQuery;
-(BOOL)getM7OrHealthKitStepCount:(BOOL)count;
-(BOOL)saveHKSourceWhiteCache;
-(BOOL)loadHKSourceWhiteCache;
-(id)pathForHKSourceWhiteCache;
-(void)updateSampleSourceList:(id)list;
-(id)init;
@end

