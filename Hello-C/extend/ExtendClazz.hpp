//
//  ExtendClazz.hpp
//  Hello-C
//
//  Created by wds on 2021/1/7.
//

#ifndef ExtendClazz_hpp
#define ExtendClazz_hpp

#include <stdio.h>
#include <iostream>

using namespace std;
//基类
class Shape
{
protected:
    int width;
    int height;
public:
    Shape(){};
  
    void setWidth(int w){
        width=w;
    };
    void setHeiht(int h){
        height=h;
    };
    
    int getWidth(void){
        return width;
    };
    int getHeiht(void){
      
        return height;
    };
    //虚函数
//   virtual int getArea()
//         {
//            cout << "Parent class area :" <<endl;
//            return 0;
//         };
    //纯虚函数
    virtual int getArea()=0;

    
};
// 基类 PaintCost
class PaintCost
{
public:
    int getCost(int area)
    {
        return area*70;
    };
    
};

//派生类 多继承 
class Rectangle: public Shape ,public PaintCost
{
public:
    Rectangle(){};
    int getArea()
    {
        cout << "Rectangle class area :" <<endl;
        return width*height;
    };
    
};

#endif /* ExtendClazz_hpp */
