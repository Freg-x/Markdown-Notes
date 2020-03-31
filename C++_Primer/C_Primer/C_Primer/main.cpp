//
//  main.cpp
//  C_Primer
//
//  Created by Freg Wang on 2020/3/23.
//  Copyright © 2020 Freg Wang. All rights reserved.
//

#include <iostream>
#include <memory>
#include <climits>
#include "stdio.h"
#include "Base.h"

using namespace std;



int main(int argc, const char * argv[]) {
    Base *base_p = new Base();
    Extend *extend_p = new Extend();
    base_p = extend_p;
    cout<<INT_MAX<<endl;
    
  


    return 0;
    
}
