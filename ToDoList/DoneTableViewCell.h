//
//  DoneTableViewCell.h
//  ToDoList
//
//  Created by Oufaa on 01/03/2021.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DoneTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *donePriorityImageView;
@property (weak, nonatomic) IBOutlet UILabel *doneNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *doneDateLabel;

@end

NS_ASSUME_NONNULL_END
