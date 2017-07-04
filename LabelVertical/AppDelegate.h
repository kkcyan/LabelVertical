//
//  AppDelegate.h
//  LabelVertical
//
//  Created by 范玉杰 on 2017/7/4.
//  Copyright © 2017年 范玉杰. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

