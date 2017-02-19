//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JDNewWebViewConnectionDelegate.h"
#import "JDWebViewTaskImpl.h"

@class JDSHWebViewConnectionDelegate, NSString, NSURLConnection, NSURLRequest, UIWebView;

@interface JDSHWebViewTaskHTTPS : NSObject <JDNewWebViewConnectionDelegate, JDWebViewTaskImpl>
{
    NSURLRequest *_request;
    JDSHWebViewConnectionDelegate *_connectionDelegate;
    NSURLConnection *_urlConnection;
    UIWebView *_webView;
}

@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
@property(retain, nonatomic) JDSHWebViewConnectionDelegate *connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
@property(copy, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (CDUnknownBlockType)task;
- (void)jdNewWebViewConnectionDidReceiveResponse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
