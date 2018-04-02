//
//  MYZGestureView.h
//  GestureView
//
//  Created by Mr.H on 2018/4/2.
//  Copyright © 2018年 Mr.H. All rights reserved.
//
//  手势的九宫格

#import <UIKit/UIKit.h>

@interface MYZGestureView : UIView

/**
 *  手势操作完成回调方法,参数为手势划过的顺序密码0-8
 */
@property (nonatomic, copy) BOOL(^gestureResult)(NSString * gestureCode);

/**
 *  是否显示手势划过的轨迹
 */
@property (nonatomic, getter=isHideGesturePath) BOOL hideGesturePath;

/**
 *  是否显示手势划过的方向,就是每个圆里的三角箭头
 */
@property (nonatomic, getter=isShowArrowDirection) BOOL showArrowDirection;

@end
