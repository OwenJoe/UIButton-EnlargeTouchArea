//
//  UIButton+EnlargeTouchArea.h
//  ElectronicPrescribing
//
//  Created by imac on 2016/10/25.
//  Copyright © 2016年 Rany. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (EnlargeTouchArea)


/**
 扩大button按钮点击范围

 @param top    <#top description#>
 @param right  <#right description#>
 @param bottom <#bottom description#>
 @param left   <#left description#>
 */
- (void)setEnlargeEdgeWithTop:(CGFloat) top right:(CGFloat) right bottom:(CGFloat) bottom left:(CGFloat) left;
@end
