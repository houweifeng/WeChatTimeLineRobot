/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "NSObject.h"


@protocol MMGridViewDataSource <NSObject>
-(id)MMGridView:(id)view cellForItemAtIndex:(int)index;
-(CGSize)MMGridView:(id)view sizeForItemsInInterfaceOrientation:(int)interfaceOrientation;
-(int)numberOfItemsInMMGridView:(id)mmgridView;
@optional
-(BOOL)MMGridView:(id)view canDeleteItemAtIndex:(int)index;
@end
