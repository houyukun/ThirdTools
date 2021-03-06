//
//  UIImage+Extension.h
//  
//

#import <UIKit/UIKit.h>

@interface UIImage (Extension)

/**
 *  根据图片名返回一张能够自由拉伸的图片
 */
+ (UIImage *)resizedImage:(NSString *)name;
/**
 *  图片等比缩放
 */
- (UIImage *)scaleToWidth:(CGFloat)width;
@end
