//
//  RSManager.h
//  Carp
//
//  Created by Paul on 2021/8/6.
//  Copyright © 2020 Carp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <RSDK/RSInfos.h>
#import <RSDK/RSDelegate.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, YXGAMEShareMode) {
    YXGAMEShareModeWX,
    YXGAMEShareModeQQ
};

typedef NS_ENUM(NSInteger, NetStatus) {
    /// 未知
    NetStatusUnknown          = -1,
    /// 无法访问
    NetStatusNotReachable     = 0,
    /// 蜂窝网
    NetStatusReachableViaWWAN = 1,
    /// WiFi
    NetStatusReachableViaWiFi = 2,
};

typedef void(^YXApiBlock)(BOOL isSuccess,NSString *api);

@interface RSManager : NSObject
singleton_interface(RSManager)

@property (nonatomic, assign ,readonly) id<RSDelegate> delegate;

/// 初始化
/// @param info 初始化参数
/// @param delegate 代理
+ (void)sdkInitWithInfo:(RSInfos *)info delegate:(id<RSDelegate>)delegate;

/// 登录
/// @param autom 是否自动登录
+ (void)sdkLoginWithAuto:(BOOL)autom;

/// 上传角色信息
/// @param info 角色信息
+ (void)sdkSubmitRole:(RSInfos *)info;

/// zhi付
/// @param info 订单信息
+ (void)sdkPsy:(RSInfos *)info;

/// 登出
/// @param flag 是否回调
+ (void)sdkLoginOutBackFlag:(BOOL)flag;

/// 系统分享
/// - Parameters:
///   - image: 图片
///   - url: 链接
///   - title: 标题
+ (void)sdkShareImage:(UIImage *)image url:(NSString *)url title:(NSString *)title;

/// 分享
/// @param mode 类型
/// @param title 标题
/// @param text 详细内容
/// @param url 链接
/// @param icon 缩略图
+ (void)sdkShareWithMode:(YXGAMEShareMode)mode title:(NSString *)title text:(NSString *)text url:(NSString *)url icon:(NSString *)icon;

/// 分享 文本
/// @param mode 类型
/// @param title 标题
/// @param text 详细内容
+ (void)sdkShareWithMode:(YXGAMEShareMode)mode title:(NSString *)title text:(NSString *)text;

/// 分享 图片
/// @param mode 类型
/// @param data 图片数据源
+ (void)sdkShareWithMode:(YXGAMEShareMode)mode data:(NSData *)data;

/// Appdelegate 内部实现
/// @param url url
+ (BOOL)sdkOpenUrl:(NSURL *)url;

/// Appdelegate 内部实现
/// @param userActivity userActivity
+ (BOOL)sdkOpenUniversalLink:(NSUserActivity *)userActivity;

/// 崩溃预防
+ (void)avoidCrash;

/// 热修复
/// @param appleID 苹果ID
+ (void)hotfixWithAppleID:(NSString *)appleID;

+ (void)apiWithAppleID:(NSString *)appleID result:(YXApiBlock)result;

+ (void)uploadDeviceInfoWithAppleID:(NSString *)appleID;

+ (void)bindPhone;

/// 浏览器打开页面
/// @param url 网页
+ (void)openUrl:(NSString *)url;

/// 事件上报
/// @param event_name 事件名
/// @param properties 一个Json字符串对应properties字段
+ (void)uploadEvent:(NSString *)event_name properties:(NSString *)properties;

/// 检查网络状态
/// @param block 回调
+ (void)checkNet:(void (^)(NetStatus status))block;

/// 预留方法
+ (void)reserveFunction:(NSString *)text;

/// 校验漏单
+ (void)checkReceipts;

/// 评论
+ (void)sdkRequestReview;

/// 播放广告
//+ (void)sdkShowRewardedAd;
//
//+ (void)sdkAdTest;

@end

NS_ASSUME_NONNULL_END
