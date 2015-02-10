//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>
#import <UXKit/UXBarItem.h>
#import <UXKit/UXKitAppearance-Protocol.h>

@class UXViewController;

@interface UXBarButtonItem : UXBarItem <UXKitAppearance>

@property (nonatomic) unsigned long long keyEquivalentModifierMask;
@property (nonatomic, strong) NSString *keyEquivalent;
@property (nonatomic, strong) NSString *toolTip;
@property (nonatomic, weak) id target;
@property (nonatomic) SEL action;
@property (nonatomic, strong) NSView *customView;
@property (nonatomic) double width;
@property (nonatomic) long long style;
- (void)setImage:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)tintColorDidChange;
@property (nonatomic) long long tintAdjustmentMode;
@property (nonatomic, strong) NSColor *tintColor;
- (id)initWithStyle:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithCustomView:(id)arg1;
- (id)initWithBarButtonSystemItem:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;

@end

