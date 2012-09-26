//
//  TargetSprite.h
//  TiltShooting
//
//  Created by yan zhuang on 12-9-15.
//  Copyright 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface TargetSprite : CCSprite {
    
}
//different types of targets
@property int type;


+ (id) TargetWithinLayerBackground:(CCLayer *) layer imageFile:(NSString*) imgFile;
@end
