//
//  InlineCLass.cpp
//  Hello-C
//
//  Created by wds on 2021/1/7.
//
#include <iostream>
#include <string>
#include "InlineCLass.hpp"
using namespace::std;


void People::setAge(int a){
    age=a;
};

void People::setName(string var){
    name=var;
};
string People::getName(){
    return name;
}


void printName(People people){
   
    cout<<"name of People :::"<<people.name<<endl;
}
