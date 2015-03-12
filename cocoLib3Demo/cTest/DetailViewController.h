//
//  DetailViewController.h
//  cTest
//
//  Created by Kennix on 12/3/15.
//  Copyright (c) 2015 Kennix. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

