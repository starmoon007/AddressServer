//
//  City+CoreDataProperties.h
//  AddressDemo
//
//  Created by young on 16/1/8.
//  Copyright © 2016年 Admin. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "City.h"

NS_ASSUME_NONNULL_BEGIN

@interface City (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *hasTowns;
@property (nullable, nonatomic, retain) NSNumber *isMunicipality;
@property (nullable, nonatomic, retain) Province *province;
@property (nullable, nonatomic, retain) NSSet<NSManagedObject *> *countyList;

@end

@interface City (CoreDataGeneratedAccessors)

- (void)addCountyListObject:(NSManagedObject *)value;
- (void)removeCountyListObject:(NSManagedObject *)value;
- (void)addCountyList:(NSSet<NSManagedObject *> *)values;
- (void)removeCountyList:(NSSet<NSManagedObject *> *)values;

@end

NS_ASSUME_NONNULL_END
