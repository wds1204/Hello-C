//
//  InlineCLass.hpp
//  Hello-C
//
//  Created by wds on 2021/1/7.
//


#ifndef InlineCLass_hpp
#define InlineCLass_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace::std;



inline int Max(int a,int b){
    return (a>b)?a:b;
};

class People
{
protected:
    int age;
    string name;
    
public:
    void setAge(int age);
    void setName(string name);
    string getName();
    friend void printName(People people);
    
};



#endif /* InlineCLass_hpp */
