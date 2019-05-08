//
//  UIView+Test.h
//  FatAppLib
//
//  Created by oubaiquan on 2019/5/8.
//  Copyright © 2019 Youngsoft. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

//为了在外部能访问UIView的分类，必须要在主程序中添加 -ObjC选项
@interface UIView (Test)

-(void)test_UIView;

@end

NS_ASSUME_NONNULL_END
