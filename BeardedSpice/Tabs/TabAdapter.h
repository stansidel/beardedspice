//
//  TabAdapter.h
//  BeardedSpice
//
//  Created by Roman Sokolov on 11.04.15.
//  Copyright (c) 2015 Tyler Rhodes / Jose Falcon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TabAdapter : NSObject

-(id) executeJavascript:(NSString *) javascript;
-(NSString *) title;
-(NSString *) URL;
-(NSString *) key;

- (void)activateTab;
- (void)toggleTab;
- (BOOL)frontmost;

/**
    Copying of the variables, which reflect state of the object.
 
    @param tab Object from which performed copying.
 
    @return Returns self.
 */
- (instancetype)copyStateFrom:(TabAdapter *)tab;

-(BOOL) isEqual:(__autoreleasing id)otherTab;

@end
