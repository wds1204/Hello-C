//
//  DynamicAllocation.cpp
//  Hello-C
//
//  Created by wds on 2021/1/6.
//
#include <iostream>
#include "DynamicAllocation.hpp"

using namespace std;
/*
    C语言内存分配：
    1.栈区（stack） win 1~2M（是一个确定的常数） 超出会提示stackoverflow
        自动分配 ， 自动释放
    2.堆区（heap）
        手动分配和释放 ， 80%内存
    3.全局区或静态区
    4.字符常量区
    5.程序代码区
    
*/

void dynamic(){
    int len;
    printf("请输入首次分配内存大小：");
    scanf("%d", &len);
    // 动态分配内存 ， 内存空间是连续的
    int* p = (int*)malloc(len * sizeof(int));
    // 给申请的内存空间赋值
    int i = 0;
    for (; i < len ; i++)
    {    // 生成随机数赋值
        p[i] = rand() % 100;

        printf("array[%d] = %d , %#x\n", i, p[i], &p[i]);
    }

    // 在原有内存上面，重新分配内存大小
    printf("请输入增加的内存大小: ");
    int add;
    scanf("%d", &add);
    // 重新申请内存大小 ， 传入申请的内存指针 ， 申请内存总大小
    int* p2 = (int*)realloc(p, (len + add) * sizeof(int));
    // 给新申请的内存空间赋值
    int j = len;
    for (; j < len + add ; j++)
    {
        p2[j] = rand() % 200;
    
    }

    // 打印
    j = 0;
    for (; j < len + add; j++)
    {
        printf("array[%d] = %d , %#x\n", j, p2[j], &p2[j]);
    }
    
    // 回收申请的动态内存
    if (p2 != NULL)
    {
        free(p2);
        p2 = NULL;
    }
    
}
//new 和 delete运算符
/// <#Description#>
void newDynamic(){
    double * pvalue=NULL;//初始化为null的指针
    pvalue=new double;//为变量请求内存
    
    *pvalue=1024.00;
    
    cout<<"Value of pvalue: "<<*pvalue<<endl;
    delete pvalue;
    
    /*数组的动态内存分配*/
    //一维数组
    int * array=NULL;
    array=new int[20];
    for (int i=0; i<20; i++) {
        array[i]=i+1;
    }
    for (int i=0; i<20; i++) {
        cout<< array[i]<<',';
    }
    cout<<endl;
    delete []array;
    
    //二维数组
    
    int **array2;
//    假设数组第一维长度为5,第二维度的长度为4
//    array2[5][4]
    array2=new int*[5];
    for (int i=0; i<5; i++) {
        array2[i]=new int[4];
    }
    
    for ( int i = 0; i < 5; i++ ){
          for ( int j = 0; j < 4; j++ )
          {
              array2[i][j]=rand()%100;

          }
    }
    //打印数据
    for(int i=0; i<5; i++){
            for(int j=0; j<4; j++)
            {
                if(j==0) cout<<endl;
                cout<<array2[i][j]<<"\t";
            }
    }
    //开始释放申请的内存
    
    for (int i=0; i<5; i++) {
        delete []array2[i];
    }
    
    delete []array2;
     
    cout<<endl;
}
//对象的动态内存分配

/// <#Description#>
void                    objDynamic(){
    NewBox * box=new NewBox;
    delete box;
    cout<<endl;
    
//   给四个对象分配内存，会调用四次构造方法
    NewBox * boxArray=new NewBox[4];
//   同样删除内存也会调用四次析构函数
    delete []boxArray;
}
