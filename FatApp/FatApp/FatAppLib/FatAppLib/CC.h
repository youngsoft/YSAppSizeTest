//
//  CC.h
//  FatAppLib
//
//  Created by oubaiquan on 2019/5/8.
//  Copyright © 2019 Youngsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//这个类会被链接
@interface CC : NSObject

-(void)fnCC;

@end

//虽然CD没有被任何地方调用，但是因为CC被调用，而CD又和CC在同一个文件中定义所以CD也会被链接
@interface CD : NSObject

-(void)fnCD;

@end

NS_ASSUME_NONNULL_END
