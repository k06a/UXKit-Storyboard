//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>

@interface UXBackButton : NSButton
{
    BOOL _hidesTitle;
    NSLayoutConstraint *_widthConstraint;
}

+ (Class)cellClass;
@property(readonly, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic) BOOL hidesTitle; // @synthesize hidesTitle=_hidesTitle;
- (void)setTitle:(id)arg1;
- (id)init;

@end

