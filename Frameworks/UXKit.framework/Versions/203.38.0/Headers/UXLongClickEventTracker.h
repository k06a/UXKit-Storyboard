//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>
#import <UXKit/UXEventTracker.h>

@interface UXLongClickEventTracker : UXEventTracker

@property (nonatomic) double allowableMovement;
@property (nonatomic) double minimumPressDuration;
- (CGPoint)initialLocationInView:(id)arg1;
- (void)reset;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;

@end

