//
//  InProgressViewController.h
//  ToDoList
//
//  Created by Oufaa on 25/02/2021.
//

#import <UIKit/UIKit.h>
#import "UpdateProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface InProgressViewController : UIViewController  <UITableViewDelegate,UITableViewDataSource,UpdateProtocol,UISearchBarDelegate>
@property (weak, nonatomic) IBOutlet UITableView *inProgressTableView;

@property NSMutableArray <NSMutableDictionary*> *inProgressArray;
@property NSMutableDictionary *inProgressDict;
@property NSMutableDictionary *detailModelDict;
@property (weak, nonatomic) IBOutlet UISearchBar *inProgressFilter;

@end

NS_ASSUME_NONNULL_END
