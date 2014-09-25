//
//  ContactInfo.h
//  CoreDataDemo
//
//  Created by iOS on 14-9-19.
//  Copyright (c) 2014年 0jiedian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface ContactInfo : NSManagedObject

@property (nonatomic, retain) NSString * age;
@property (nonatomic, retain) NSString * birthday;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSManagedObject *details;

@end
