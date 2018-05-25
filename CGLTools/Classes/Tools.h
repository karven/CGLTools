//
//  Tools.h
//  Pods
//
//  Created by karven on 2018/5/25.
//

#import "NSObject+Ext.h"
#import "NSString+Ext.h"
#import "UIButton+Ext.h"
#import "UIColor+Ext.h"
#import "UIImage+Ext.h"
#import "UIView+Ext.h"

#ifndef Tools_h
#define Tools_h

#define kScreenWidth [UIScreen mainScreen].bounds.size.width
#define kScreenHeight [UIScreen mainScreen].bounds.size.height
#define kSystemVersion [[[UIDevice currentDevice] systemVersion] floatValue]  //获得手机系统版本

#define CKiPhoneX                  (KScreenWidth == 375 && KScreenHeight == 812 ? YES:NO)
#define CKNavibarH                 (CKiPhoneX ? 88 : 64)
#define CKTabbarH                  (CKiPhoneX ? (49 + 34) : 49)
#define CKStatusbarH               (CKiPhoneX ? 44 : 20)
#define CKBottomOffset             (CKiPhoneX ? 34:0) //底部高度差

#endif /* Tools_h */
