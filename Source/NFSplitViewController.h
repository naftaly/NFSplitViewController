//
//  NFSplitViewController.h
//  SplitView
//
//  Created by Alexander Cohen on 2014-10-28.
//  Copyright (c) 2014 BedroomCode. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NFSplitViewController : NSViewController

- (void)collapseViewControllerAtIndex:(NSUInteger)index animated:(BOOL)animated;
- (BOOL)isViewControllerCollapsedAtIndex:(NSUInteger)index;

@property (nonatomic,strong) NSColor* splitterColor;

+ (CGFloat)dividerThickness;

- (void)transitionFromViewControllerAtIndex:(NSUInteger)index toViewController:(NSViewController*)viewController;

@end

@interface NSViewController (AKSplitViewController)

- (CGFloat)minimumWidthInSplitViewController:(NFSplitViewController*)splitViewController;
- (CGFloat)maximumWidthInSplitViewController:(NFSplitViewController*)splitViewController;
- (BOOL)canCollapseInSplitViewController:(NFSplitViewController*)splitViewController;

@property (nonatomic,readonly) NFSplitViewController* splitViewController;

@end