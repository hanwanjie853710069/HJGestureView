//
//  SCHeader.h
//  GestureView
//
//  Created by Mr.H on 2018/4/2.
//  Copyright © 2018年 Mr.H. All rights reserved.
//

#ifndef SCHeader_h
#define SCHeader_h

#define ScreenBounds [UIScreen mainScreen].bounds

#define ScreenWidth  ScreenBounds.size.width

#define ScreenHeight ScreenBounds.size.height

/// 手势圆圈正常的颜色
#define SCCircleNormalColor   UIColorFrom16RGB(0x33CCFF,1.0)

/// 手势圆圈选中的颜色
#define SCCircleSelectedColor UIColorFrom16RGB(0x3393F2,1.0)

/// 手势圆圈错误的颜色
#define SCCircleErrorColor    UIColorFrom16RGB(0xFF0033,1.0)

// 手势密码提示Label的高度
#define LabelHeight 20.0f

// 手势密码九宫格view的宽高
#define GestureWH   260.0f

/// 根据16位RBG值转换成颜色，格式:UIColorFrom16RGB(0xFF0000)
#define UIColorFrom16RGB(rgbValue,alp) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:alp]

/// 根据10位RBG值转换成颜色, 格式:UIColorFrom10RGB(255,255,255)
#define UIColorFrom10RGB(RED, GREEN, BLUE,alp) [UIColor colorWithRed:RED/255.0 green:GREEN/255.0 blue:BLUE/255.0 alpha:alp]

#endif
