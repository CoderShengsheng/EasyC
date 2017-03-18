//
//  main.c
//  FileOpen
//
//  Created by Toby on 2017/3/18.
//  Copyright © 2017年 Toby. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fp1,*fp2;
    char ch;
    if(argc!=3){
        printf("输入错误\n");
        return 1;
    }
    if((fp1=fopen(argv[1],"r"))==NULL){
        printf("文件读取错误\n");
        return 1;
    }
    if((fp2=fopen(argv[2],"w"))==NULL){
                  printf("文件写入错误\n");
                  return 1;
    }
    while((ch=getc(fp1))!=EOF){
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
