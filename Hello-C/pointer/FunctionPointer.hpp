//
//  FunctionPointer.hpp
//  Hello-C
//
//  Created by wds on 2021/1/6.
//

#ifndef FunctionPointer_hpp
#define FunctionPointer_hpp

#include <stdio.h>
#include <unistd.h>

void netCallBack(char * str);
void requestNet(char* url,void(*callBack)(char *));

#endif /* FunctionPointer_hpp */
