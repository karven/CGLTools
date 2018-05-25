//
//  UIButton+Ext.h
//  GLToolsLib
//
//  Created by karven on 2018/5/17.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    /// 图片在左，文字在右
    ImagePositionStyleDefault,
    /// 图片在右，文字在左
    ImagePositionStyleRight,
    /// 图片在上，文字在下
    ImagePositionStyleTop,
    /// 图片在下，文字在上
    ImagePositionStyleBottom,
} ImagePositionStyle;

typedef void(^ButtonEventsBlock)(UIButton *button);

@interface UIButton (Ext)

/**
 *  保存当前点击按钮的时间
 */
@property (nonatomic, assign) NSTimeInterval cs_acceptEventTime;
/**
 *  设置按钮是否支持重复点击 默认是忽略重复点击
 */
@property (nonatomic, assign) BOOL ignoreRepeatClick;
/**
 *  按钮事件block
 */
@property (nonatomic, copy) ButtonEventsBlock buttonEventsBlock;

/**
 *  设置图片与文字样式
 *
 *  @param imagePositionStyle     图片位置样式
 *  @param spacing                图片与文字之间的间距
 */
- (void)imagePositionStyle:(ImagePositionStyle)imagePositionStyle spacing:(CGFloat)spacing;

/**
 *  设置图片与文字样式（推荐使用）
 *
 *  @param imagePositionStyle     图片位置样式
 *  @param spacing                图片与文字之间的间距
 *  @param imagePositionBlock     在此 Block 中设置按钮的图片、文字以及 contentHorizontalAlignment 属性
 */
- (void)imagePositionStyle:(ImagePositionStyle)imagePositionStyle spacing:(CGFloat)spacing imagePositionBlock:(void (^)(UIButton *button))imagePositionBlock;

- (void)addEventHandler:(void (^)(UIButton *button))block forControlEvents:(UIControlEvents)controlEvents;

@end
