//
//  FunctionPointer.cpp
//  Hello-C
//
//  Created by wds on 2021/1/6.
//

#include "FunctionPointer.hpp"

/*函数指针定义 , 返回值(函数指针名称)(函数参数) = 函数名称*/

/*回调函数*/
void netCallBack(char * str){
    printf("网络请求回调\n");
    printf("请求到的数据：%s\n",str);
}

/*模拟网络请求回调*/
void requestNet(char* url,void(*callBack)(char *)){
    printf("请求地址：%s , 正在请求网络....\n",url);
    sleep(3);
    
    char* str="我是请求的网络数据，JoJo和吴先生";
    callBack(str);
}
