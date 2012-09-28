//
//  GameScene.h
//  BumBumBaby
//
//  Created by zhang laibin on 12-9-21.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//


#ifndef BumBumBaby_GameScene_h
#define BumBumBaby_GameScene_h

#include "cocos2d.h"
using namespace cocos2d;
#include "constants.h"

#include "iostream"
using namespace std;

class GameScene: public CCLayer{
    public:
    GameScene();
    ~GameScene();
    
    static CCScene *scene();
    void initLayer();
    virtual bool ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent);
    virtual void ccTouchEnded(CCTouch *pTouch,CCEvent *pEvent);
    virtual void registerWithTouchDispatcher(void);
    void gameStart();
    void gameOver();
    void backToMainMenu(CCObject *pSender);
    void replay(CCObject *pSender);
    void showGameOverPopup();
    
    void onQuit(CCObject *pSender);
    
private:
    CCSize winSize;
    CCPoint touchStartLocation;
    CCLabelTTF *score;
    CCLabelTTF *time;
    CCMenu *menu;
    
   };

#endif