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

@class MXMInstrument, NSArray, NSDictionary, NSInvocation, NSMutableArray, NSMutableDictionary, NSString, NSThread, XCTAttachmentManager, XCTWaiter, XCTestCaseRun;

@interface _XCTestCaseImplementation : NSObject
{
    NSInvocation *_invocation;
    NSThread *_primaryThread;
    XCTestCaseRun *_testCaseRun;
    BOOL _continueAfterFailure;
    NSMutableArray *_expectations;
    NSArray *_activePerformanceMetricIDs;
    NSMutableDictionary *_perfMetricsForID;
    NSUInteger _startWallClockTime;
    struct time_value _startUserTime;
    struct time_value _startSystemTime;
    NSUInteger _measuringIteration;
    BOOL _isMeasuringMetrics;
    BOOL _didMeasureMetrics;
    BOOL _didStartMeasuring;
    BOOL _didStopMeasuring;
    MXMInstrument *_instrument;
    NSString *_filePathForNestedFailure;
    NSUInteger _lineNumberForNestedFailure;
    NSInteger _runLoopNestingCount;
    XCTWaiter *_currentWaiter;
    NSMutableArray *_failureRecords;
    BOOL _shouldHaltWhenReceivesControl;
    BOOL _shouldSetShouldHaltWhenReceivesControl;
    BOOL _shouldIgnoreSubsequentFailures;
    NSMutableArray *_teardownBlocks;
    BOOL _hasDequeuedTeardownBlocks;
    BOOL _hasAttemptedToCaptureScreenshotOnFailure;
    XCTAttachmentManager *_attachmentManager;
    NSDictionary *_activityAggregateStatistics;
}

@property(copy) NSArray *activePerformanceMetricIDs;
@property(copy) NSDictionary *activityAggregateStatistics;
@property(retain) XCTAttachmentManager *attachmentManager;
@property BOOL continueAfterFailure;
@property(retain, nonatomic) XCTWaiter *currentWaiter;
@property BOOL didMeasureMetrics;
@property BOOL didStartMeasuring;
@property BOOL didStopMeasuring;
@property(retain, nonatomic) NSMutableArray *expectations;
@property(retain, nonatomic) NSMutableArray *failureRecords;
@property(copy) NSString *filePathForNestedFailure;
@property BOOL hasAttemptedToCaptureScreenshotOnFailure;
@property BOOL hasDequeuedTeardownBlocks;
@property(retain) MXMInstrument *instrument;
@property(retain) NSInvocation *invocation;
@property BOOL isMeasuringMetrics;
@property NSUInteger lineNumberForNestedFailure;
@property NSUInteger measuringIteration;
@property(retain) NSMutableDictionary *perfMetricsForID;
@property(retain) NSThread *primaryThread;
@property NSInteger runLoopNestingCount;
@property BOOL shouldHaltWhenReceivesControl;
@property BOOL shouldIgnoreSubsequentFailures;
@property BOOL shouldSetShouldHaltWhenReceivesControl;
@property struct time_value startSystemTime;
@property struct time_value startUserTime;
@property NSUInteger startWallClockTime;
@property(retain) XCTestCaseRun *testCaseRun;
@property(readonly) NSMutableArray *teardownBlocks;

- (void)addExpectation:(id)arg1;
- (void)resetExpectations;
- (void)resetExpectationsInArray:(id)arg1;

@end

