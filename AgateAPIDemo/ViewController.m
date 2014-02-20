//
//  ViewController.m
//  AgateAPIDemo
//
//  Created by logeo on 13. 4. 8..
//  Copyright (c) 2013년 mospi. All rights reserved.
//

#import "ViewController.h"
#import "MOMLWebKit.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [MOMLWebKit init:self.momlView];
    
    [self loadApplication:@"moml/applicationInfo.xml"];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
