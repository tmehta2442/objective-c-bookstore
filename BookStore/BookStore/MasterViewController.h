//
//  MasterViewController.h
//  BookStore
//
//  Created by Tejas Mehta on 5/9/20.
//  Copyright © 2020 Tejas Mehta. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

