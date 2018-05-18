//
//  UIView+Ext.h
//  GLToolsLib
//
//  Created by karven on 2018/5/17.
//

#import <UIKit/UIKit.h>

@interface UIView (Ext)

/*************************UIView Frame*************************/
- (CGFloat)left;
- (CGFloat)right;
- (CGSize)size;
- (CGFloat)top;
- (CGFloat)bottom;
- (CGFloat)width;
- (CGFloat)height;
- (CGFloat)centerX;
- (CGFloat)centerY;
- (CGFloat)maxX;
- (CGFloat)maxY;
- (void)setLeft:(CGFloat)left;
- (void)setRight:(CGFloat)right;
- (void)setSize:(CGSize)size;
- (void)setTop:(CGFloat)top;
- (void)setBottom:(CGFloat)bottom;
- (void)setWidth:(CGFloat)width;
- (void)setHeight:(CGFloat)height;
- (void)setCenterX:(CGFloat)centerX;
- (void)setCenterY:(CGFloat)centerY;
- (void)setOrigin:(CGPoint)point;
- (void)setAddTop:(CGFloat)top;
- (void)setAddLeft:(CGFloat)left;

/*************************UIView截图相关*************************/
//View截图
- (UIImage *)screenshot;

//ScrollView截图contentOffset
- (UIImage *)screenshotForScrollViewWithContentOffset:(CGPoint)contentOffset;

//View按Rect截图
- (UIImage *)screenshotInFrame:(CGRect)frame;

@end
