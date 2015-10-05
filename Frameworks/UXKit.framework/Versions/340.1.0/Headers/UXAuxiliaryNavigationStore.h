//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  5 2015 02:41:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, UXSourceController;

@interface UXAuxiliaryNavigationStore : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_namespaceDict;
    NSMutableDictionary *_globalDict;
    NSString *_lastAction;
    UXSourceController *_sourceController;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) __weak UXSourceController *sourceController; // @synthesize sourceController=_sourceController;
- (id)_dictionaryForNamespace:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_allowedClassesForNSCoding;
- (id)nextActionForNamespace:(id)arg1;
- (void)setNextAction:(id)arg1 forNamespace:(id)arg2;
- (id)valueForKey:(id)arg1 inNamespace:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 inNamespace:(id)arg3;
- (id)init;

@end
