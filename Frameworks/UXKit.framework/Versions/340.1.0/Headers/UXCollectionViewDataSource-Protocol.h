//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  5 2015 02:41:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSIndexPath, NSString, UXCollectionReusableView, UXCollectionView, UXCollectionViewCell;

@protocol UXCollectionViewDataSource <NSObject>
- (UXCollectionViewCell *)collectionView:(UXCollectionView *)arg1 cellForItemAtIndexPath:(NSIndexPath *)arg2;
- (long long)collectionView:(UXCollectionView *)arg1 numberOfItemsInSection:(long long)arg2;

@optional
- (UXCollectionReusableView *)collectionView:(UXCollectionView *)arg1 viewForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (long long)numberOfSectionsInCollectionView:(UXCollectionView *)arg1;
@end
