//
//  SmartPtr.hpp
//  C_Primer
//
//  Created by Freg Wang on 2020/4/8.
//  Copyright © 2020 Freg Wang. All rights reserved.
//

#ifndef SmartPtr_hpp
#define SmartPtr_hpp

#include <stdio.h>

template <class T>
class SmartPtr{
private:
    T *ptr;
    int *use_count;
public:
    SmartPtr(T *p);//直接由一个指针赋值
    SmartPtr(const SmartPtr<T>& orig);//由另一个智能指针赋值,复制构造函数
    SmartPtr<T>& operator =(SmartPtr<T> &rhs); //返回引用，允许连环赋值
    ~SmartPtr();
    T operator*(); //当成普通指针定义解引用操作
    T* operator->(); //取成员
    T* operator+(int i); //指针加法
    int operator-(SmartPtr<T> &t1); //指针减法
    int getcount(){return *use_count;}
    
};




#endif /* SmartPtr_hpp */
