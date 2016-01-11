//
//  Province+CoreDataProperties.h
//  AddressDemo
//
//  Created by young on 16/1/8.
//  Copyright © 2016年 Admin. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Province.h"

NS_ASSUME_NONNULL_BEGIN

@interface Province (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *isMunicipality;
@property (nullable, nonatomic, retain) NSSet<NSManagedObject *> *cityList;
@property (nullable, nonatomic, retain) Country *country;

@end

@interface Province (CoreDataGeneratedAccessors)

- (void)addCityListObject:(NSManagedObject *)value;
- (void)removeCityListObject:(NSManagedObject *)value;
- (void)addCityList:(NSSet<NSManagedObject *> *)values;
- (void)removeCityList:(NSSet<NSManagedObject *> *)values;

@end

NS_ASSUME_NONNULL_END
