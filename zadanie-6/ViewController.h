//
//  ViewController.h
//  zadanie-6
//
//  Created by Emanuel Korycki on 13/11/2023.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIButton *informationButton;
@property (nonatomic, weak) IBOutlet UIImageView *image;

- (IBAction) informationAction;
@end

