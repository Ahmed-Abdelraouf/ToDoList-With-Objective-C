//
//  AddViewController.h
//  ToDoList
//
//  Created by Oufaa on 28/02/2021.
//

#import <UIKit/UIKit.h>
#import "addProtocol.h"
#import "DataModel.h"
#import <UserNotifications/UserNotifications.h>

NS_ASSUME_NONNULL_BEGIN

@interface AddViewController : UIViewController <UIPickerViewDelegate,UIPickerViewDataSource>
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UITextField *descriptionTextField;
@property (weak, nonatomic) IBOutlet UIPickerView *priorityPicker;
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;
@property id <addProtocol> Add;
@property NSString *priorityTxt;
@property NSString *datePicked;

@end

NS_ASSUME_NONNULL_END
