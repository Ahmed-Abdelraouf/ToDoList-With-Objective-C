//
//  UpdateProtocol.h
//  ToDoList
//
//  Created by Oufaa on 03/03/2021.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UpdateProtocol <NSObject>

-(void) updateMehodDic :(NSMutableDictionary *) updatedDict :(NSInteger) index :(NSInteger) indexSearch;

@end

NS_ASSUME_NONNULL_END
