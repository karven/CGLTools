//
//  NSObject+Ext.h
//  GLToolsLib
//
//  Created by karven on 2018/5/17.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

@interface NSObject (Ext)

@property (nonatomic, strong, readonly) NSMutableArray *associatedObjectNames;

/**
 *  为当前object动态增加属性
 *
 *  @param propertyName   属性名称
 *  @param value  属性值
 *  @param policy 属性内存管理类型
 */
- (void)objc_setAssociatedObject:(NSString *)propertyName value:(id)value policy:(objc_AssociationPolicy)policy;
/**
 *  获取当前object某个动态增加的属性
 *
 *  @param propertyName 属性名称
 *
 *  @return 值
 */
- (id)objc_getAssociatedObject:(NSString *)propertyName;
/**
 *  删除动态增加的所有属性
 */
- (void)objc_removeAssociatedObjects;
/**
 *  获取对象的所有属性
 *
 *  @return 属性dict
 */
- (NSArray *)getProperties;

//用altSel的实现覆盖origSel的实现(分别是实例方法和类方法)
+ (BOOL)overrideMethod:(SEL)origSel withMethod:(SEL)altSel;
+ (BOOL)overrideClassMethod:(SEL)origSel withClassMethod:(SEL)altSel;
//交换origSel与altSel方法(分别是实例与类)
+ (BOOL)exchangeMethod:(SEL)origSel withMethod:(SEL)altSel;
+ (BOOL)exchangeClassMethod:(SEL)origSel withClassMethod:(SEL)altSel;

/**
 *  在主线程运行block
 *
 *  @param aInMainBlock 被运行的block
 */
+ (void)performInMainThreadBlock:(void(^)(void))aInMainBlock;
/**
 *  延时在主线程运行block
 *
 *  @param aInMainBlock 被运行的block
 *  @param delay        延时时间
 */
+ (void)performInMainThreadBlock:(void(^)(void))aInMainBlock afterSecond:(NSTimeInterval)delay;
/**
 *  在非主线程运行block
 *
 *  @param aInThreadBlock 被运行的block
 */
+ (void)performInThreadBlock:(void(^)(void))aInThreadBlock;
/**
 *  延时在非主线程运行block
 *
 *  @param aInThreadBlock 被运行的block
 *  @param delay          延时时间
 */
+ (void)performInThreadBlock:(void(^)(void))aInThreadBlock afterSecond:(NSTimeInterval)delay;

@end
