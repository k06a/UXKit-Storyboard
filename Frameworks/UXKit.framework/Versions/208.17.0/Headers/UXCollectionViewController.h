//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>
#import <UXKit/UXViewController.h>
#import <UXKit/UXCollectionViewDataSource-Protocol.h>
#import <UXKit/UXCollectionViewDelegate-Protocol.h>

@class UXCollectionView, UXCollectionViewLayout;

@interface UXCollectionViewController : UXViewController <UXCollectionViewDataSource, UXCollectionViewDelegate>

+ (Class)collectionViewClass;
@property (nonatomic, strong) UXCollectionView *collectionView;
- (CGFloat)scrollView:(id)arg1 pageAlignedOriginOnAxis:(NSEventGestureAxis)arg2 forProposedDestination:(CGFloat)arg3 currentOrigin:(CGFloat)arg4 initialOrigin:(CGFloat)arg5 velocity:(CGFloat)arg6;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (NSInteger)collectionView:(id)arg1 numberOfItemsInSection:(CGFloat)arg2;
- (NSInteger)numberOfSectionsInCollectionView:(id)arg1;
- (instancetype)initWithCollectionViewLayout:(id)arg1;

@end

