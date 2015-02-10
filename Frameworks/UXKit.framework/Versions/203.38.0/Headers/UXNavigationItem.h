//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>

@class UXBarButtonItem, UXLabel;

@interface UXNavigationItem : NSObject

@property (nonatomic) BOOL leftItemsSupplementBackButton;
@property (nonatomic, strong) NSArray *rightBarButtonItems;
@property (nonatomic) BOOL hidesAlternateTitleView;
@property (nonatomic) BOOL hidesBackButton;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, strong) NSView *titleView;
@property (nonatomic, strong) UXBarButtonItem *backBarButtonItem;
- (void)removeChildItem:(id)arg1;
- (void)addChildItem:(id)arg1;
@property (nonatomic, strong) UXBarButtonItem *rightBarButtonItem;
@property (nonatomic, strong) NSArray *leftBarButtonItems;
@property (nonatomic, strong) UXBarButtonItem *leftBarButtonItem;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSArray *trailingBarButtonItems;
- (void)setTrailingBarButtonItems:(id)arg1 animated:(BOOL)arg2;
@property (nonatomic, strong) NSArray *leadingBarButtonItems;
- (void)setLeadingBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setRightBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setRightBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithTitle:(id)arg1;

@end

