//
//  ViewController.m
//  FatApp
//
//  Created by oubaiquan on 2019/5/8.
//  Copyright © 2019 Youngsoft. All rights reserved.
//

#import "ViewController.h"
#import "CA.h"
#import "CB.h"
#import "../FatApp/FatAppLib/FatAppLib/FatAppLib.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    //为了能使用UIView的分类，所以工程中添加了-ObjC选项，这样整个工程中的所有OC类都会被链接。
    
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
