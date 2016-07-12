//
//  HTY360PlayerVC.h
//  HTY360Player
//
//  Created by  on 11/8/15.
//  Copyright © 2015 Hanton. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface HTY360PlayerVC : UIViewController

@property(nonatomic,weak)IBOutlet UIView *playerControlBackgroundView;
@property (strong, nonatomic) NSURL *videoURL;
@property(nonatomic,weak)AVPlayerLayer *playerLayer;
@property(nonatomic,assign)BOOL isVRDisplayModelEnable;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil url:(NSURL*)url;
- (CVPixelBufferRef)retrievePixelBufferToDraw;
- (void)toggleControls;

- (void)configureGLKView;
- (void)configureAVPlayLayer;
- (void)removeGLKView;
- (void)removeAVPlayerDisplayerLayer;
@end
