//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>
#import <UXKit/UXCollectionViewLayout.h>
#import <UXKit/UXCollectionViewIndexPathsSet.h>
#import <UXKit/UXCollectionViewData.h>
#import <UXKit/UXCollectionViewUpdate.h>
#import <UXKit/UXCollectionViewDelegate-Protocol.h>
#import <UXKit/UXCollectionViewDataSource-Protocol.h>
#import <UXKit/UXCollectionDocumentView.h>
#import <UXKit/UXCollectionViewMutableIndexPathsSet.h>

@class CALayer, UXCollectionDocumentView, UXCollectionViewData, UXCollectionViewIndexPathsSet, UXCollectionViewLayout, UXCollectionViewMutableIndexPathsSet, UXCollectionViewUpdate, _UXCollectionViewRearrangingCoordinator;

@interface UXCollectionView : NSScrollView

+ (id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;
+ (BOOL)isCompatibleWithResponsiveScrolling;
+ (Class)documentClass;
@property (nonatomic, readonly, getter=isDecelerating) BOOL decelerating; // @synthesize decelerating=_decelerating;
@property (nonatomic, readonly, getter=isScrolling) BOOL scrolling; // @synthesize scrolling=_scrolling;
@property (nonatomic) BOOL allowsPaintingSelection; // @synthesize allowsPaintingSelection=_allowsPaintingSelection;
@property (nonatomic) BOOL allowsLassoSelection; // @synthesize allowsLassoSelection=_allowsLassoSelection;
@property (nonatomic) BOOL allowsContinuousSelection; // @synthesize allowsContinuousSelection=_allowsContinuousSelection;
@property (nonatomic, strong) UXCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_layout;
- (BOOL)lassoInvertsSelection;
- (void)setLassoInvertsSelection:(BOOL)arg1;
- (id)accessibilityHitTest:(CGPoint)arg1;
- (BOOL)accessibilityPerformPressWithItemAtIndexPath:(id)arg1;
- (id)accessibilityChildren;
- (id)accessibilityContentSiblingCellFromIndexPath:(id)arg1 direction:(id)arg2;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)accessibilitySelectItemsAtIndexPaths:(id)arg1;
- (void)accessibilitySelected:(BOOL)arg1 itemAtIndexPath:(id)arg2;
- (void)mouseDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeKeyView;
- (void)performBatchUpdates:(void(^)(void))arg1 completion:(void(^)(BOOL finished))arg2;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)reloadSections:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)scrollRect:(CGRect)arg1 toScrollPosition:(unsigned long long)arg2 withInsets:(NSEdgeInsets)arg3 animated:(BOOL)arg4;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3;
- (id)nextIndexPath:(id)arg1;
- (id)previousIndexPath:(id)arg1;
- (id)contentSupplementaryViews;
- (id)visibleSupplementaryViews;
- (id)indexPathsForContentItemsInSections:(id)arg1;
- (id)indexPathsForContentItems;
- (id)indexPathsForVisibleItemsInSections:(id)arg1;
- (id)indexPathsForVisibleItems;
- (id)contentCells;
- (id)visibleCells;
- (unsigned long long)numberOfContentCells;
- (unsigned long long)numberOfVisibleCells;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)cellForItemAtIndexPath:(id)arg1;
- (id)indexPathForSupplementaryView:(id)arg1;
- (id)indexPathForCell:(id)arg1;
- (id)indexPathForSupplementaryElementOfKind:(id)arg1 atPoint:(CGPoint)arg2;
- (id)indexPathForSupplementaryElementOfKind:(id)arg1 hitByEvent:(id)arg2;
- (id)indexPathForItemAtPoint:(CGPoint)arg1;
- (id)indexPathForItemHitByEvent:(id)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)resetScrollingOverdraw;
- (CGRect)documentContentRect;
- (void)updateLayout;
- (void)_setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 isInteractive:(BOOL)arg3 completion:(void(^)(BOOL finished))arg4; // probably void(^)(BOOL)
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 completion:(void(^)(BOOL finished))arg3; // ditto
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (void)registerNib:(id)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (Class)registeredClassForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;
- (void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (Class)registeredClassForCellWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (CGSize)contentSizeForFrameSize:(CGSize)arg1;
- (CGSize)frameSizeForContentSize:(CGSize)arg1;
- (void)windowDidChangeBackingProperties:(id)arg1;
- (void)clipViewBoundsDidChange:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)scrollViewDidEndLiveScrollNotification:(id)arg1;
- (void)scrollViewWillStartLiveScrollNotification:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(CGPoint)arg1;
@property (atomic, readwrite) CGSize contentSize;
- (void)setDocumentBounds:(CGRect)arg1;
- (CGRect)documentBounds;
- (CGSize)documentSize;
- (CGPoint)contentOffset;
- (BOOL)wantsUpdateLayer;
- (BOOL)isOpaque;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)_doubleSidedAnimationsForView:(id)arg1 withStartingLayoutAttributes:(id)arg2 startingLayout:(id)arg3 endingLayoutAttributes:(id)arg4 endingLayout:(id)arg5 withAnimationSetup:(void(^)(void))arg6 animationCompletion:(void(^)(BOOL finished))arg7 enableCustomAnimations:(BOOL)arg8 customAnimationsType:(unsigned long long)arg9; // probably SPI
- (CGPoint)layoutPointForCollectionViewPoint:(CGPoint)arg1;
- (CGPoint)collectionViewPointForLayoutPoint:(CGPoint)arg1;
- (void)setScrollerStyle:(long long)arg1;
- (void)setContentInsets:(NSEdgeInsets)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (BOOL)isBusy;
- (void)reloadData;
- (void)setNeedsLayout;
@property (nonatomic) BOOL allowsEmptySelection; // @synthesize allowsEmptySelection=_allowsEmptySelection;
@property (nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property (nonatomic) BOOL allowsSelection; // @synthesize allowsSelection=_allowsSelection;
- (void)deselectAllItems:(BOOL)arg1;
- (void)selectAllItems:(BOOL)arg1;
- (void)deselectItemsAtIndexPaths:(id)arg1 animated:(BOOL)arg2;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)selectItemsAtIndexPaths:(id)arg1 byExtendingSelection:(BOOL)arg2 animated:(BOOL)arg3 scrollItemAtIndex:(id)arg4 toPosition:(unsigned long long)arg5;
- (void)selectItemsAtIndexPaths:(id)arg1 byExtendingSelection:(BOOL)arg2 animated:(BOOL)arg3;
- (void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3;
- (BOOL)selectedItemAtIndexPath:(id)arg1;
- (BOOL)selectableItemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfSelectedItems;
- (id)indexPathsForSelectedItems;
@property (nonatomic, weak)  NSObject<UXCollectionViewDataSource> *dataSource; // @synthesize dataSource=_dataSource;
@property (nonatomic, weak)  NSObject<UXCollectionViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(CGPoint)arg2;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)rearrangingCoordinatorReloadLayout_;
@property (nonatomic, readonly) BOOL isRearranging_;
@property (nonatomic) double rearrangingPreviewDelay_;
@property (nonatomic) BOOL rearrangingContinuouslyUpdateInsideCells_;
@property (nonatomic) long long rearrangingInitiationMode_;
@property (nonatomic) BOOL rearrangingExternalDropEnabled_;
@property (nonatomic) BOOL rearrangingAllowAutoscroll_;
@property (nonatomic) BOOL rearrangingEnabled_;

@end

