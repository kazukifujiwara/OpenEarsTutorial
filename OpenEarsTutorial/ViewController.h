//
//  ViewController.h
//  OpenEarsTutorial
//
//  Created by 藤原和樹 on 2016/04/12.
//  Copyright © 2016年 mycompany. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OpenEars/OEEventsObserver.h>

@interface ViewController : UIViewController <OEEventsObserverDelegate>

@property (strong, nonatomic) OEEventsObserver *openEarsEventsObserver;

@end

