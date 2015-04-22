//
//  ViewController.h
//  FocusControl
//
//  Created by iuimini5 on 2015/4/22.
//  Copyright (c) 2015年 iuimini5. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIView *frameForCapture;
@property (weak, nonatomic) IBOutlet UIImageView *imageview;
- (IBAction)takePicture:(id)sender;



@end

