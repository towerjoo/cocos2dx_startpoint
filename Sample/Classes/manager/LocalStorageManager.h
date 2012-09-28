//
//  UserManager.h
//  Sample
//
//  Created by Zhu Tao on 9/17/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
#include <stdlib.h>

class LocalStorageManager{
private:
    LocalStorageManager();
    static LocalStorageManager *singleton;
public:
    void initManager();
    static LocalStorageManager *sharedManager();
};
