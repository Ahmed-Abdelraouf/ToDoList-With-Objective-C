//
//  DoneViewController.h
//  ToDoList
//
//  Created by Oufaa on 25/02/2021.
//

#import <UIKit/UIKit.h>
#import "UpdateProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@interface DoneViewController : UIViewController    <UITableViewDelegate,UITableViewDataSource,UpdateProtocol,UISearchBarDelegate>

@property (weak, nonatomic) IBOutlet UITableView *doneTableView;

@property NSMutableArray <NSMutableDictionary*> *doneArray;

@property NSMutableDictionary *doneDict;

@property NSMutableDictionary *detailModelDict;

@property (weak, nonatomic) IBOutlet UISearchBar *doneFilter;

@end

NS_ASSUME_NONNULL_END
