//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>
#import <UXKit/UXView.h>

@interface UXLabel : UXView <NSAccessibilityStaticText>

@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, strong) NSColor *highlightedTextColor;
@property (nonatomic) NSInteger numberOfLines;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic, strong) NSColor *shadowColor;
@property (nonatomic, strong) NSColor *textColor;
- (id)accessibilityRoleDescription;
- (void)setAccessibilityRoleDescription:(id)arg1;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (id)accessibilityValue;
- (id)textFieldCell;
@property (nonatomic) BOOL selectable;
@property (nonatomic) BOOL centerVertically;
@property (nonatomic) CGFloat preferredMaxLayoutWidth;
@property (nonatomic) NSUInteger textAlignment; // TODO: enum
@property (nonatomic) NSUInteger lineBreakMode; // TODO: enum
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, strong) NSFont *font;
- (CGSize)intrinsicContentSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

