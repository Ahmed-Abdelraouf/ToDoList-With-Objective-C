//
//  InProgressTableViewCell.h
//  ToDoList
//
//  Created by Oufaa on 03/03/2021.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface InProgressTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *inProgressNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *inProgressDateLabel;
@property (weak, nonatomic) IBOutlet UIImageView *inProgressImage;

@end

NS_ASSUME_NONNULL_END
