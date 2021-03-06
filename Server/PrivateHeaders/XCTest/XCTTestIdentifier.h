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



@interface XCTTestIdentifier : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_bundleName;
    NSString *_className;
    NSString *_methodName;
    NSString *_stringRepresentation;
    NSString *_bundleAgnosticStringRepresentation;
}

@property(readonly) NSString *bundleAgnosticStringRepresentation;
@property(readonly) XCTTestIdentifier *bundleIdentifier;
@property(readonly) NSString *bundleName;
@property(readonly) XCTTestIdentifier *classIdentifier;
@property(readonly) NSString *className;
@property(readonly) NSString *methodName;
@property(readonly) NSString *stringRepresentation;
@property(readonly) NSUInteger type;

+ (id)identifierForClass:(Class)arg1;
+ (id)identifiersGroupedByClass:(id)arg1;
+ (id)minimumEquivalentIdentifiers:(id)arg1;
+ (id)testIdentifiersForStringIdentifiers:(id)arg1 inBundleWithName:(id)arg2;
- (id)initWithBundleName:(id)arg1;
- (id)initWithBundleName:(id)arg1 bundleAgnosticStringRepresentation:(id)arg2;
- (id)initWithBundleName:(id)arg1 className:(id)arg2;
- (id)initWithBundleName:(id)arg1 className:(id)arg2 methodName:(id)arg3;
- (id)initWithStringRepresentation:(id)arg1;

@end

