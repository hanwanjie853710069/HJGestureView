//
//  MYZCircleView.h
//  GestureView
//
//  Created by Mr.H on 2018/4/2.
//  Copyright © 2018年 Mr.H. All rights reserved.
//
//  绘制手势时，圆圈的圆心

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, GestureViewStatus) {
    GestureViewStatusNormal,
    GestureViewStatusSelected,
    GestureViewStatusSelectedAndShowArrow,
    GestureViewStatusError,
    GestureViewStatusErrorAndShowArrow,
};

@interface MYZCircleView : UIView

@property (nonatomic, assign) GestureViewStatus circleStatus;

/** 相邻两圆圈连线的方向角度 */
@property (nonatomic) CGFloat angle;

@end
