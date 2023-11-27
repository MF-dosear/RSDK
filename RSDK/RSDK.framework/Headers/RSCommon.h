//
//  RSCommon.h
//  YXGAMESDK
//
//  Created by Paul on 2021/8/6.
//  Copyright © 2020 Carp. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface RSCommon : NSObject

/// 获取当前显示的ViewController
+ (UIViewController *)currentVC;

/// 去掉emoji
+(NSString *)pregReplaceEmojiWithString:(NSString *)string;

/// 获取一个唯一uuid
+ (NSString *)uuidWithKeychain;

// 获取uuid
+ (NSString *)idfa;

@end

NS_ASSUME_NONNULL_END
