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

@property (nonatomic,getter=isVertical) BOOL vertical;
@property (nonatomic,strong) NSColor* splitterColor;

+ (CGFloat)dividerThickness;

- (void)transitionFromViewControllerAtIndex:(NSUInteger)index toViewController:(NSViewController*)viewController;

@end

@interface NSViewController (AKSplitViewController)

- (CGFloat)minimumLengthInSplitViewController:(NFSplitViewController*)splitViewController;
- (CGFloat)maximumLengthInSplitViewController:(NFSplitViewController*)splitViewController;
- (BOOL)canCollapseInSplitViewController:(NFSplitViewController*)splitViewController;

@property (nonatomic,readonly) NFSplitViewController* splitViewController;

@end