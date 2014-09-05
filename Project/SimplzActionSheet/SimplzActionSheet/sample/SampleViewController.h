//
//  SampleViewController.h
//  SimplzActionSheet
//
//  Created by Moch Fariz Al Hazmi on 9/5/14.
//  Copyright (c) 2014 aizcheryz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SimplzActionSheet.h"

@interface SampleViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIButton *btn;
@property (strong, nonatomic) SimplzActionSheet *simplzActionSheet;
- (IBAction)btnClicked:(id)sender;

@end
