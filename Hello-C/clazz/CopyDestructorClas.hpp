//
//  DestructorClas.hpp
//  Hello-C
//  拷贝析构函数
//  Created by wds on 2021/1/6.
//

#ifndef CopyDestructorClas_hpp
#define CopyDestructorClas_hpp

#include <stdio.h>

class Line
{
public:
    int getLength(void);
    Line(int len);
    Line(const Line &obj);
    ~Line();
    
private:
    int *ptr;
    
};
void display2(Line one);


#endif /* CopyDestructorClas_hpp */
