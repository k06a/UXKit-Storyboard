//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UXKit/UXEventTracker.h>

@interface UXDragEventTracker : UXEventTracker
{
    CGPoint _currentPoint;
    CGPoint _previousPoint;
    BOOL _didBegin;
    double _trackingThreshold;
    CGPoint _initialPoint;
}

@property(readonly, nonatomic) CGPoint initialPoint; // @synthesize initialPoint=_initialPoint;
@property(nonatomic) double trackingThreshold; // @synthesize trackingThreshold=_trackingThreshold;
@property(readonly, nonatomic) CGPoint zeroingDelta;
@property(readonly, nonatomic) CGPoint delta;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)reset;
- (id)init;

@end

