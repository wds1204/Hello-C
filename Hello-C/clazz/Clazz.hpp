//
//  Clazz.hpp
//  Hello-C
//  1、无参、有参数的构造函数
//  2、初始化队列初始化字段
//  3、析构函数
//  4、拷贝析构函数
//  Created by wds on 2021/1/6.
//

#ifndef Clazz_hpp
#define Clazz_hpp

#include <stdio.h>

class Box
{
    private://私有成员
        double length;         // 长度
        double breadth;        // 宽度
        double height;         // 高度
    public://公有成员
        //构造函数
        Box();
        //带参数的构造函数
        Box(double len);
        //析构函数
        ~Box();
        //拷贝析构函数
        Box(const Box &obj);
        // 成员函数声明
        double getVolume(void);
        void setLength( double len );
        void setBreadth( double bre );
        void setHeight( double hei );
        double getLength();
    
       
    
    //在类中定义成员函数 称之为内联方式 可以没有inline标识符
    
//    double getVolume(void){
//        return length * breadth * height;
//    }
    
    protected://受保护成员

};

void display(Box obj);

#endif /* Clazz_hpp */
