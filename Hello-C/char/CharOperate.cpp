//
//  CharOperate.cpp
//  Hello-C
//
//  Created by wds on 2021/1/6.
//

#include "CharOperate.hpp"

//字符数组。本身是一个数组，但是也可以作为字符串格式化输出，可以任意替换里面的字符，和操作数组一样
void charArray(){
    //字符数组，可以修改
    char a[10]={'w','d','s','l','a',' ','j','x','m','h'};
    //字符数组作为字符串输出
    printf("原字符：%s\n",a);
    
    a[0]='a';
        
    printf("修改后的字符：%s\n",a);
}


//字符指针
//字符指针与字符数组 ， 最大的区别是一个定义了就不可以修改 ， 一个可以任意修改里面的字符 ， 就和String和StringBuilder一样 ， String定义了就无法增加或修改里面的内容 ， 一个是可以增加和修改里面的内容 。
void charPointer(){
    char* s="be patient";
    
    printf("内存地址：%#x\n",s);
    
    printf("-------------------------------\n截取字符\n");
    //字符串截取
    s+=1;

    while (*s) {
        printf("%c\n",*s);
        
        s++;
    }
}

//字符串 拼接
void spliceString(){
    char dest[40]={'l','s','a','w',' ','b'};
    
    char* c1="be patient";
    char* c2="Never give up ";
    //拼接
    strcat(dest,c1);
    strcat(dest,c2);
    
    printf("\n拼接字符串：\n%s\n", dest);
    
}


//查找单个字符
void searchChar(){
    char* str="Find single characte";
    //截取从e后面
    char* p=strchr(str,'e');
     printf("p:%s\n",p);
    if (p) {
        printf("索引位置：%d\n",p-str);
        printf("打印: ");
        str += p - str;
        
        while (*str){
            printf("%c\n",*str);
            str++;
         }
        printf("\n");
    }else{
        printf("没有找到\n");
    }
    
}


//查找字符串
void sreachChars(){
    char* str = "落花有意流水无情";
    char* handle = "流";
    
    char* p=strstr(str,handle);
     printf("p:%s\n",p);
     printf("*p:%#x\n",*p);
    if (*p) {
        printf("索引位置：%d\n",p-str);
        printf("打印：");
        str+=p-str;
        printf("%s  ----- %s\n",str,p);
    }
}

//字符转换int
void  strToInt(){
    char*p ="1024";
    int toInt=atoi(p);
    
    int res=toInt+1024;
    
    printf("字符转换int数值：%d----toInt:%d\n",res,toInt);
}
