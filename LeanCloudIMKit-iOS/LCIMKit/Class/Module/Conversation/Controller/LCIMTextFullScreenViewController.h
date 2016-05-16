//
//  LCIMTextFullScreenViewController.h
//  LeanCloudIMKit-iOS
//
//  Created by 陈宜龙 on 16/3/23.
//  Copyright © 2016年 ElonChan. All rights reserved.
//

#import "LCIMBaseViewController.h"
@class LCIMMessage;
typedef void (^LCIMRemoveFromWindowHandler)(void);
@interface LCIMTextFullScreenViewController : LCIMBaseViewController

@property (nonatomic, copy, readonly) NSString *text;

- (instancetype)initWithText:(NSString *)text;
- (void)setRemoveFromWindowHandler:(LCIMRemoveFromWindowHandler)removeFromWindowHandler;
@end
