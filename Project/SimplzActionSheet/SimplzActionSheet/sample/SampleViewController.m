//
//  SampleViewController.m
//  SimplzActionSheet
//
//  Created by Moch Fariz Al Hazmi on 9/5/14.
//  Copyright (c) 2014 aizcheryz. All rights reserved.
//

#import "SampleViewController.h"

@interface SampleViewController ()

@end

@implementation SampleViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)btnClicked:(id)sender {
    // Init SimplzActionSheet here...
    self.simplzActionSheet = [[SimplzActionSheet alloc] initWithTitle:@"Choose Picture" delegate:self cancelButtonTitle:@"Cancel" destructiveButtonTitle:nil buttonTextColor:[UIColor colorWithRed:0.09 green:0.702 blue:0.667 alpha:1] otherButtonTitlesArray:@[@"Gallery", @"Photo"] otherImagesTitlesArray:@[@"icon-browse-gallery",@"icon-take-picture"] buttonTextAlign:@"Left"];
    [self.simplzActionSheet showInView:self.view];
}

-(void)actionSheet:(SimplzActionSheet *)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex {
    
    
    NSLog(@"%i", buttonIndex);
    
}
@end
