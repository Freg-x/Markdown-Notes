//
//  Base.h
//  C_Primer
//
//  Created by Freg Wang on 2020/3/25.
//  Copyright © 2020 Freg Wang. All rights reserved.
//

#ifndef Base_h
#define Base_h

class Base{
private:
    int x;
    int y;
public:
    Base(){}
     virtual ~Base();
};

class Extend : public Base{
public:
    Extend(){}
    virtual ~Extend();
};



#endif /* Base_h */
