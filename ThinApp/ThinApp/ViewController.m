//
//  ViewController.m
//  ThinApp
//
//  Created by oubaiquan on 2019/5/8.
//  Copyright © 2019 Youngsoft. All rights reserved.
//

#import "ViewController.h"
#import "UIView+Test.h"
#import "../ThinApp/ThinAppLib/ThinAppLib/ThinAppLib.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    //最后的可执行程序只会链接CA,CC两个类，以及只会链接libFoo1函数。
    
    
    //实例化CA对象。
    CA *pA = [CA new];
    [pA fnCA];
    
    //实例化CC对象
    CC *pC = [CC new];
    [pC fnCC];
    
    //函数调用
    libFoo1();
    
    //分类调用
    [self.view test_UIView];
}


@end
