//
//  DPIRKitConst.h
//  dConnectDeviceIRKit
//
//  Created by 安部 将史 on 2014/08/22.
//  Copyright (c) 2014年 NTT DOCOMO, INC. All rights reserved.
//

// 基本的にDPIRKitDevicePlugin.mで値を定義する。

extern NSString *const DPIRKitBundleName;
extern NSString *const DPIRKitInfoPlistName;

extern NSString *const DPIRKitUDKeyClientKey;
extern NSString *const DPIRKitUDKeySSID;
extern NSString *const DPIRKitUDKeySecType;
extern NSString *const DPIRKitUDKeyPassword;
extern NSString *const DPIRKitUDKeyDeviceKey;
extern NSString *const DPIRKitUDKeyDeviceId;

#define DPIRBundle() \
[NSBundle bundleWithPath:[[NSBundle mainBundle] pathForResource:DPIRKitBundleName ofType:@"bundle"]]

#define DPIRLocalizedString(bundle, key) \
[bundle localizedStringForKey:key value:@"" table:nil]

#define IPHONE4_H 480