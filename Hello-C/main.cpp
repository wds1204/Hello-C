//
//  main.cpp
//  Hello-C
//
//  Created by wds on 2021/1/6.
//

#include <iostream>
#include "pointerOperate.hpp"
#include "Clazz.hpp"
#include "CopyDestructorClas.hpp"
#include "ExtendClazz.hpp"


#include "InlineCLass.hpp"
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

//    Line line1(111);
//    Line line2=line1;//在这里也会调用了拷贝析构函数
//    display2(line1);
    
    cout<<"Max(10,20): "<<Max(10,20)<<endl;
    
    People people;
    people.setAge(10);

    people.setName("wds");
    printName(people);
    //声明一个指向类的指针
    People *ptrP;
    //保存对象的地址
    ptrP=&people;
    //使用成员访问运算符 访问成员
    cout<< "getName of Peopel: " << ptrP -> getName() <<endl;
    
    
    Rectangle rect;
    rect.setHeiht(100);
    rect.setWidth(200);
    printf("Rectangle total area : %d\n", rect.getArea());
    

    return 0;
}
