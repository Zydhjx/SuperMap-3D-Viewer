//
//  SearchViewController.h
//  SuperMap 3D Viewer
//
//  Created by zyd on 16/4/18.
//  Copyright © 2016年 zyd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SearchViewController : UIViewController

@property (copy, nonatomic) void (^deliverData)(NSArray *items);

@end
