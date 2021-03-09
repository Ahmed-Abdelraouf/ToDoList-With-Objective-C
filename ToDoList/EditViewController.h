//
//  EditViewController.h
//  ToDoList
//
//  Created by Oufaa on 01/03/2021.
//

#import <UIKit/UIKit.h>
#import "UpdateProtocol.h"


NS_ASSUME_NONNULL_BEGIN

@interface EditViewController : UIViewController <UpdateProtocol>
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *detailsLabel;

@property (weak, nonatomic) IBOutlet UILabel *piriorityLabel;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;
@property id <UpdateProtocol> UpdateCell;

@property NSMutableDictionary *detailModelDict;
@property NSMutableDictionary *selectedModelDict;
@property NSIndexPath* index;
@property NSInteger indexSearch;

@end

NS_ASSUME_NONNULL_END
