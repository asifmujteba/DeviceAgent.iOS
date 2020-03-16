
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

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
