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

@class NSMutableArray;

@interface XCSourceCodeTreeNodeEnumerator : NSObject
{
    NSMutableArray *_remainingNodes;
}

@property(retain, nonatomic) NSMutableArray *remainingNodes;

- (id)initWithNode:(id)arg1;
- (id)nextObject;

@end

