//
//  WebViewController.h
//  BlogReader2
//
//  Created by Jason Fisch on 1/31/14.
//  Copyright (c) 2014 Jason Fisch. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIWebView *webView;
@property (strong, nonatomic) NSURL *blogPostURL;

@end
