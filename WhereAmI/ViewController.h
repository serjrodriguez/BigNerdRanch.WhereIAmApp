//
//  ViewController.h
//  WhereAmI
//
//  Created by Sergio Rodriguez on 16/04/17.
//  Copyright © 2017 Sergio Rodriguez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <Mapkit/Mapkit.h>

@interface ViewController : UIViewController<CLLocationManagerDelegate, MKMapViewDelegate, UITextFieldDelegate>{
    
    CLLocationManager *locationManager;
    
    IBOutlet MKMapView *worldView;
    IBOutlet UIActivityIndicatorView *activityIndicator;
    IBOutlet UITextField *locationTitleField;
    
}

-(void)findLocation;
-(void)foundLocation:(CLLocation *)loc;

@end

