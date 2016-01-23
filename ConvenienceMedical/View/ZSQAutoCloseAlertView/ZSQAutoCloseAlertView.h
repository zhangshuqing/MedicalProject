//
//  ZSQAutoCloseAlertView.h
//  ConvenienceMedical
//
//  Created by 张树青 on 16/1/15.
//  Copyright (c) 2016年 zsq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface ZSQAutoCloseAlertView : NSObject

//显示提示 并且在time秒之后自动关闭提示框
+ (void)showAlertMassgeWithController:(UIViewController *)ctr  andMessage:(NSString *)message andInterval:(NSTimeInterval)time;

@end
