//
//  ViewController.h
//  QRCodeGenerator
//
//  Created by Nemanja Filipovic on 27.06.20.
//  Copyright © 2020 Nemanja Filipovic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>

@interface ViewController : UIViewController {
    SystemSoundID success;
    SystemSoundID error;
}

@property (weak, nonatomic) IBOutlet UITextView *inputField;
- (IBAction)onGenerate:(id)sender;
- (IBAction)onClear:(id)sender;
@property (weak, nonatomic) IBOutlet UIImageView *qrCodeImage;

@end

