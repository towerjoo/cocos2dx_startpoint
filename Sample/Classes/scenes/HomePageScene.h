//
//  Header.h
//  BumBumBaby
//
//  Created by Zhu Tao on 9/21/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef BumBumBaby_HomePageScene_h
#define BumBumBaby_HomePageScene_h

#include "cocos2d.h"
using namespace cocos2d;

class HomePageScene: public CCLayer{
public:
    ~HomePageScene();
    HomePageScene();
    
    void onStart(CCObject *pSender);
    void onOption(CCObject *pSender);
    
    static CCScene *scene();
    void initLayer();
};

#endif
