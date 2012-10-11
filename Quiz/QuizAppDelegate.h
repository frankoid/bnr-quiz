//
//  QuizAppDelegate.h
//  Quiz
//
//  Created by Francis Devereux on 11/10/2012.
//  Copyright (c) 2012 Francis Devereux. All rights reserved.
//

#import <UIKit/UIKit.h>

@class QuizViewController;

@interface QuizAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) QuizViewController *viewController;

@end
