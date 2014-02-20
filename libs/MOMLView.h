//
//  Created by MoSPI.org on 4.11.2011
//
//  Permission is granted to copy, distribute, modify under the terms of Citrine License.
//
//  Copyright (C) MoSPI.org. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MOMLUIObject.h"

@class MOMLViewInternal;
@class MOMLUIContainer;

@interface MOMLView : UIView
{
@private
	MOMLViewInternal *internal;
}

- (void)loadApplication:(NSString *)url;
- (void)loadURL:(NSString *)url; 
- (void)setTopWindow:(UIWindow *)topWindow;
- (void)orientationChanged:(UIInterfaceOrientation)fromInterfaceOrientation;
- (MOMLUIContainer *) getRootContainer;
- (BOOL)registerUIComponent:(NSString *)className name:(NSString *)name userObject:(NSObject *)userObj base:(NSString *)base;
- (BOOL)unregisterUIComponent:(NSString *)className;
- (BOOL)registerObjectComponent:(NSString *)className name:(NSString *)name userObject:(NSObject *)userObj base:(NSString *)base;
- (BOOL)unregisterObjectComponent:(NSString *)className;
- (void)addUIObjectHandler:(id<MOMLUIObjectDelegate>)handler forUiId:(NSString *)uiId;

@property (nonatomic, readonly) MOMLUIObject *root;

@end

