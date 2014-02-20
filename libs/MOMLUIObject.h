//
//  Created by MoSPI.org on 5.22.2012
//
//  Permission is granted to copy, distribute, modify under the terms of Citrine License.
//
//  Copyright (C) MoSPI.org. All rights reserved.
//
#import "MOMLObject.h"
//#import "MOMLUIObjectDelegate.h"
@class MOMLUIBaseWindow;
@class MOMLUIObject;
@protocol MOMLUIObjectDelegate <NSObject>
@optional
- (MOMLUIObject *)momlUIObject:(MOMLUIObject *)momlUIObject onCreateChild:(NSString *)elementName idName:(NSString *)idName;
- (BOOL)momlUIObject:(MOMLUIObject *)momlUIObject onEvent:(NSString *)eventName;
@end


@class MOMLUIObjectInternal;
@interface MOMLUIObject : MOMLObject {
//@private
    MOMLUIObjectInternal *uiInternal;
}
@property (nonatomic, readonly) NSString *elementName;
@property (nonatomic, readonly) NSString *idName;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, weak) id<MOMLUIObjectDelegate> delegate;

- (void)onCreate;
- (id)initWith:(MOMLUIBaseWindow *)uiObject;
- (MOMLUIObject*)findWindow:(NSString*)name;
- (NSString *)getProperty:(NSString*)name;
- (void)setProperty:(NSString*)name value:(NSString*)value;
- (void)processEvent:(NSString*)name;
- (void)setDelegate:(id<MOMLUIObjectDelegate> )delegate;
- (id<MOMLUIObjectDelegate>) delegate;
- (NSString *)runCommand:(NSString *)command targetId:(NSString *)targetId;

@end


