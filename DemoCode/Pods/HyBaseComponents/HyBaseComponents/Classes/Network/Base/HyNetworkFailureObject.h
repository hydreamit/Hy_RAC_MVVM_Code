//
//  HyNetworkFailureObject.h
//  DemoCode
//
//  Created by Hy on 2017/12/16.
//  Copyright © 2017 Hy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HyNetworkFailureProtocol.h"

NS_ASSUME_NONNULL_BEGIN

#define NetworkFailureObject(error, task) HyNetworkFailureObject.failureObject(error, task)

@interface HyNetworkFailureObject : NSObject <HyNetworkFailureProtocol>

+ (id<HyNetworkFailureProtocol>(^)(id _Nullable, id<HyNetworkSingleTaskProtocol>))failureObject;

@end

NS_ASSUME_NONNULL_END
