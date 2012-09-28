//
//  GameScene.cpp
//  BumBumBaby
//
//  Created by zhang laibin on 12-9-21.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#include "GameScene.h"
#include "UserManager.h"
#include "HomePageScene.h"


void GameScene::initLayer(){
    CCMenuItemFont *quit = CCMenuItemFont::itemWithString("Quit", this, menu_selector(GameScene::onQuit));
    CCMenu *_menu = CCMenu::menuWithItems(quit, NULL);
    _menu->alignItemsVertically();
    
    CCSize size = _menu->boundingBox().size;
    
    _menu->setPosition(ccp(winSize.width - 50, winSize.height - 50));
    addChild(_menu);
}


CCScene* GameScene::scene(){
    CCScene *scene = CCScene::node();
    GameScene *layer = new GameScene();
    scene->addChild(layer);
    layer->release();
    return scene;
}


GameScene::GameScene(){
    winSize = CCDirector::sharedDirector()->getWinSize();
    gameStart();
}


GameScene::~GameScene(){
    
}

// MARK: touch events

bool GameScene::ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent){
    CCPoint location = pTouch->locationInView();
    touchStartLocation = CCDirector::sharedDirector()->convertToGL(location);

    
    return true;
}

void GameScene::ccTouchEnded(CCTouch *pTouch,CCEvent *pEvent){
    CCPoint location = pTouch->locationInView();
    location = CCDirector::sharedDirector()->convertToGL(location);
    
}

void GameScene::registerWithTouchDispatcher(void){
    CCDirector::sharedDirector()->getTouchDispatcher()->addTargetedDelegate(this, 0, true);
}



void GameScene::gameStart(){
    setIsTouchEnabled(true);
    this->initLayer();
}

void GameScene::gameOver(){
    showGameOverPopup();
    setIsTouchEnabled(false);
    UserManager::sharedManager()->gameOver();
}

void GameScene::showGameOverPopup(){
    
    CCMenuItemFont *bakBtn = CCMenuItemFont::itemWithString("Back to menu", this, menu_selector(GameScene::backToMainMenu));
//    bakBtn->setColor(ccBLACK);
    
    CCMenuItemFont *replay = CCMenuItemFont::itemWithString("Replay", this, menu_selector(GameScene::replay));
//    replay->setColor(ccBLACK);
    
    menu = CCMenu::menuWithItems(bakBtn, replay, NULL);
    
    menu->setPosition(ccp(winSize.width/2, winSize.height/2));
    menu->alignItemsVertically();
    
    addChild(menu);
}

// MARK: menu callback
void GameScene::backToMainMenu(CCObject *pSender){
    this->removeAllChildrenWithCleanup(true);
    CCScene *home = HomePageScene::scene();
    CCDirector::sharedDirector()->replaceScene(home);
}

void GameScene::replay(CCObject *pSender){
    this->removeAllChildrenWithCleanup(true);
    gameStart();
}

void GameScene::onQuit(CCObject *pSender){
    this->showGameOverPopup();
}
