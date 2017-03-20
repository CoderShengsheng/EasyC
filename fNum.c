//
//  main.c
//  Exam
//
//  Created by Toby on 2017/3/19.
//  Copyright © 2017年 Toby. All rights reserved.
//


#include <stdio.h>
  int main()
{
    int i,j;
    char s;
    FILE *fp;
    if((fp=fopen("/Users/toby/Desktop/编译测试/file1.txt", "w"))==NULL){
        printf("write error");
        return 1;
    }
    for (i=1; i<=1000; i++) {
        for(j=2;j<i;j++){
            if(i%j==0) break;
        }
        if(i==j){
            fprintf(fp,"%d\t",i);
        }
    }
    fclose(fp);
    if((fp=fopen("/Users/toby/Desktop/编译测试/file1.txt", "r"))==NULL){
        printf("read error");
        return 1;
    }
    s=fgetc(fp);
    while (s!=EOF) {
        printf("%c",s);
        s=fgetc(fp);
    }
}
