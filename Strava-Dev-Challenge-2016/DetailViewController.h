//
//  DetailViewController.h
//  Strava-Dev-Challenge-2016
//
//  Created by Éric Louvard on 09.08.16.
//  Copyright © 2016 Éric Louvard. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

