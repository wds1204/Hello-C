//
//  DestructorClas.cpp
//  Hello-C
//  拷贝析构函数练习
//  Created by wds on 2021/1/6.
//
#include <iostream>
#include "CopyDestructorClas.hpp"
using namespace std;

Line::Line(int len){
    cout <<"调用Line调用构造函数" << endl;
    ptr=new int;
    *ptr=len;
}

Line::Line(const Line &obj){
    cout <<"调用Line拷贝析构函数 并为ptr分配内存" << endl;
    
    ptr=new int;
    
    *ptr=*obj.ptr;//拷贝值

}

Line::~Line(){
    cout <<"调用Line析构函数" << endl;
    delete ptr;
}
int Line::getLength(){
    return *ptr;
}

void display2(Line obj){
    cout<< "line 大小 ："<< obj.getLength()<<endl;
}
