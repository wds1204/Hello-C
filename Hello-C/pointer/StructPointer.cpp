//
//  StructPointer.cpp
//  Hello-C
//
//  Created by wds on 2021/1/6.
//

#include "StructPointer.hpp"
//定义一个结构体，结构体中只有声明，函数没有实现，属性也不能初始化，一般定义在头文件中
struct Person{
    char* name;
    int age;
};

struct News{
    char title[128];
    char* content;
};

//简单实用结构体
void makeSimpleStruct(){
    //使用结构体，使用字面量的形式创建一个结构体
    struct Person person={"zeno",21};
    //打印
    printf("输出：姓名 - %s ; 年龄 - %d\n",person.name,person.age);
    
    struct Person person2;
    person2.name="船长";
    person2.age=18;
    
    printf("输出：姓名 - %s ; 年龄 - %d\n",person2.name,person2.age);

    struct News news;
    //字符数组的赋值，不能直接="XXX",而需要使用strcpy()函数。
    strcpy(news.title,"我是新闻标题");
    news.content = " 我是新闻正文";
    
    printf("\n\n输出：\n标题 \n %s \n正文：\n  %s\n", news.title, news.content);
}

//结构体的多种写法

//声明结构体的时候，定义结构体变量和指针
struct Product{
    char* productName;
    char* productDesc;
}product,*productP;

//匿名结构，没有结构体名称，可以定义多个结构体变量， 可作为单例使用
struct{
    char * name;
    int age;
}person;

//结构体多种写法的使用
void defineMultiStruct(){
    product.productName="iphone 11 ";
    product.productDesc="全新的iphone,黄色，125G";
    
    printf("产品信息：\n产品名称：%s\n 产品描述：%s\n",product.productName,product.productDesc);
    
    printf("\n\n\n 使用结构体指针，使用结构体指针不用 . 符号，使用-》 符号来操作结构体成员，->操作符*p.的简写 \n\n\n");
    
    productP=&product;
    
    printf("产品信息：\n产品名称：%s\n 产品描述：%s\n",productP->productName,productP->productDesc);
    
    //使用匿名结构体，始终只有一个结构体实例，可以作为单例来使用
    person.name="吴先生";
    person.age=23;
    
    printf("\n\n 用户信息：\n用户姓名：%s\n用户年龄：%d\n",person.name,person.age);

}

//结构嵌套

//one
struct GoodsBean{
    
    int total;
    int status;
    
    struct Goods{
        char* goodsName;
        char* goodDesc;
    }goods;
    
};

//two
struct ProductBean{
    
    int total;
    int status;
    
    struct Product product;
};

//结构嵌套示例

//结构体嵌套的时候，使用字面量创建结构体，嵌套的结构体也是使用{}来创建，会出现{{},{}}这样的结构

void nestingStruct(){
    printf("\n\n\n结构嵌套示例\n\n\n");
    
    //使用字面量的形式赋值
    
    struct GoodsBean goodsBean = { 10,0,{ "全新Iphone6s","金色全新Iphone6s ， 能与Android手机媲美的Iphone6s" } };

    printf("商品总数：%d\n商品状态：%d\n商品名称：%s\n商品描述：%s\n", goodsBean.total, goodsBean.status,goodsBean.goods.goodsName,goodsBean.goods.goodDesc);

    printf("\n\n");
    
    struct ProductBean productBean;
    productBean.total=100;
    productBean.status=0;
    
    productBean.product.productName="airPod2";
    productBean.product.productDesc="airPod2 无线'真'蓝牙耳机";
    
    printf("商品总数：%d\n商品状态：%d\n商品名称：%s\n商品描述：%s\n", productBean.total, productBean.status, productBean.product.productName, productBean.product.productDesc);
    
}

//结构体数组
//通过数组指针运算来遍历结构体数组 。
void useStructArray(){
    printf("\n\n\n结构体数组示例\n\n");
    //结构体数组
    struct Person persons[3]={{"张三",23},{"王二",32},{"李四",45}};
    
    struct Person *p = persons;
       printf("persons: %x\n",persons);
    printf("p: %#x\n",p);
    printf("sizeof(persons) %d\n",sizeof(persons));
    printf("sizeof(struct Person) %d\n",sizeof(struct Person));
//    int personArrSize = sizeof(persons) / sizeof(struct Person);
    int personArrSize=sizeof(persons)/sizeof(struct Person);
    
    printf("遍历结构体数组：\n");
    for (; p<persons+personArrSize; p++) {
        printf("姓名：%s \t 年龄：%d\n" ,p->name,p->age);
    }
    printf("personArrSize :%d\n",personArrSize);
    
    
}

//结构体动态f内存分配
//因申请的动态内存返回的指针是内存空间的首地址，所以通过指针运输p++.来进行
//结构体的赋值
//在遍历动态的内存中的数据时候，需要从首地址开始遍历，所以需要多次将首地址赋值给
//不同的指针变量
void structAndMalloc(){
    printf("\n\n\n结构体与动态内存分配\n\n\n");
    
    //申请堆内存空间，空间地址连续
    struct Person*person=(struct Person*)malloc(sizeof(struct Person)*10);
    struct Person*p=person;
    
    p->name="麻子";
    p->age=21;
    
    p++;
    p->name="王二";
    p->age=12;
    
    printf("遍历结构体动态内存\n");
    struct Person* loop_p=person;
    for (; loop_p<person+2; loop_p++) {
        printf("姓名：%s\t  年龄：%d\n",loop_p->name,loop_p->age);
    }
    if (person!=NULL) {
        free(person);
        person=NULL;
    }
   
}

//类型别名 关键字 typedef
//typedef  char* Name;
//
//typedef struct ImageInfo{
//    char* name;
//    int size;
//    char* path;
//}ImageInfo,*ImageInfo_P;

//修改文件名称
void reFileName(ImageInfo_P imageInfo_p,char* reName){
    imageInfo_p->name=reName;
}

//类型别名示例
void useTypedef(){
    printf("\n\n\n类型别名示例\n\n\n");
    
    Name name="张三";
    printf("类型别名: Name = %s\n",name);
    
    ImageInfo imageInfo;
    char pathStr[120] ={"www.wdsimage.com"};
    imageInfo.name="wds的头像.jpg";
    reFileName(&imageInfo, "wds的自画像.jpg");
    
    imageInfo.size=1024*22;
    imageInfo.path=pathStr;
    
    printf("\n\n文件信息：\n文件名：%s\n文件大小：%d kb\n文件路径：%s\n",imageInfo.name,imageInfo.size,imageInfo.path);
}
//结构体别名和在结构体}xxx; ， 有所不同 ， 别名只是给结构体重新起了个名字 ， 本身不是结构体变量 ，
//不能像}xxx;直接通过xxx.xxx进行操作 ， 别名还是需要声明之后 ， 才能进行.xxx操作 。


//结构体和函数指针
//因为结构体中不能有函数实体 ， 所以在创建结构体时 ， 将函数名称赋值给函数指针即可。
struct Dog{
    char *name;
    int age;
    void (*dogWow)(char* wow);
};
void dogWow(char *wow){
     printf("狗是：%s 叫\n", wow);
};
void useStructAndFunction(){
    printf("\n\n\n");
            
    printf("结构体中，函数没有实现，在创建结构体时，将函数名称赋值给函数指针即可\n");
    struct Dog dog={"小黑",3,dogWow};
    dog.dogWow("汪汪汪");
           
}
