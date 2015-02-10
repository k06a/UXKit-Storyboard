//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>

@interface UXCollectionViewUpdateItem : NSObject

@property (nonatomic, readonly) long long updateAction; // @synthesize updateAction=_updateAction;
@property (nonatomic, strong, readonly) NSIndexPath *indexPathAfterUpdate; // @synthesize indexPathAfterUpdate=_finalIndexPath;
@property (nonatomic, strong, readonly) NSIndexPath *indexPathBeforeUpdate; // @synthesize indexPathBeforeUpdate=_initialIndexPath;
- (long long)inverseCompareIndexPaths:(id)arg1;
- (long long)compareIndexPaths:(id)arg1;
- (id)description;
- (id)initWithOldIndexPath:(id)arg1 newIndexPath:(id)arg2;
- (id)initWithAction:(long long)arg1 forIndexPath:(id)arg2;
- (id)initWithInitialIndexPath:(id)arg1 finalIndexPath:(id)arg2 updateAction:(long long)arg3;

@end

