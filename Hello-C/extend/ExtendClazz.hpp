//
//  ExtendClazz.hpp
//  Hello-C
//
//  Created by wds on 2021/1/7.
//

#ifndef ExtendClazz_hpp
#define ExtendClazz_hpp

#include <stdio.h>

//基类
class Shape
{
protected:
    int width;
    int height;
public:
    void setWidth(int w){
        width=w;
    };
    void setHeiht(int h){
        height=h;
    };
    
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
    int getArea()
    {
        return width*height;
    };
    
};

#endif /* ExtendClazz_hpp */
