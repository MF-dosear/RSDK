///
///  YXInit.h
///  YXGAMESDK
///
///  Created by Paul on 2021/8/13.
///  Copyright © 2020 Carp. All rights reserved.
///

#import <Foundation/Foundation.h>
#import <RSDK/Singleton.h>

NS_ASSUME_NONNULL_BEGIN

@interface RSInfos : NSObject
singleton_interface(RSInfos)

/// 初始化信息
/// Apple ID
@property (nonatomic, copy) NSString *AppleID;
/// super appid
@property (nonatomic, copy) NSString *AppID;
/// super appkey
@property (nonatomic, copy) NSString *AppKey;
/// link后缀 包名
@property (nonatomic, copy) NSString *link_suffix;
///// 广点通 id
//@property (nonatomic, copy) NSString *GDTID;
///// 广点通 key
//@property (nonatomic, copy) NSString *GDTKey;
///// 头条 key
//@property (nonatomic, copy) NSString *TTKey;
///// 头条 name
//@property (nonatomic, copy) NSString *TTName;
/// 爱奇艺 appid
//@property (nonatomic, copy) NSString *AQYID;
///// 爱奇艺 storeid
//@property (nonatomic, copy) NSString *AQYStoreID;
@property (nonatomic, copy) NSString *AdsAppID;
@property (nonatomic, copy) NSString *AdsAppKey;
@property (nonatomic, copy) NSString *AdsID;
/// 一键登录 appid
@property (nonatomic, copy) NSString *OneLoginAppID;

/// 角色信息
/// 服务器名字
@property (nonatomic, copy) NSString *serverName;
/// 游戏区服
@property (nonatomic, copy) NSString *serverID;
/// 角色名
@property (nonatomic, copy) NSString *roleName;
/// 角色id
@property (nonatomic, copy) NSString *roleID;
/// 角色等级
@property (nonatomic, copy) NSString *roleLevel;
/// Vip等级
@property (nonatomic, copy) NSString *psyLevel;

/// 订单信息
/// cp方产生的订单(必传)
@property (nonatomic, copy) NSString *cpOrder;
/// 支付需要的价格单位(元)(必传)
@property (nonatomic, copy) NSString *price;
/// 商品号(必传)
@property (nonatomic, copy) NSString *goodsID;
/// 商品名称
@property (nonatomic, copy) NSString *goodsName;
/// 拓展字段
@property (nonatomic, copy) NSString *extends;
/// 回调地址
@property (nonatomic, copy) NSString *notify;

@end

NS_ASSUME_NONNULL_END
