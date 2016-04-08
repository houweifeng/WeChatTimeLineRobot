/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"
#import "MMImageLoaderObserver.h"

@class NSURL, NSString, NSArray, NSMutableSet;
@protocol ImageDownloadLoaderDelegate;

@interface ImageDownloadLoader : MMObject <MMImageLoaderObserver> {
	NSMutableSet* m_filePathSet;
	BOOL m_isDownloading;
	id<ImageDownloadLoaderDelegate> _delegate;
	NSURL* _imgUrl;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) NSArray* filePathToSaveList;
@property(retain, nonatomic) NSURL* imgUrl;
@property(retain, nonatomic) id<ImageDownloadLoaderDelegate> delegate;
-(void).cxx_destruct;
-(void)ImageDidFail:(id)image;
-(void)ImageDidLoadWithData:(id)image Url:(id)url;
-(void)finishDownloadWithData:(id)data;
-(void)addDownloadTaskWithFilePath:(id)filePath;
-(void)dealloc;
@end
