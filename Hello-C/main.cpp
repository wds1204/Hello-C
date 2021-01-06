//
//  main.cpp
//  Hello-C
//
//  Created by wds on 2021/1/6.
//

#include <iostream>
#include "pointerOperate.hpp"
#include "Clazz.hpp"
#include "DestructorClas.hpp"
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    pointerOperate();
    
    
//    Box box1;
//    Box box2(10.0);
//
//    double volume=0.0;
//
//    box1.setLength(6.0);
//    box1.setBreadth(8.0);
//    box1.setHeight(9.0);
//    volume= box1.getVolume();
//    printf("Box1的体积： %f\n",volume);
//
//    printf("------------------------\n");
//    box2.setBreadth(80.0);
//    box2.setHeight(90.0);
//    volume= box2.getVolume();
//    printf("Box2的体积： %f\n",volume);
//    printf("------------------------\n");
//    //拷贝析构函数的使用
//    Box box3(101);
//    display(box3);
//    printf("------------------------\n");

    Line line1(111);
    Line line2=line1;//在这里也会调用了拷贝析构函数
    display2(line1);
    return 0;
}
