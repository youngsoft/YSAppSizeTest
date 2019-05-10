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

/*
  通过在分类的头文件中定义一个内联函数，内联函数调用分类实现文件中的一个dumy函数,这样只要这个分类的头文件被include或者import就会把
  整个分类的实现链接到可执行程序中去。一般情况下我们在静态库中建立分类那就表明一定会被某个文件引用这个分类，从而实现整个文件的链接处理。
  而在分类中定义的这两个函数则因为没有被任何地方调用，因此会在链接优化中将这两个函数给优化掉。这样就使得即使我们不用-ObjC选项也能
  将静态库中的分类链接到可执行程序中去。最后需要注意的是在每个分类中定义的这两个函数名最好能够唯一这样就不会出现符号重名冲突的问题了。
 */
extern void _cat_UIView_Test_Impl(void);
OS_ALWAYS_INLINE void _cat_UIView_Test_Decl(void){_cat_UIView_Test_Impl();}

NS_ASSUME_NONNULL_END
