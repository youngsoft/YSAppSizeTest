//
//  UIView+Test.h
//  FatAppLib
//
//  Created by oubaiquan on 2019/5/8.
//  Copyright © 2019 Youngsoft. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

//类的分类方法最好在主程序工程中实现。这样就不需要在链接静态库时指定-ObjC选项。
@interface UIView (Test)

-(void)test_UIView;

@end

NS_ASSUME_NONNULL_END
