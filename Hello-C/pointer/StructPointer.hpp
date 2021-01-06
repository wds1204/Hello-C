//
//  StructPointer.hpp
//  Hello-C
//
//  Created by wds on 2021/1/6.
//

#ifndef StructPointer_hpp
#define StructPointer_hpp


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void makeSimpleStruct();
void defineMultiStruct();
void nestingStruct();
void useStructArray();
void structAndMalloc();
void useTypedef();
void useStructAndFunction();

//类型别名 关键字 typedef
typedef  char* Name;

typedef struct ImageInfo{
    char* name;
    int size;
    char* path;
}ImageInfo,*ImageInfo_P;

#endif /* StructPointer_hpp */
