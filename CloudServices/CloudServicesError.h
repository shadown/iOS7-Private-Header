/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface CloudServicesError : NSObject

{

}



+ (long long)codeForErrno:(long long)arg1;

+ (long long)codeForNSError:(id)arg1;

+ (id)errorForHTTPURLResponse:(id)arg1 error:(id)arg2;

+ (id)errorForNSError:(id)arg1 path:(id)arg2 format:(id)arg3;

+ (id)errorWithCode:(long long)arg1 URL:(id)arg2 format:(id)arg3;

+ (id)errorWithCode:(long long)arg1 error:(id)arg2 URL:(id)arg3 format:(id)arg4;

+ (id)errorWithCode:(long long)arg1 error:(id)arg2 format:(id)arg3;

+ (id)errorWithCode:(long long)arg1 format:(id)arg2;

+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 format:(id)arg3;

+ (id)sanitizedError:(id)arg1;



@end


