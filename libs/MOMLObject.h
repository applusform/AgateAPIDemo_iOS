//
//  Created by MoSPI.org on 5.22.2012
//
//  Permission is granted to copy, distribute, modify under the terms of Citrine License.
//
//  Copyright (C) MoSPI.org. All rights reserved.
//
@class MOMLContext;
@class MOMLObjectInternal;

@interface MOMLObject : NSObject {
@protected
    MOMLObjectInternal *internal;
}

- (id)initWith:(MOMLContext *)context object:(NSObject *)object;
- (MOMLObjectInternal *)createInternal:(MOMLContext *)context object:(NSObject *)obj;
- (void *)getObject:(NSString *)objectType index:(int)index;
- (void)setProperty:(NSString *)name value:(NSString *)value;
- (void)setPropertyFloat:(NSString *)name value:(double)value;
- (NSString *)getProperty:(NSString *)name;
- (double)getPropertyFloat:(NSString *)name;
- (NSString *)functionCallWithName:(NSString *)name parameters:(NSArray *)parameters;

@end


