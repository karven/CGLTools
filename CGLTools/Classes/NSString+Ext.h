//
//  NSString+Ext.h
//  GLToolsLib
//
//  Created by karven on 2018/5/17.
//

#import <Foundation/Foundation.h>

@interface NSString (Ext)

/**
 *  计算文字高度
 *
 *  @param fontSize 字体
 *  @param width 最大宽度
 *  @return 高度
 */
- (CGFloat)heightWithFontSize:(CGFloat)fontSize width:(CGFloat)width;

/**
 *  计算文字宽度
 *  @param fontSize 字体
 *  @param maxHeight 最大高度
 *  @return 宽度
 */
- (CGFloat)widthWithFontSize:(CGFloat)fontSize height:(CGFloat)maxHeight;

/**
 *  去掉前后空格
 *  @return 去除空格后的字符串
 */
- (NSString*)trimmedString;
/****************************正则相关Begin****************************/
//是否只有中文
- (BOOL)isOnlyChinese;

//有效的邮箱
- (BOOL)isValidEmail;

//有效的字母数字密码
- (BOOL)isValidAlphaNumberPassword;

//检测有效身份证
- (BOOL)isValidIdentifyEighteen;

//限制只能输入数字
- (BOOL)isOnlyNumber;
/****************************正则相关End****************************/

- (NSString *)md5WithString;

@end
