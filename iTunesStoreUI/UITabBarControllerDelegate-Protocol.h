/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol UITabBarControllerDelegate <NSObject>



@optional

- (id)tabBarController:(id)arg1 animationControllerForTransitionFromViewController:(id)arg2 toViewController:(id)arg3;

- (void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(_Bool)arg3;

- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;

- (id)tabBarController:(id)arg1 interactionControllerForAnimationController:(id)arg2;

- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;

- (void)tabBarController:(id)arg1 willBeginCustomizingViewControllers:(id)arg2;

- (void)tabBarController:(id)arg1 willEndCustomizingViewControllers:(id)arg2 changed:(_Bool)arg3;

- (long long)tabBarControllerPreferredInterfaceOrientationForPresentation:(id)arg1;

- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;

@end

