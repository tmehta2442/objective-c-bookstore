//
//  DetailViewController.h
//  BookStore
//
//  Created by Tejas Mehta on 5/9/20.
//  Copyright © 2020 Tejas Mehta. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

