//
//  CB.h
//  FatApp
//
//  Created by oubaiquan on 2019/5/8.
//  Copyright © 2019 Youngsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//这个类会被链接，在主程序中，虽然没有被调用但是还是被链接了。
@interface CB : NSObject

-(void)fnCB;

@end

NS_ASSUME_NONNULL_END
