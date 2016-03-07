//
//  DetailViewController.h
//  Ejemplo
//
//  Created by utng on 07/03/16.
//  Copyright © 2016 CADES. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

