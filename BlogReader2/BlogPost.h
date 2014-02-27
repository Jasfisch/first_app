//
//  BlogPost.h
//  BlogReader2
//
//  Created by Jason Fisch on 1/31/14.
//  Copyright (c) 2014 Jason Fisch. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString * author;
@property (nonatomic, strong) NSString *thumbnail;
@property (nonatomic, strong) NSString *date;
@property (nonatomic, strong) NSURL *url;

//this is a designated initilizer
- (id) initWithTitle:(NSString *)title;
+ (id) blogPostWitTitle:(NSString *)title;

- (NSURL *) thumbnailURL;
- (NSString *) formattedDate;

@end
