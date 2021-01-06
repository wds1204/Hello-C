//
//  Clazz.cpp
//  Hello-C
//
//  Created by wds on 2021/1/6.
//

#include "Clazz.hpp"
#include <iostream>
using namespace std;
 

/* 在类的外部使用范围解析运算符 :: 定义函数成员函数*/
//在::运算符之前必须要使用类名
Box::Box(){
    cout<< "Box的构造函数"<<endl;
}
//   使用初始化列表初始化字段
Box::Box(double len):length(len){
    cout<< "初始化 Box对象 并初始化length=="<<len<<endl;
}
//上面的使用方式等价于下面
//Box::Box(double len){
//    length=len;
//}


Box::~Box(){
    cout<<"调用Box的析构函数"<<endl;

}


Box::Box(const Box &obj){
    cout<<"调用Box的拷贝析构函数"<<endl;
    length=obj.length;

}
double Box::getLength(){
    return length;
}



double Box::getVolume(void)
{
    return length * breadth * height;
}
 
void Box::setLength( double len )
{
    length = len;
}
 
void Box::setBreadth( double bre )
{
    breadth = bre;
}
 
void Box::setHeight( double hei )
{
    height = hei;
}


void display(Box obj){
    cout<< "box 大小："<<obj.getLength() <<endl;
}
