//
//  GCDDelay.h
//  GestureView
//
//  Created by Mr.H on 2018/4/2.
//  Copyright © 2018年 Mr.H. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^GCDTask)(BOOL cancel);
typedef void(^gcdBlock)();

@interface GCDDelay : NSObject

+ (GCDTask)gcdDelay:(NSTimeInterval)time task:(gcdBlock)block;

+ (void)gcdCancel:(GCDTask)task;

@end
