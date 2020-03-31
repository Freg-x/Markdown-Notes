//
//  Base.cpp
//  C_Primer
//
//  Created by Freg Wang on 2020/3/25.
//  Copyright © 2020 Freg Wang. All rights reserved.
//

#include <stdio.h>
#include "Base.h"
#include <iostream>

Base::~Base(){
    std::cout<<"base destroyed"<<std::endl;
}

Extend::~Extend(){
    std::cout<<"extend destroyed"<<std::endl;
}
