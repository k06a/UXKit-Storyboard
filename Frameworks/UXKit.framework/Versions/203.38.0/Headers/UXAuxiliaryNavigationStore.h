//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>

@class UXSourceController;

@interface UXAuxiliaryNavigationStore : NSObject <NSSecureCoding>

@property (nonatomic, weak) UXSourceController *sourceController;
- (id)nextActionForNamespace:(id)arg1;
- (void)setNextAction:(id)arg1 forNamespace:(id)arg2;
- (id)valueForKey:(id)arg1 inNamespace:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 inNamespace:(id)arg3;

@end

