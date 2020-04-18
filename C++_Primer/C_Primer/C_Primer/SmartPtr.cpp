//
//  SmartPtr.cpp
//  C_Primer
//
//  Created by Freg Wang on 2020/4/8.
//  Copyright © 2020 Freg Wang. All rights reserved.
//

#include "SmartPtr.hpp"

template <class T>
int SmartPtr<T>::operator-(SmartPtr<T> &t1){
    return this->ptr - t1.ptr;
}

template <class T>
SmartPtr<T>::SmartPtr(T *p){
    ptr = p;
    try{
        use_count = new int(1);
    }catch(...){
        delete ptr;
        ptr = nullptr;
        delete use_count;
        use_count = nullptr;
    }
}

template <class T>
SmartPtr<T>::SmartPtr(const SmartPtr<T>& orig){
    use_count = orig.use_count; //指向同一个区域
    this->ptr = orig.ptr;
    *use_count++;
}

template <class T>
SmartPtr<T>& SmartPtr<T>::operator=(SmartPtr<T> &rhs){
    *(rhs.use_count)++;
    if(--(*use_count) == 0){
        delete ptr;
        ptr = nullptr;
        delete use_count;
        use_count = nullptr;
    }
    ptr = rhs.ptr;
    use_count = rhs.use_count;
    return *this;
}

template <class T>
SmartPtr<T>::~SmartPtr(){
    if(--(*use_count) == 0){
        delete ptr;
        ptr = nullptr;
        delete use_count;
        use_count = nullptr;
    }
    
}

template <class T>
T SmartPtr<T>::operator*(){
    return *ptr;
}

template <class T>
T* SmartPtr<T>::operator->(){
    return ptr;
}

template <class T>
T* SmartPtr<T>::operator+(int i){
    return ptr+i;
}
