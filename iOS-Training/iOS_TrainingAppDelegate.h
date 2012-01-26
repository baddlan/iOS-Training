//
//  iOS_TrainingAppDelegate.h
//  iOS-Training
//
//  Created by Mark on 12-01-25.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface iOS_TrainingAppDelegate : NSObject <UIApplicationDelegate, CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
}


@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
