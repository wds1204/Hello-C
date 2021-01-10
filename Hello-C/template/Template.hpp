//
//  Template.hpp
//  Hello-C
//
//  Created by wds on 2021/1/9.
//

#ifndef Template_hpp
#define Template_hpp
#include <iostream>
#include <stdio.h>
using namespace std;
//函数模版
template <class T> void newSwap(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
};

//类模版
template<class T> class A{
    //如果声明在.hpp文件中，定义在.cpp文件，使用的时候应当导入.cpp文件,
    //如果导入的是.hpp文件，在Xcode编译的时候会报错,这个可能和编译器有关，
    public:
    T g(T a,T b);
    A();
    
// 通常情况下模版的声明和定义都放在头文件中，
//    T g(T a,T b){
//        return a+b;
//    };
//    A(){
//        cout<<"调用A的构造函数"<<endl;
//    };
    
    //
};
 

#endif /* Template_hpp */
