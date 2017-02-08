//
//  AppDelegate.h
//  QRCreate
//
//  Created by xiaodev on Feb/8/17.
//  Copyright © 2017 xiaodev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

