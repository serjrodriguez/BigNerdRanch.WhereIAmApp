//
//  BNRMapPoint.h
//  WhereAmI
//
//  Created by Sergio Rodriguez on 16/04/17.
//  Copyright © 2017 Sergio Rodriguez. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface BNRMapPoint : NSObject <MKAnnotation>{


}

-(id)initWithCoordinate:(CLLocationCoordinate2D)c title:(NSString *)t;

@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;

@property (nonatomic, copy) NSString *title;



@end
