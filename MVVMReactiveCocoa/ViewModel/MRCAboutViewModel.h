//
//  MRCAboutViewModel.h
//  MVVMReactiveCocoa
//
//  Created by leichunfeng on 15/3/4.
//  Copyright (c) 2015年 leichunfeng. All rights reserved.
//

#import "MRCTableViewModel.h"

@interface MRCAboutViewModel : MRCTableViewModel

@property (assign, nonatomic, readonly) BOOL isLatestVersion;

@property (copy, nonatomic, readonly) NSString *appStoreVersion;

@end
