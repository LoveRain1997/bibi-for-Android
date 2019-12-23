//
//  RSUpdateManager.h
//  UpdateProject
//
//  Created by XiaDian on 2017/3/27.
//  Copyright © 2017年 Boreee. All rights reserved.
//

#import <Foundation/Foundation.h>
////版本更新
//"new version" ="新版本";
//"update" ="更新";
//"NO update" ="暂不更新";
//本app的唯一识别码 跳转appStore需要真机
#define APPID  @"888237539"
//设置点击取消更新的总共展示次数 超过次数就不在提示更新版本了
#define MAXCHANNELCOUNT 4
//弹窗的展示标题
#define UPDATEMESSEGE  NSLocalizedStringFromTable(@"new version",@"Internation", nil)
//弹窗的确定按钮文字
#define UPDATEOK  NSLocalizedStringFromTable(@"update",@"Internation", nil)
//弹窗的取消按钮文字
#define UPDATECHANNEL  NSLocalizedStringFromTable(@"NO update",@"Internation", nil)

@interface XDUpdateManager : NSObject

/**
 检查是否需要更新

 @param isForce 是否是必要去AppStore更新版本
 */
+ (void)CheckVersionUpadateWithForce:(BOOL)isForce;

@end
