//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>

@class NSEvent, NSMapTable, UXView;

@interface UXEventTracker : NSResponder
{
    UXView *_view;
    BOOL _cancelsEventsInView;
    BOOL _enabled;
    long long _state;
    NSEvent *_trackingEvent;
    unsigned long long _modifiers;
    double _velocity;
    unsigned long long _ignoredModifiers;
    void(^_eventTrackerDidBeginHandler)(UXEventTracker *);
    void(^_eventTrackerDidChangeHandler)(UXEventTracker *);
    void(^_eventTrackerDidEndHandler)(UXEventTracker *);
    NSMapTable *_selectorsByTarget;
}

@property(retain, nonatomic) NSMapTable *selectorsByTarget; // @synthesize selectorsByTarget=_selectorsByTarget;
@property(copy, nonatomic) void(^eventTrackerDidBeginHandler)(UXEventTracker *);
@property(copy, nonatomic) void(^eventTrackerDidChangeHandler)(UXEventTracker *);
@property(copy, nonatomic) void(^eventTrackerDidEndHandler)(UXEventTracker *);
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL cancelsEventsInView; // @synthesize cancelsEventsInView=_cancelsEventsInView;
@property(nonatomic) unsigned long long ignoredModifiers; // @synthesize ignoredModifiers=_ignoredModifiers;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) unsigned long long modifiers; // @synthesize modifiers=_modifiers;
@property(retain, nonatomic) NSEvent *trackingEvent; // @synthesize trackingEvent=_trackingEvent;
@property(nonatomic) __weak UXView *view; // @synthesize view=_view;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)description;
- (BOOL)eventTrackerRequiresTouches;
- (void)reset;
@property(readonly, nonatomic) unsigned long long numberOfTouches;
- (CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (CGPoint)locationInView:(id)arg1;
- (void)cancelTracking;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)init;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

