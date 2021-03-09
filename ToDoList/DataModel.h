//
//  DataModel.h
//  ToDoList
//
//  Created by Oufaa on 28/02/2021.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DataModel : NSObject
@property NSString * name;
@property NSString * priority;
@property NSDate * remainderDate;
@property NSString * dataDescription;
@property NSDate * createdDate;
@property NSString* isReminded;

@end

NS_ASSUME_NONNULL_END
