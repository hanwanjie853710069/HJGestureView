//
//  ViewController.m
//  HJGestureView
//
//  Created by xxx on 2018/4/2.
//  Copyright © 2018年 wangmumu. All rights reserved.
//

#import "ViewController.h"
#import "MYZGestureView.h"
#define MarginTop   25.0
#define Margin      8.0
#define ShapeWH     40.0
#define BottomHeight  44.0

@interface ViewController ()

/// 手势九宫格
@property (nonatomic, strong) MYZGestureView * gestureView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self setupGestureView];
    
}

/// 手势九宫格
- (void)setupGestureView {
    
    [self.view addSubview:self.gestureView];
    //是否显示指示手势划过的方向箭头, 在初始设置手势密码的时候才显示, 其他的不用显示
    self.gestureView.showArrowDirection = YES;
    
    
    [self.gestureView setGestureResult:^BOOL(NSString *gestureCode) {
        NSLog(@"%@",gestureCode);
        return YES;
    }];
}

/// 手势九宫格f
- (MYZGestureView *)gestureView {
    if (!_gestureView) {
        CGFloat gestureViewX = (ScreenWidth - GestureWH) * 0.5;
        CGFloat gestureViewY = MarginTop * 2.0 + Margin + ShapeWH + LabelHeight;
        _gestureView = [[MYZGestureView alloc] initWithFrame:CGRectMake(gestureViewX, gestureViewY, GestureWH, GestureWH)];
    }
    return _gestureView;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
