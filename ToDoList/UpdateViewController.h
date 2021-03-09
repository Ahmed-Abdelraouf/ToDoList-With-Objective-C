//
//  UpdateViewController.h
//  ToDoList
//
//  Created by Oufaa on 03/03/2021.
//
#import "UpdateProtocol.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UpdateViewController : UIViewController <UIPickerViewDelegate,UIPickerViewDataSource>


@property NSString *prioTxt;
@property NSMutableDictionary *editDict;
@property id <UpdateProtocol> Update;
@property NSIndexPath* index;
@property NSInteger indexSearch;

@property (nonatomic, copy) void (^onDoneBlock)(NSMutableDictionary*);

@end

NS_ASSUME_NONNULL_END
