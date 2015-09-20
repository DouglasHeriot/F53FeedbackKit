/*
 * Copyright 2008-2011, Torsten Curdt
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Cocoa/Cocoa.h>


@interface FRCommand : NSObject {

@private
    NSTask *_task;

    NSString *_path;
    NSArray *_args;
    
    NSMutableString *_output;
    NSMutableString *_error;
    
    BOOL _terminated;
}


- (id) initWithPath:(NSString *)path;

- (void) setArgs:(NSArray *)args;

- (void) setError:(NSMutableString *)error;
- (void) setOutput:(NSMutableString *)output;

- (int) execute;


@end
