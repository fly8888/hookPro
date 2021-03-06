//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/NSObject-Protocol.h>

@class UIAlertView;

@protocol UIAlertViewDelegate <NSObject>

@optional
- (BOOL)alertViewShouldEnableFirstOtherButton:(UIAlertView *)arg1;
- (void)alertView:(UIAlertView *)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(UIAlertView *)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)didPresentAlertView:(UIAlertView *)arg1;
- (void)willPresentAlertView:(UIAlertView *)arg1;
- (void)alertViewCancel:(UIAlertView *)arg1;
- (void)alertView:(UIAlertView *)arg1 clickedButtonAtIndex:(int)arg2;
@end

