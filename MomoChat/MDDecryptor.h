//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDCryptor.h"

@class NSData, NSMutableData, NSString;

@interface MDDecryptor : MDCryptor
{
    CDStruct_43cfb2c2 _HMACContext;
    NSMutableData *__inData;
    _Bool _hasV1HMAC;
    NSData *_encryptionKey;
    NSData *_HMACKey;
    NSString *_password;
    struct _MDCryptorSettings _settings;
}

+ (id)decryptData:(id)arg1 withEncryptionKey:(id)arg2 HMACKey:(id)arg3 error:(id *)arg4;
+ (id)decryptData:(id)arg1 withPassword:(id)arg2 error:(id *)arg3;
+ (id)decryptData:(id)arg1 withSettings:(struct _MDCryptorSettings)arg2 encryptionKey:(id)arg3 HMACKey:(id)arg4 error:(id *)arg5;
+ (id)decryptData:(id)arg1 withSettings:(struct _MDCryptorSettings)arg2 password:(id)arg3 error:(id *)arg4;
@property(nonatomic) _Bool hasV1HMAC; // @synthesize hasV1HMAC=_hasV1HMAC;
@property(nonatomic) struct _MDCryptorSettings settings; // @synthesize settings=_settings;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSData *HMACKey; // @synthesize HMACKey=_HMACKey;
@property(copy, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
- (void).cxx_destruct;
- (void)finish;
- (void)consumeHeaderFromData:(id)arg1;
- (_Bool)updateOptionsForPreamble:(id)arg1;
- (void)addData:(id)arg1;
- (void)decryptData:(id)arg1;
@property(readonly, nonatomic) NSMutableData *inData;
- (id)initWithPassword:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithEncryptionKey:(id)arg1 HMACKey:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

