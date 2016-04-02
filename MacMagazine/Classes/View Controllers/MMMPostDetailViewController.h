//
//  MMMPostDetailViewController.h
//  MacMagazine
//
//  Created by Fernando Saragoca on 6/24/15.
//  Copyright (c) 2015 made@sampa. All rights reserved.
//

#import <TOWebViewController/TOWebViewController.h>

@class MMMPost;

@interface MMMPostDetailViewController : TOWebViewController

@property (strong, nonatomic) MMMPost *post;
@property (copy, nonatomic) NSArray <MMMPost *> *posts;

// In case the detail view controller is loaded from a link click
@property (strong, nonatomic) NSURL *postURL;

@end