//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>
#import <UXKit/UXCollectionViewCell.h>

@class UXLabel, UXView;

@interface UXTableViewCell : UXCollectionViewCell

@property (nonatomic) NSEdgeInsets separatorInset;
@property (nonatomic) double indentationWidth;
@property (nonatomic) long long indentationLevel;
@property (nonatomic) long long selectionStyle;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, strong) NSColor *highlightColor;
@property (nonatomic, strong) UXView *accessoryView;
@property (nonatomic) long long accessoryType;
@property (nonatomic, strong) UXLabel *detailTextLabel;
@property (nonatomic, strong) UXLabel *textLabel;
@property (nonatomic, strong) UXView *selectedBackgroundView;
@property (nonatomic, strong) UXView *backgroundView;
@property (nonatomic) long long style;
- (id)accessibilityLabel;
@property (nonatomic, readonly) UXView *lowerSpace;
@property (nonatomic, readonly) UXView *upperSpace;
@property (nonatomic, readonly) UXView *defaultSelectedBackgroundView;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1;
- (void)updateConstraints;
- (void)viewDidMoveToWindow;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

