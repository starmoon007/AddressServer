//
//  County+CoreDataProperties.h
//  AddressDemo
//
//  Created by young on 16/1/8.
//  Copyright © 2016年 Admin. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "County.h"

NS_ASSUME_NONNULL_BEGIN

@interface County (CoreDataProperties)

@property (nullable, nonatomic, retain) City *city;

@end

NS_ASSUME_NONNULL_END
