//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXView.h"

@import  AppKit;

@class NSImage, NSString;

@interface UXImageView : UXView <NSAccessibilityImage>
{
    double _backingScaleFactor;
    struct CGSize _proposedSize;
    NSImage *_image;
}

@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void)sizeToFit;
- (void)_updateBackingScaleFactorForWindow:(id)arg1;
- (void)_updateLayerContentsForWindow:(id)arg1;
- (struct CGSize)_proposedSize;
- (void)_setContentStretchInPixels:(struct CGRect)arg1 forContentSize:(struct CGSize)arg2 shouldTile:(BOOL)arg3;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidChangeBackingProperties;
- (struct CGSize)intrinsicContentSize;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *accessibilityLabel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

