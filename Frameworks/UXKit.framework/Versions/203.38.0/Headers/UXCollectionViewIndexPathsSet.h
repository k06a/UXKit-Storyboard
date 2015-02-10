//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>

@class _UXCollectionViewSectionItemIndexes;

@interface UXCollectionViewIndexPathsSet : NSObject <NSCopying, NSMutableCopying>

+ (id)indexPathsSetWithIndexPathsSet:(id)arg1;
+ (id)indexPathsSetWithIndexPaths:(id)arg1;
+ (id)indexPathsSetWithIndexPath:(id)arg1;
+ (id)indexPathsSet;
- (BOOL)containsIndexPath:(id)arg1;
- (void)enumerateIndexPathsUsingBlock:(void(^)(NSIndexPath *indexPath, BOOL *stop))arg1;
- (id)lastIndexPath;
- (id)firstIndexPath;
- (id)allIndexPaths;
- (id)indexPathsForSections:(id)arg1;
- (id)indexPathsForSection:(long long)arg1;
- (id)sections;
- (unsigned long long)count;
- (id)description;
- (id)initWithIndexPathsSet:(id)arg1;
- (id)initWithIndexPaths:(id)arg1;
- (id)initWithIndexPath:(id)arg1;
- (id)init;

@end

