//
//  ViewController.h
//  ToDoList
//
//  Created by Oufaa on 25/02/2021.
//

#import <UIKit/UIKit.h>
#import "addProtocol.h"
#import "UpdateProtocol.h"

@interface AllToDoViewController : UIViewController <UITableViewDelegate,UITableViewDataSource,addProtocol,UpdateProtocol,UISearchBarDelegate>
@property (weak, nonatomic) IBOutlet UITableView *allTableView;

@property NSMutableArray<NSMutableDictionary*> *dictArray;

@property (weak, nonatomic) IBOutlet UISearchBar *allTodoSearch;

@end

