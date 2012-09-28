//
//  UserManager.cpp
//  Sample
//
//  Created by Zhu Tao on 9/17/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "CommunicationManager.h"

CommunicationManager* CommunicationManager::singleton=NULL;

void CommunicationManager::initManager(){
    
}

CommunicationManager::CommunicationManager(){
    
}

CommunicationManager* CommunicationManager::sharedManager(){
    if (singleton == NULL){
        singleton= new CommunicationManager();
        singleton->initManager();
    }
    return singleton;
}


