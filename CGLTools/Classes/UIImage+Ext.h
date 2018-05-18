//
//  UIImage+Ext.h
//  GLToolsLib
//
//  Created by karven on 2018/5/17.
//

#import <UIKit/UIKit.h>

@interface UIImage (Ext)

//由颜色生成图片
+ (UIImage *)imageWithColor:(UIColor*)color;

//将图片剪裁至目标尺寸
+ (UIImage *)imageByScalingAndCroppingForSourceImage:(UIImage *)sourceImage targetSize:(CGSize)targetSize;

//图片旋转角度
- (UIImage *)imageRotatedByDegrees:(CGFloat)degrees;

//拉伸图片UIEdgeInsets
- (UIImage *)resizableImage:(UIEdgeInsets)insets;

//拉伸图片CGFloat
- (UIImage *)imageByResizeToScale:(CGFloat)scale;

//放大图片CGSize
- (UIImage *)imageByResizeWithMaxSize:(CGSize)size;

//小样图图片CGSize
- (UIImage *)imageWithThumbnailForSize:(CGSize)size;

//通过Rect剪裁图片
- (UIImage *)imageByCropToRect:(CGRect)rect;

//图片增加圆角
- (UIImage *)imageByRoundCornerRadius:(CGFloat)radius;

//图片增加圆角及边框
- (UIImage *)imageByRoundCornerRadius:(CGFloat)radius
                           borderWidth:(CGFloat)borderWidth
                           borderColor:(UIColor *)borderColor;
//图片旋转，传入度与方向
+ (UIImage *)image:(UIImage *)image rotation:(UIImageOrientation)orientation degree:(double)degree;

@end
