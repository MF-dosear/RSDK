//
//  GZDelegate.h
//  Carp
//
//  Created by Paul on 2021/8/6.
//  Copyright © 2020 Carp. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol RSDelegate <NSObject>

@optional
/// 初始化回调
/// @param flag 结果 true：成功 flase：失败
- (void)sdkInitResult:(BOOL)flag;

/// 登录回调
/// @param flag 结果 true：成功 flase：失败
/// @param userID userID
/// @param userName userName
/// @param session session
- (void)sdkLoginResult:(BOOL)flag userID:(NSString *)userID userName:(NSString *)userName session:(NSString *)session;

/// 上传角色回调
/// @param flag 结果 true：成功 flase：失败
- (void)sdkSubmitRoleResult:(BOOL)flag;

/// 支fu回调
/// @param flag 结果 true：成功 flase：失败
- (void)sdkPsyResult:(BOOL)flag;

/// 退出登录回调
/// @param flag 结果 true：成功 flase：失败
- (void)sdkLoginOutResult:(BOOL)flag;

/// 广告回调
- (void)sdkShowRewardBack:(NSInteger)code;

@end

NS_ASSUME_NONNULL_END
