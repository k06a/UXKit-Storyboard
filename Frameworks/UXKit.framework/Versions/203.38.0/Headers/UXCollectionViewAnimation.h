//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>

@class UXCollectionReusableView, UXCollectionViewLayoutAttributes;

@interface UXCollectionViewAnimation : NSObject

@property (nonatomic, readonly) double endFraction; // @synthesize endFraction=_endFraction;
@property (nonatomic, readonly) double startFraction; // @synthesize startFraction=_startFraction;
@property (nonatomic, readonly) UXCollectionViewLayoutAttributes *finalLayoutAttributes; // @synthesize finalLayoutAttributes=_finalLayoutAttributes;
@property (nonatomic, readonly) unsigned long long viewType; // @synthesize viewType=_viewType;
@property (nonatomic, readonly) UXCollectionReusableView *view; // @synthesize view=_view;
- (void)addStartupHandler:(void(^)(void))arg1;
- (void)addCompletionHandler:(void(^)(BOOL finished))arg1;
- (void)start;
@property (nonatomic) BOOL resetRasterizationAfterAnimation;
@property (nonatomic) BOOL rasterizeAfterAnimation;
@property (nonatomic, readonly) BOOL deleteAfterAnimation;
@property (nonatomic, readonly) BOOL animateFromCurrentPosition;
- (id)initWithView:(id)arg1 viewType:(unsigned long long)arg2 finalLayoutAttributes:(id)arg3 startFraction:(double)arg4 endFraction:(double)arg5 animateFromCurrentPosition:(BOOL)arg6 deleteAfterAnimation:(BOOL)arg7 customAnimations:(void(^)(void(^completion)(BOOL finished)))arg8;

@end

