//
//  UserManager.cpp
//  Sample
//
//  Created by Zhu Tao on 9/17/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "LocalStorageManager.h"

LocalStorageManager* LocalStorageManager::singleton=NULL;

void LocalStorageManager::initManager(){

}

LocalStorageManager::LocalStorageManager(){
    
}

LocalStorageManager* LocalStorageManager::sharedManager(){
    if (singleton == NULL){
        singleton= new LocalStorageManager();
        singleton->initManager();
    }
    return singleton;
}


