//
//  PPTextAttachment.h
//  PPAsyncDrawingKit
//
//  Created by DSKcpp on 2016/10/29.
//  Copyright © 2016年 DSKcpp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <PPAsyncDrawingKit/PPTextFontMetrics.h>

NS_ASSUME_NONNULL_BEGIN

@interface PPTextAttachment : NSObject <NSCoding>
@property (nonatomic, copy) NSString *replacementText;
@property (nonatomic, strong) PPTextFontMetrics *baselineFontMetrics;
@property (nonatomic, strong) id contents;
@property (nonatomic, assign) UIEdgeInsets contentEdgeInsets;
@property (nonatomic, assign) CGSize contentSize;
@property (nonatomic, assign) UIViewContentMode contentType;
@property (nonatomic, strong, readonly) PPTextFontMetrics *fontMetricsForLayout;
@property (nonatomic, assign, readonly) CGSize placeholderSize;

+ (instancetype)attachmentWithContents:(id)contents type:(UIViewContentMode)type contentSize:(CGSize)contentSize;
- (void)updateContentEdgeInsetsWithTargetPlaceholderSize:(CGSize)placeholderSize;
- (CGFloat)ascentForLayout;
- (CGFloat)descentForLayout;
- (CGFloat)leadingForLayout;

@end

NS_ASSUME_NONNULL_END
