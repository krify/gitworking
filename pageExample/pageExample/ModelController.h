//
//  ModelController.h
//  pageExample
//
//  Created by Krishna Reddy Kovvuri on 13/11/15.
//  Copyright © 2015 Krify. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

