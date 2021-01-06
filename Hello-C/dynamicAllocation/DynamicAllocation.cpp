//
//  DynamicAllocation.cpp
//  Hello-C
//
//  Created by wds on 2021/1/6.
//

#include "DynamicAllocation.hpp"


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
    printf("请输入增加的内存大小");
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
