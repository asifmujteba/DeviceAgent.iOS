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

#import "XCUIElement.h"

#if XCT_UI_TESTING_AVAILABLE

typedef NS_ENUM(NSUInteger, XCUIApplicationState) {
    XCUIApplicationStateUnknown = 0,
    XCUIApplicationStateNotRunning = 1,
#if !TARGET_OS_OSX
    XCUIApplicationStateRunningBackgroundSuspended = 2,
#endif
    XCUIApplicationStateRunningBackground = 3,
    XCUIApplicationStateRunningForeground = 4
};
#endif

@class NSArray, NSDictionary, NSString, XCAccessibilityElement, XCApplicationQuery, XCUIApplicationImpl, XCUIApplicationOpenRequest;
@protocol XCTRunnerAutomationSession, XCUIDevice;


@protocol XCTRunnerAutomationSession;

@interface XCUIApplication : XCUIElement
{
    BOOL _ancillary;
    BOOL _prefersPlatformLauncher;
    BOOL _doesNotHandleUIInterruptions;
    BOOL _allowBackgroundInteraction;
    BOOL _idleAnimationWaitEnabled;
    NSUInteger _currentInteractionOptions;
    XCUIApplicationOpenRequest *_lastLaunchRequest;
    XCUIElement *_keyboard;
    NSArray *_launchArguments;
    NSDictionary *_launchEnvironment;
    XCApplicationQuery *_applicationQuery;
    NSUInteger _generation;
    XCUIApplicationImpl *_applicationImpl;
}

@property(readonly) XCAccessibilityElement *accessibilityElement;
@property BOOL allowBackgroundInteraction;
@property BOOL ancillary;
@property(readonly) XCUIApplicationImpl *applicationImpl;
@property(retain) XCApplicationQuery *applicationQuery;
@property(readonly) id <XCTRunnerAutomationSession> automationSession;
@property(readonly) BOOL background;
@property(readonly) BOOL backgroundInteractionAllowed;
@property(readonly) NSString *bundleID;
@property NSUInteger currentInteractionOptions;
@property(readonly) id <XCUIDevice> device;
@property(nonatomic) BOOL doesNotHandleUIInterruptions;
@property(readonly) BOOL fauxCollectionViewCellsEnabled;
@property(readonly) BOOL foreground;
@property NSUInteger generation;
@property(readonly) BOOL hasAutomationSession;
@property(readonly, nonatomic) NSInteger interfaceOrientation;
@property(getter=isIdleAnimationWaitEnabled) BOOL idleAnimationWaitEnabled;
@property(readonly) XCUIElement *keyboard;
@property(retain) XCUIApplicationOpenRequest *lastLaunchRequest;
@property(copy, nonatomic) NSArray *launchArguments;
@property(copy, nonatomic) NSDictionary *launchEnvironment;
@property(readonly) NSString *path;
@property BOOL prefersPlatformLauncher;
@property(nonatomic) NSInteger processID;
@property(readonly) BOOL running;
@property(nonatomic) NSUInteger state;
@property(readonly) BOOL shouldBeCheckedForAlerts;
@property(readonly) BOOL shouldSkipPostEventQuiescence;
@property(readonly) BOOL shouldSkipPreEventQuiescence;
@property(readonly) BOOL suspended;

+ (id)keyPathsForValuesAffectingBackground;
+ (id)keyPathsForValuesAffectingForeground;
+ (id)keyPathsForValuesAffectingIsApplicationStateKnown;
+ (id)keyPathsForValuesAffectingRunning;
+ (id)keyPathsForValuesAffectingState;
+ (id)keyPathsForValuesAffectingSuspended;
- (id)_combinedLaunchArguments;
- (id)_combinedLaunchEnvironment;
- (void)_launchUsingXcode:(BOOL)arg1;
- (void)_performWithInteractionOptions:(NSUInteger)arg1 block:(CDUnknownBlockType)arg2;
- (void)_waitForQuiescence;
- (BOOL)_waitForViewControllerViewDidDisappearWithTimeout:(double)arg1 error:(id *)arg2;
- (void)activate;
- (id)application;
- (void)clearQuery;
- (void)commonInitWithApplicationSpecifier:(id)arg1 device:(id)arg2;
- (id)currentProcess;
- (void)dismissKeyboard;
- (NSUInteger)elementType;
- (BOOL)exists;
- (id)initPrivateWithPath:(id)arg1 bundleID:(id)arg2;
- (id)initWithApplicationSpecifier:(id)arg1 device:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 device:(id)arg2;
- (id)initWithElementQuery:(id)arg1;
- (BOOL)isApplicationStateKnown;
- (void)launch;
- (id)query;
- (void)resetAlertCount;
- (void)resetAuthorizationStatusForResource:(NSInteger)arg1;
- (BOOL)resolveOrRaiseTestFailure:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setFauxCollectionViewCellsEnabled:(BOOL)arg1 error:(id *)arg2;
- (void)terminate;
- (BOOL)waitForState:(NSUInteger)arg1 timeout:(double)arg2;

@end

