// class-dump results processed by bin/class-dump/dump.rb
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr 12 2019 07:16:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <XCTest/XCUIElementTypes.h>
#import "CDStructures.h"
@protocol OS_dispatch_queue;
@protocol OS_xpc_object;

#import <objc/NSObject.h>

#import "XCTMetric-Protocol.h"
#import "XCTMetric_Private-Protocol.h"

@class MXMOSSignpostMetric, NSString;

@interface XCTOSSignpostMetric : NSObject <XCTMetric_Private, XCTMetric>
{
    MXMOSSignpostMetric *__underlyingMetric;
}

@property(retain, nonatomic) MXMOSSignpostMetric *_underlyingMetric;

+ (id)applicationLaunchMetric;
- (void)didStartMeasuringAtTimestamp:(id)arg1;
- (void)didStopMeasuringAtTimestamp:(id)arg1;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3;
- (id)initWithUnderlyingMetric:(id)arg1;
- (void)prepareToMeasureWithOptions:(id)arg1;
- (id)reportMeasurementsFromStartTime:(id)arg1 toEndTime:(id)arg2 error:(id *)arg3;
- (void)willBeginMeasuringAtEstimatedTimestamp:(id)arg1;


@end

