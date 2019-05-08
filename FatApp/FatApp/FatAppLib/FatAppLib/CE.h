//
//  CE.h
//  FatAppLib
//
//  Created by oubaiquan on 2019/5/8.
//  Copyright © 2019 Youngsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//CE 在单独文件中被定义，并且不会被调用，但是因为这个工程中添加了-ObjC选项所以还是会被链接进程序中。
@interface CE : NSObject

-(void)fnCE;

@end

NS_ASSUME_NONNULL_END
