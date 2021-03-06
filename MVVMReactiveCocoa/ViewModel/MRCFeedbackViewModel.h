//
//  MRCFeedbackViewModel.h
//  MVVMReactiveCocoa
//
//  Created by leichunfeng on 15/3/7.
//  Copyright (c) 2015年 leichunfeng. All rights reserved.
//

#import "MRCViewModel.h"

@interface MRCFeedbackViewModel : MRCViewModel

@property (copy, nonatomic) NSString *content;
@property (strong, nonatomic, readonly) RACCommand *submitFeedbackCommand;

@end
