//
//  Template.cpp
//  Hello-C
//
//  Created by wds on 2021/1/9.
//
#include <iostream>
#include "Template.hpp"
using namespace std;

template<class T> A<T>::A(){
    cout<<"调用A的构造函数"<<endl;
}
 
template<class T> T A<T>::g(T a,T b){
    return a+b;
}
