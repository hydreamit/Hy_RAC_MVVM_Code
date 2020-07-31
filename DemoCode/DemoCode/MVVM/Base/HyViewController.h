//
//  HyViewController.h
//  DemoCode
//
//  Created by Hy on 2017/11/19.
//  Copyright © 2017 Hy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HyViewModel.h"
#import "HyViewControllerProtocol.h"
#import "HyViewControllerJumpProtocol.h"
#import <HyCategoriess/UIViewController+HyExtension.h>


NS_ASSUME_NONNULL_BEGIN

 @interface HyViewController<__covariant viewModelType: HyViewModel *>
          : UIViewController <HyViewControllerJumpProtocol, HyViewControllerProtocol>

@property (nonatomic,strong) viewModelType viewModel;

@end

NS_ASSUME_NONNULL_END
