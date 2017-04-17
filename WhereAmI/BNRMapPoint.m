//
//  BNRMapPoint.m
//  WhereAmI
//
//  Created by Sergio Rodriguez on 16/04/17.
//  Copyright © 2017 Sergio Rodriguez. All rights reserved.
//

#import "BNRMapPoint.h"

@implementation BNRMapPoint

@synthesize coordinate, title;

-(id)initWithCoordinate:(CLLocationCoordinate2D)c title:(NSString *)t{
    self = [super init];
    if(self){
        coordinate = c;
        [self setTitle:t];
    }
    return self;
}

-(id)init{

    return [self initWithCoordinate:CLLocationCoordinate2DMake(43.07, -89.32) title:@"Hometown"];

}

@end
