//
//  BaseAddressModel+CoreDataProperties.h
//  AddressDemo
//
//  Created by young on 16/1/7.
//  Copyright © 2016年 Admin. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "BaseAddressModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface BaseAddressModel (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *adminLevel;
@property (nullable, nonatomic, retain) NSNumber *gbAreaId;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSNumber *sortId;
@property (nullable, nonatomic, retain) NSNumber *uniqueId;

@end

NS_ASSUME_NONNULL_END
