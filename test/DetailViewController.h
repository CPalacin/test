//
//  DetailViewController.h
//  test
//
//  Created by Carlos Rubio on 11/27/14.
//  Copyright (c) 2014 Carlos Rubio. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

