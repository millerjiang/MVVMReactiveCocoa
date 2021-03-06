//
//  MRCNewsItemViewModel.h
//  MVVMReactiveCocoa
//
//  Created by leichunfeng on 15/7/5.
//  Copyright (c) 2015年 leichunfeng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MRCNewsItemViewModel : NSObject

@property (strong, nonatomic, readonly) OCTEvent *event;
@property (copy, nonatomic, readonly) NSAttributedString *attributedString;

@property (assign, nonatomic) CGFloat height;
@property (strong, nonatomic) RACCommand *didClickLinkCommand;

- (instancetype)initWithEvent:(OCTEvent *)event;

@end
