/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"



@class NSMutableDictionary, NSMutableIndexSet, UICollectionView, UICollectionViewLayoutInvalidationContext, UIDynamicAnimator;



@interface UICollectionViewLayout : NSObject <NSCoding>

{

    UICollectionView *_collectionView;

    struct CGSize _collectionViewBoundsSize;

    NSMutableDictionary *_initialAnimationLayoutAttributesDict;

    NSMutableDictionary *_finalAnimationLayoutAttributesDict;

    NSMutableDictionary *_deletedSupplementaryIndexPathsDict;

    NSMutableDictionary *_insertedSupplementaryIndexPathsDict;

    NSMutableDictionary *_deletedDecorationIndexPathsDict;

    NSMutableDictionary *_insertedDecorationIndexPathsDict;

    NSMutableIndexSet *_deletedSectionsSet;

    NSMutableIndexSet *_insertedSectionsSet;

    NSMutableDictionary *_decorationViewClassDict;

    NSMutableDictionary *_decorationViewNibDict;

    NSMutableDictionary *_decorationViewExternalObjectsTables;

    UICollectionViewLayout *_transitioningFromLayout;

    UICollectionViewLayout *_transitioningToLayout;

    _Bool _inTransitionFromTransitionLayout;

    _Bool _inTransitionToTransitionLayout;

    UIDynamicAnimator *_animator;

    UICollectionViewLayoutInvalidationContext *_invalidationContext;

}



+ (Class)invalidationContextClass;

+ (Class)layoutAttributesClass;

- (id)_animationForReusableView:(SEL)arg1 toLayoutAttributes:(id)arg2;

- (id)_animationForReusableView:(SEL)arg1 toLayoutAttributes:(id)arg2 type:(id)arg3;

- (id)_decorationViewForLayoutAttributes:(id)arg1;

- (void)_didFinishLayoutTransitionAnimations:(_Bool)arg1;

- (id)_dynamicAnimator;

- (void)_finalizeCollectionViewItemAnimations;

- (void)_finalizeLayoutTransition;

- (id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg1;

- (id)_indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;

- (id)_indexPathsToInsertForDecorationViewOfKind:(id)arg1;

- (id)_indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;

- (void)_invalidateLayoutUsingContext:(id)arg1;

- (void)_prepareForTransitionFromLayout:(id)arg1;

- (void)_prepareForTransitionToLayout:(id)arg1;

- (void)_prepareToAnimateFromCollectionViewItems:(id)arg1 atContentOffset:(struct CGPoint)arg2 toItems:(id)arg3 atContentOffset:(struct CGPoint)arg4;

- (void)_setCollectionView:(id)arg1;

- (void)_setCollectionViewBoundsSize:(struct CGSize)arg1;

- (void)_setDynamicAnimator:(id)arg1;

- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfDecorationViewOfKind:(id)arg2;

- (_Bool)_supportsAdvancedTransitionAnimations;

- (struct CGRect)bounds;

@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;

- (struct CGSize)collectionViewContentSize;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;

- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;

- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;

- (void)finalizeAnimatedBoundsChange;

- (void)finalizeCollectionViewUpdates;

- (void)finalizeLayoutTransition;

- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;

- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;

- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg1;

- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;

- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;

- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;

- (void)invalidateLayout;

- (void)invalidateLayoutWithContext:(id)arg1;

- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;

- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;

- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;

- (id)layoutAttributesForItemAtIndexPath:(id)arg1;

- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;

- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;

- (void)prepareForCollectionViewUpdates:(id)arg1;

- (void)prepareForTransitionFromLayout:(id)arg1;

- (void)prepareForTransitionToLayout:(id)arg1;

- (void)prepareLayout;

- (void)registerClass:(Class)arg1 forDecorationViewOfKind:(id)arg2;

- (void)registerNib:(id)arg1 forDecorationViewOfKind:(id)arg2;

- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

- (id)snapshottedLayoutAttributeForItemAtIndexPath:(id)arg1;

- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;

- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;

- (struct CGPoint)transitionContentOffsetForProposedContentOffset:(struct CGPoint)arg1 keyItemIndexPath:(id)arg2;

- (struct CGPoint)updatesContentOffsetForProposedContentOffset:(struct CGPoint)arg1;



@end

