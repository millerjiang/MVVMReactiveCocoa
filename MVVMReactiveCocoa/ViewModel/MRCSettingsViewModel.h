//
//  MRCSettingsViewModel.h
//  MVVMReactiveCocoa
//
//  Created by leichunfeng on 15/3/4.
//  Copyright (c) 2015年 leichunfeng. All rights reserved.
//

#import "MRCTableViewModel.h"

@interface MRCSettingsViewModel : MRCTableViewModel

@property (copy, nonatomic) NSString *adURL;
@property (strong, nonatomic, readonly) RACCommand *logoutCommand;

@end
