//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UXKit/UXEventTracker.h>

@interface UXDragEventTracker : UXEventTracker

@property (nonatomic, readonly) CGPoint initialPoint;
@property (nonatomic) double trackingThreshold;
@property (nonatomic, readonly) CGPoint zeroingDelta;
@property (nonatomic, readonly) CGPoint delta;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)reset;

@end

