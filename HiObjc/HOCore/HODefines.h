//
//  OCFDefines.h
//  Pods
//
//  Created by liaoya on 2022/1/6.
//

#ifndef OCFDefines_h
#define OCFDefines_h

#import <Foundation/Foundation.h>

#pragma mark - 类型
typedef void        (^OCFVoidBlock)(void);
typedef BOOL        (^OCFBoolBlock)(void);
typedef NSInteger   (^OCFIntBlock) (void);
typedef id          (^OCFIdBlock)  (void);

typedef void        (^OCFVoidBlock_bool)(BOOL);
typedef BOOL        (^OCFBoolBlock_bool)(BOOL);
typedef NSInteger   (^OCFIntBlock_bool) (BOOL);
typedef id          (^OCFIdBlock_bool)  (BOOL);

typedef void        (^OCFVoidBlock_int)(NSInteger);
typedef BOOL        (^OCFBoolBlock_int)(NSInteger);
typedef NSInteger   (^OCFIntBlock_int) (NSInteger);
typedef id          (^OCFIdBlock_int)  (NSInteger);

typedef void        (^OCFVoidBlock_string)(NSString *);
typedef BOOL        (^OCFBoolBlock_string)(NSString *);
typedef NSInteger   (^OCFIntBlock_string) (NSString *);
typedef id          (^OCFIdBlock_string)  (NSString *);

typedef void        (^OCFVoidBlock_id)(id);
typedef BOOL        (^OCFBoolBlock_id)(id);
typedef NSInteger   (^OCFIntBlock_id) (id);
typedef id          (^OCFIdBlock_id)  (id);


#endif /* OCFDefines_h */
