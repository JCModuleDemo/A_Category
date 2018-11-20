//
//  CTMediator+A.h
//  A_Category
//
//  Created by JuneCheng on 2018/11/20.
//  Copyright © 2018 zjhcsoft. All rights reserved.
//

#import <CTMediator/CTMediator.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTMediator (A)

- (UIViewController *)A_Category_Swift_ViewControllerWithCallback:(void(^)(NSString *result))callback;
- (UIViewController *)A_Category_Objc_ViewControllerWithCallback:(void(^)(NSString *result))callback;

@end

NS_ASSUME_NONNULL_END
