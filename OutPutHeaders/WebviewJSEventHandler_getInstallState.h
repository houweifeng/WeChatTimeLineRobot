/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WebviewJSEventHandlerBase.h"


@interface WebviewJSEventHandler_getInstallState : WebviewJSEventHandlerBase {
}
-(void)batchGetInstallStateInBackground:(id)background event:(id)event;
-(BOOL)batchGetIntstallState:(id)state intoDictionary:(id*)dictionary;
-(BOOL)getInstallStateWithPackageUrl:(id)packageUrl;
-(id)processPackageUrls:(id)urls;
-(void)handleJSEvent:(id)event HandlerFacade:(id)facade ExtraData:(id)data;
@end

