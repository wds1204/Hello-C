//
//  DynamicAllocation.hpp
//  Hello-C
//
//  Created by wds on 2021/1/6.
//

#ifndef DynamicAllocation_hpp
#define DynamicAllocation_hpp
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class NewBox
{
public:
    NewBox(){
        cout<<"调用NewBox构造函数！"<<endl;
    }
    ~NewBox(){
        cout<<"调用NewBox析构函数！"<<endl;
    }
};
void dynamic();

void newDynamic();

void objDynamic();

#endif /* DynamicAllocation_hpp */
