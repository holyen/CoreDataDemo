//
//  ContactDetailInfo.h
//  CoreDataDemo
//
//  Created by iOS on 14-9-19.
//  Copyright (c) 2014年 0jiedian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class ContactInfo;

@interface ContactDetailInfo : NSManagedObject

@property (nonatomic, retain) NSString * address;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * telephone;
@property (nonatomic, retain) ContactInfo *info;

@end
