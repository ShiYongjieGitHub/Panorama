//
//  PanoramaView.h
//  360 Panorama
//
//  Created by Robby Kraft on 8/24/13.
//  Copyright (c) 2013 Robby Kraft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GLKit/GLKit.h>

@interface PanoramaView : GLKView

@property (nonatomic) float fieldOfView;  // 60 - 90 is about average
@property (nonatomic) BOOL pinchZoom;
@property (nonatomic) BOOL orientToDevice;
@property (nonatomic) float time;   // 0 - 23.99  (hours)
@property (nonatomic) int dayOfTheYear;  // 0 - 364  (days)

@property (nonatomic) GLKMatrix4 attitudeMatrix;

-(void) execute;  // draw screen
-(void) setCelestialTexture:(NSString*)fileName;
-(void) setPlanetaryTexture:(NSString*)fileName;

@end
