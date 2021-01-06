//
//  IO.cpp
//  Hello-C
//
//  Created by wds on 2021/1/6.
//

#include "IO.hpp"


//创建File对象
//构建输入输出流
//创建缓冲区，缓存读写数据（将流数据读入到内存或写入到磁盘）
//关闭流、关闭文件流

void readTextFile(){
//    char *path="\\Users\\wudongsheng\\C++\\C语言基础\\C语言基础\\IO.cpp";
    char * path="/Users/wudongsheng/C++/C语言基础/C语言基础/IO.cpp";
    
    //r 打开只读文件，该文件必须存在。
    FILE* fp=fopen(path,"r");
    if (fp==NULL) {
        printf("打开文件失败\n");
        return;
    }
    printf("\n\n\开始读取文件\\nn");
    
    //创建字符缓冲区 ，每次读一个字符串， 都会缓冲到字符数组中
    char buffer[1024];
    while (fgets(buffer,1024,fp)) {
        printf("%s",buffer);
    }
    fclose(fp);
    
}
//写入文本文件
void writeTestFile(){
    char * path="/Users/wudongsheng/C++/C语言基础/C语言基础/IO.cpp";
    char* content="// 如果你已生于荒野,就假装自己像个冠军";
    //以附加的方式打开只写文件。若文件不存在，则会建立该文件，如果文件存在，写入的数据会被加到文件尾，即文件原先的内容会被保留。
    FILE *fp=fopen(path, "a");
    if (fp==NULL) {
        printf("打开文件失败\n");
        return;
    }
    //写入文件
    fputs(content, fp);
    //关闭文件流
    fclose(fp);
    
}
// 如果你已生于荒野,就假装自己像个冠军
//二进制文件读写
void fileCopy(){
     char * currentPath="/Users/wudongsheng/C++/C语言基础/C语言基础/IO.hpp";
     char * desPath="/Users/wudongsheng/C++/C语言基础/C语言基础/IOCopy.hpp";
    
    FILE* currentFile_P=fopen(currentPath,"rb");
    FILE* desFile_P=fopen(desPath, "wb");
    
    int buffer[1024];//数据缓冲区
    int len ;//每次读取数据的长度
   
    while (!feof(currentFile_P)) {//非0文件读取完成
        if (ferror(currentFile_P)) {
            perror("error");
            clearerr(currentFile_P);//清除文件出错标志
            break;
        }
        len=fread(buffer, sizeof(int), 10, currentFile_P);
        printf("缓存区里的内容写入到文件中 %d\n",len);
        if (len!=-1) {
          fwrite(buffer, sizeof(int), len,desFile_P);
        }
        
       
    }

   
    fclose(desFile_P);
    fclose(currentFile_P);
        
}


//文件加密
void encryptFile(){
    printf("\n\n\n=========开始加密=========\n\n");
    //待加密文件路径
    char* normal_path="/Users/wudongsheng/C++/C语言基础/C语言基础/640.jpeg";
    //加密后的文件路径
    char* encrypt_path="/Users/wudongsheng/C++/C语言基础/C语言基础/640_encrypt.jpeg";
    
    FILE *normal_fp=fopen(normal_path,"rb");
    
    FILE* encrypt_fp=fopen (encrypt_path, "wb");
    
   
    int let;
    while (!feof(normal_fp)) {
        let=fgetc( normal_fp);
        printf("加密let %d\n",let);
        fputc(let^8,encrypt_fp);
    }
    printf("文件加密成功\n");
    
    fclose(encrypt_fp);
    fclose(normal_fp);
    
}

//文件解密
void decryptFile(){
     printf("\n\n\n=========开始解密===========\n\n");
     //加密后的文件路径
    char* encrypt_path="/Users/wudongsheng/C++/C语言基础/C语言基础/640_encrypt.jpeg";
    //解密后的文件路径
   
    char* decrypt_path="/Users/wudongsheng/C++/C语言基础/C语言基础/640_decrypt.jpeg";
    
    //打开文件
    FILE * encrypt_fp=fopen(encrypt_path,"rb");
    FILE * decrypt_fp=fopen(decrypt_path,"wb");
    
    int let;
    while (!feof(encrypt_fp)) {
        let=fgetc(encrypt_fp);
         printf("解密let %d\n",let);
        fputc(let ^8,decrypt_fp);
    }
    
    printf("文件解密成功\n");
    
    fclose(encrypt_fp);
    fclose(decrypt_fp);
}
