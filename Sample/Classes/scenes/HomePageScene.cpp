//
//  HomePageScene.cpp
//  BumBumBaby
//
//  Created by Zhu Tao on 9/21/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "HomePageScene.h"
#include "GameScene.h"

HomePageScene::~HomePageScene(){
    
}

HomePageScene::HomePageScene(){
    
}

void HomePageScene::onStart(CCObject *pSender){
    CCScene *gameScene = GameScene::scene();
    CCDirector::sharedDirector()->replaceScene(gameScene);
}

void HomePageScene::onOption(CCObject *pSender){
    
}


void HomePageScene::initLayer(){
    setIsTouchEnabled(true);
    setIsAccelerometerEnabled(true);
    CCSize s = CCDirector::sharedDirector()->getWinSize();
    
    CCLabelTTF *title = CCLabelTTF::labelWithString("Sample", kTitleFontName, kTitleFontSize);
    title->setPosition(ccp(s.width/2, s.height - 30));
    addChild(title);
    
    CCMenuItemFont *start = CCMenuItemFont::itemWithString("Start", this, menu_selector(HomePageScene::onStart));
    CCMenuItemFont *option = CCMenuItemFont::itemWithString("Option", this, menu_selector(HomePageScene::onOption));
    
    CCMenu *menu = CCMenu::menuWithItems(start, option, NULL);
    menu->setPosition(ccp(s.width/2, s.height/2));
    menu->alignItemsVertically();
    this->addChild(menu);
}



CCScene* HomePageScene::scene(){
    CCScene *scene = CCScene::node();
    HomePageScene *layer = new HomePageScene();
    layer->initLayer();
    scene->addChild(layer);
    layer->release();
    return scene;
}



