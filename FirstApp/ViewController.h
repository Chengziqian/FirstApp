//
//  ViewController.h
//  FirstApp
//
//  Created by 程子骞 on 2018/5/30.
//  Copyright © 2018 程子骞. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *userInput;
@property (weak, nonatomic) IBOutlet UILabel *userOutput;
- (IBAction)setOutput:(id)sender;
@end

