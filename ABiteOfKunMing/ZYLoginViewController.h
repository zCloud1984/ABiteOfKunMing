//
//  ZYLoginViewController.h
//  ABiteOfKunMing
//
//  Created by zCloud on 14-7-20.
//  Copyright (c) 2014年 Yun.Zou. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZYAppDelegate.h"
#import "ZYWeiBoManager.h"

@protocol ZYLoginViewControllerDelegate  <NSObject>


- (void)insertRowAtTop;

@end

@interface ZYLoginViewController : UIViewController

@property (weak, nonatomic) id <ZYLoginViewControllerDelegate> delegate;


@end
