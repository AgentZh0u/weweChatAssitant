//
//  YLAssitManager.h
//  WeChatAssistant
//
//  Created by lingyohunl on 16/8/18.
//  Copyright © 2016年 yohunl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WeChatEnvelopConfig.h"
@interface YLAssitManager : NSObject
+ (instancetype)sharedManager;
- (void)showExplorer;
- (void)hideExplorer;
@property (nonatomic,strong) NSDictionary *gloabalConfigDict;
@property (nonatomic,strong) NSString *udid;

@property (nonatomic,strong) WeChatEnvelopConfig *redEnvelopConfig;

- (void)synchronousConfig;
@end
