//
//  BaseObject.h
//  Sample
//
//  Created by Zhu Tao on 9/28/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Sample_BaseObject_h
#define Sample_BaseObject_h
#include "cocos2d.h"
using namespace cocos2d;

class BaseObject{
public:
    BaseObject();
    ~BaseObject();
    void initObject();
private:
    
    CCSprite *sprite;
    
};

#endif
