// class-dump results processed by bin/class-dump/dump.rb
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <XCTest/XCUIElementTypes.h>
#import "CDStructures.h"
@protocol OS_dispatch_queue;
@protocol OS_xpc_object;

@class NSDate, XCTest;

@interface _XCInternalTestRun : NSObject
{
    XCTest *_test;
    double _startTimeInterval;
    double _stopTimeInterval;
    NSUInteger _executionCount;
    NSUInteger _failureCount;
    NSUInteger _unexpectedExceptionCount;
    BOOL _hasStarted;
    BOOL _hasStopped;
    NSUInteger _executionCountBeforeCrash;
    NSUInteger _failureCountBeforeCrash;
    NSUInteger _unexpectedExceptionCountBeforeCrash;
}

@property(readonly) NSUInteger executionCount;
@property NSUInteger executionCountBeforeCrash;
@property(readonly) NSUInteger failureCount;
@property NSUInteger failureCountBeforeCrash;
@property(readonly) BOOL hasStopped;
@property NSUInteger unexpectedExceptionCountBeforeCrash;
@property(readonly, copy) NSDate *startDate;
@property(readonly, copy) NSDate *stopDate;
@property(readonly) XCTest *test;
@property(readonly) NSUInteger testCaseCount;
@property(readonly) double testDuration;
@property(readonly) double totalDuration;
@property(readonly) NSUInteger unexpectedExceptionCount;

- (id)initWithTest:(id)arg1;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(NSUInteger)arg3 expected:(BOOL)arg4;
- (void)start;
- (void)stop;

@end
