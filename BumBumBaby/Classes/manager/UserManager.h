//
//  UserManager.h
//  BumBumBaby
//
//  Created by Zhu Tao on 9/17/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
#include <stdlib.h>

class UserManager{
private:
    UserManager();
    static UserManager *singleton;
public:
    int score;
    void initManager();
    static UserManager *sharedManager();
};
