//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CNContact, CNContactPickerViewController, CNContactProperty, NSArray;

@protocol CNContactPickerDelegate <NSObject>

@optional
- (void)contactPicker:(CNContactPickerViewController *)arg1 didSelectContactProperties:(NSArray *)arg2;
- (void)contactPicker:(CNContactPickerViewController *)arg1 didSelectContacts:(NSArray *)arg2;
- (void)contactPicker:(CNContactPickerViewController *)arg1 didSelectContactProperty:(CNContactProperty *)arg2;
- (void)contactPicker:(CNContactPickerViewController *)arg1 didSelectContact:(CNContact *)arg2;
- (void)contactPickerDidCancel:(CNContactPickerViewController *)arg1;
@end
