//
//  CGLViewController.m
//  CGLTools
//
//  Created by karven on 05/18/2018.
//  Copyright (c) 2018 karven. All rights reserved.
//

#import "CGLViewController.h"
#import <CGLTools/Tools.h>

@interface CGLViewController ()

@end

@implementation CGLViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    UIButton *button = [[UIButton alloc] initWithFrame:CGRectMake(0, 100, kScreenWidth, 300)];
    [button setImage:[UIImage imageNamed:@"QQ20180525-0.jpg"] forState:UIControlStateNormal];
    [button setImage:[UIImage imageNamed:@"QQ20180525-1.jpg"] forState:UIControlStateHighlighted];
    [button setTitle:@"我是来测试的" forState:UIControlStateNormal];
    
    CGFloat titleHeight = button.titleLabel.intrinsicContentSize.height;
    CGFloat titleWidth = button.titleLabel.intrinsicContentSize.width;
    CGFloat imageHeight = button.imageView.frame.size.height;
    CGFloat imageWidth = button.imageView.frame.size.width;
    //间隔是10
    [button setImageEdgeInsets:UIEdgeInsetsMake(-titleHeight-10, titleWidth, 0, 0)];
    [button setTitleEdgeInsets:UIEdgeInsetsMake(0, -imageHeight, -imageWidth-10, 0)];
    
    button.backgroundColor = [UIColor redColor];
    [button addEventHandler:^(UIButton *btn) {
        NSLog(@"dianji");
    } forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:button];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
