//
//  pointerOperate.cpp
//  Hello-C
//
//  Created by wds on 2021/1/6.
//

#include "pointerOperate.hpp"
#include <iostream>
 
using namespace std;

void pointerOperate(){
    int  var = 20;   // 实际变量的声明
       int  *ip;        // 指针变量的声明
     
       ip = &var;       // 在指针变量中存储 var 的地址
     
       cout << "Value of var variable: ";
       cout << var << endl;
     
       // 输出在指针变量中存储的地址
       cout << "Address stored in ip variable: ";
       cout << ip << endl;
     
       // 访问指针中地址的值
       cout << "Value of *ip variable: ";
       cout << *ip << endl;
}
