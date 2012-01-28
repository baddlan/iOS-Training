//
//  MapPoint.m
//  iOS-Training
//
//  Created by Mark on 12-01-27.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import "MapPoint.h"

@implementation MapPoint

- (id)initWithCoordinate:(CLLocationCoordinate2D)c title:(NSString *)t
{
    self = [super init];
    if (self) {
        coordinate = c;
        [self setTitle:t];
    }
    
    return self;
}

- (void)dealloc
{
    [title release];
    [super dealloc];
}

@end
