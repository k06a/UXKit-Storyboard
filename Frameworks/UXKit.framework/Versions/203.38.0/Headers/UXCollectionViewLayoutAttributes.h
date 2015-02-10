//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>

@interface UXCollectionViewLayoutAttributes : NSObject <NSCopying>

+ (id)layoutAttributesForDecorationViewOfKind:(id)arg1 withIndexPath:(id)arg2;
+ (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2;
+ (id)layoutAttributesForCellWithIndexPath:(id)arg1;
@property (nonatomic, strong) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property (nonatomic) BOOL isFloatingPinned; // @synthesize isFloatingPinned=_isFloatingPinned;
@property (nonatomic) CGRect floatingFrame; // @synthesize floatingFrame=_floatingFrame;
@property (nonatomic) BOOL isFloating; // @synthesize isFloating=_isFloating;
@property (nonatomic) long long zIndex; // @synthesize zIndex=_zIndex;
@property (nonatomic) double alpha; // @synthesize alpha=_alpha;
@property (nonatomic) CGSize size; // @synthesize size=_size;
@property (nonatomic) CGPoint center; // @synthesize center=_center;
@property (nonatomic, readonly) NSString *representedElementKind; // @synthesize representedElementKind=_representedElementKind;
@property (nonatomic, readonly) unsigned long long representedElementCategory;
- (id)description;
@property (nonatomic) CGRect frame; // @synthesize frame=_frame;
@property (nonatomic) CGRect bounds;
@property (nonatomic, getter=isHidden) BOOL hidden;
- (id)init;

@end

