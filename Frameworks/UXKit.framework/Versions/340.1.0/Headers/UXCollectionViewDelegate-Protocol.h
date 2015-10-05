//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  5 2015 02:41:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSEvent, NSIndexPath, NSString, UXCollectionReusableView, UXCollectionView, UXCollectionViewCell;

@protocol UXCollectionViewDelegate <NSObject>

@optional
- (struct CGPoint)collectionView:(UXCollectionView *)arg1 targetContentOffsetOnResizeForProposedContentOffset:(struct CGPoint)arg2;
- (void)collectionView:(UXCollectionView *)arg1 didPrepareForOverdraw:(struct CGRect)arg2;
- (void)collectionView:(UXCollectionView *)arg1 itemWasRightClickedAtIndexPath:(NSIndexPath *)arg2 withEvent:(NSEvent *)arg3;
- (void)collectionView:(UXCollectionView *)arg1 itemWasDoubleClickedAtIndexPath:(NSIndexPath *)arg2 withEvent:(NSEvent *)arg3;
- (void)collectionView:(UXCollectionView *)arg1 mouseDownWithEvent:(NSEvent *)arg2;
- (void)collectionView:(UXCollectionView *)arg1 didEndDisplayingSupplementaryView:(UXCollectionReusableView *)arg2 forElementOfKind:(NSString *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)collectionView:(UXCollectionView *)arg1 didEndDisplayingCell:(UXCollectionViewCell *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UXCollectionView *)arg1 indexPathsForSelectedItemsDidAdd:(NSArray *)arg2 remove:(NSArray *)arg3 animated:(BOOL)arg4;
- (void)collectionView:(UXCollectionView *)arg1 indexPathsForSelectedItemsWillAdd:(NSArray *)arg2 remove:(NSArray *)arg3 animated:(BOOL)arg4;
- (void)collectionView:(UXCollectionView *)arg1 didDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UXCollectionView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)collectionView:(UXCollectionView *)arg1 shouldDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)collectionView:(UXCollectionView *)arg1 shouldSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionViewDidEndDecelerating:(UXCollectionView *)arg1;
- (void)collectionViewWillBeginDecelerating:(UXCollectionView *)arg1 targetContentOffset:(struct CGPoint)arg2;
- (void)collectionViewDidEndScrolling:(UXCollectionView *)arg1;
- (void)collectionViewDidScroll:(UXCollectionView *)arg1;
- (void)collectionViewWillBeginScrolling:(UXCollectionView *)arg1;
@end

