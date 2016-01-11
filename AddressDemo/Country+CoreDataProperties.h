//
//  Country+CoreDataProperties.h
//  AddressDemo
//
//  Created by young on 16/1/7.
//  Copyright © 2016年 Admin. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Country.h"

NS_ASSUME_NONNULL_BEGIN

@interface Country (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *md5;
@property (nullable, nonatomic, retain) NSSet<NSManagedObject *> *provinceList;

@end

@interface Country (CoreDataGeneratedAccessors)

- (void)addProvinceListObject:(NSManagedObject *)value;
- (void)removeProvinceListObject:(NSManagedObject *)value;
- (void)addProvinceList:(NSSet<NSManagedObject *> *)values;
- (void)removeProvinceList:(NSSet<NSManagedObject *> *)values;

@end

NS_ASSUME_NONNULL_END
