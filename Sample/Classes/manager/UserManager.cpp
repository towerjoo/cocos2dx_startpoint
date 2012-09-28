//
//  UserManager.cpp
//  Sample
//
//  Created by Zhu Tao on 9/17/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "UserManager.h"

UserManager* UserManager::singleton=NULL;

void UserManager::initManager(){
    score = 0;
}

UserManager::UserManager(){
    
}

UserManager* UserManager::sharedManager(){
    if (singleton == NULL){
        singleton= new UserManager();
        singleton->initManager();
    }
    return singleton;
}


