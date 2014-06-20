//
//  DetailViewController.h
//  MasterDetailDemo
//
//  Created by swapnali shinde on 3/26/14.
//  Copyright (c) 2014 ezest. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
