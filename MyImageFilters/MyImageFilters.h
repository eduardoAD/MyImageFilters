//
//  MyImageFilters.h
//  MyImageFilters
//
//  Created by Eduardo Alvarado Díaz on 3/11/15.
//  Copyright (c) 2015 Organization. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MyImageFilters : NSObject

@property (nonatomic,readonly) UIImage *originalImage;

- (id)initWithImage:(UIImage *)image;
- (UIImage *)grayScaleImage;
- (UIImage *)oldImageWithIntensity:(CGFloat)level;

@end
