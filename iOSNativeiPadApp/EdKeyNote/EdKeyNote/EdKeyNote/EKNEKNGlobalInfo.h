//
//  EKNEKNGlobalInfo.h
//  EdKeyNote
//
//  Created by canviz on 9/24/14.
//  Copyright (c) 2014 canviz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EKNEKNGlobalInfo : UIViewController
+ (void)saveData:(NSString *)key content:(NSDictionary *)value;
+ (NSDictionary *)loadData:(NSString *)key;
@end