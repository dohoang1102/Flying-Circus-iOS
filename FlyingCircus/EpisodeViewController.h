//
//  DetailViewController.h
//  FlyingCircus
//
//  Created by Nicola Miotto on 2/8/12.
//  Copyright (c) 2012 Università degli studi di Padova. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Episode;

@interface EpisodeViewController : UIViewController {
    
}

@property (strong, nonatomic) NSMutableArray *webViews;
@property (strong, nonatomic) Episode *episode;
@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (strong, nonatomic) IBOutlet UIView *partsContainer;

@end
