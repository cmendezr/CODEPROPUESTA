//
//  MasterViewController.h
//  Ejemplo
//
//  Created by utng on 07/03/16.
//  Copyright © 2016 CADES. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end

