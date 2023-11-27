# RSDK

[![CI Status](https://img.shields.io/travis/564057354@qq.com/RSDK.svg?style=flat)](https://travis-ci.org/564057354@qq.com/RSDK)
[![Version](https://img.shields.io/cocoapods/v/RSDK.svg?style=flat)](https://cocoapods.org/pods/RSDK)
[![License](https://img.shields.io/cocoapods/l/RSDK.svg?style=flat)](https://cocoapods.org/pods/RSDK)
[![Platform](https://img.shields.io/cocoapods/p/RSDK.svg?style=flat)](https://cocoapods.org/pods/RSDK)

## Example

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements

## Installation

RSDK is available through [CocoaPods](https://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod 'RSDK'
```

## Author

 罗小黑不吹, dosear@qq.com，http://www.dosear.cn
 
## Methods

* 初始化
```swift
    RSInfos *info = [RSInfos sharedRSInfos];
    info.AppID  = SuperID;
    info.AppKey = SuperKey;

    info.OneLoginAppID = OneLoginAppID;
    info.link_suffix = LINK;
    
    info.AppleID = AppleID;

    [RSManager sdkInitWithInfo:info delegate:self];
```

* 登录
```objc
    // 登录
    [RSManager sdkLoginWithAuto:true];
```

* 支付
```objc
    // 支付
    RSInfos *info = [RSInfos sharedRSInfos];

    info.serverID    = [NSString stringWithFormat:@"%@",params[@"serverId"]];
    info.roleID      = [NSString stringWithFormat:@"%@",params[@"roleID"]];
    info.serverName  = [NSString stringWithFormat:@"%@",params[@"serverName"]];
    info.roleName    = [NSString stringWithFormat:@"%@",params[@"roleName"]];
    info.psyLevel    = [NSString stringWithFormat:@"%@",params[@"payLevel"]];
    info.roleLevel   = [NSString stringWithFormat:@"%@",params[@"roleLevel"]];

    info.cpOrder    = [NSString stringWithFormat:@"%@",params[@"cpOrder"]];
    info.price       = [NSString stringWithFormat:@"%@",params[@"price"]];
    info.goodsID    = [NSString stringWithFormat:@"%@",params[@"goodsId"]];
    info.goodsName  = [NSString stringWithFormat:@"%@",params[@"goodsName"]];

    [RSManager sdkPsy:info];
```

* 上报角色
```objc
    // 上报角色
    RSInfos *info = [RSInfos sharedRSInfos];

    info.roleName  = [NSString stringWithFormat:@"%@",params[@"roleName"]];
    info.roleID = [NSString stringWithFormat:@"%@",params[@"roleID"]];

    info.roleLevel  = [NSString stringWithFormat:@"%@",params[@"roleLevel"]];
    info.psyLevel = [NSString stringWithFormat:@"%@",params[@"payLevel"]];

    info.serverName  = [NSString stringWithFormat:@"%@",params[@"serverName"]];
    info.serverID = [NSString stringWithFormat:@"%@",params[@"serverId"]];

    [RSManager sdkSubmitRole:info];
```

* 退出SDK
```objc
    // 退出SDK
    [RSManager sdkLoginOutBackFlag:true];
```

* 回调 HRDelegate
```objc

    #pragma mark -- HRDelegate
    - (void)sdkInitResult:(BOOL)flag{
    
    }

    - (void)sdkLoginResult:(BOOL)flag userID:(NSString *)userID userName:(NSString *)userName session:(NSString *)session{
    
    }

    - (void)sdkSubmitRoleResult:(BOOL)flag{

    }

    - (void)sdkPsyResult:(BOOL)flag{

    }

    - (void)sdkLoginOutResult:(BOOL)flag{
    
    }
```

## License

RSDK is available under the MIT license. See the LICENSE file for more info.
