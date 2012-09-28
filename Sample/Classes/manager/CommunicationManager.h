//
//  UserManager.h
//  Sample
//
//  Created by Zhu Tao on 9/17/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
#include <stdlib.h>

class CommunicationManager{
private:
    CommunicationManager();
    static CommunicationManager *singleton;
public:
    void initManager();
    static CommunicationManager *sharedManager();
};
