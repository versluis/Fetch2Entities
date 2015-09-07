//
//  DetailViewController.h
//  Fetch2Entities
//
//  Created by Jay Versluis on 07/09/2015.
//  Copyright (c) 2015 Pinkstone Pictures LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

