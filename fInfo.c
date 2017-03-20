//
//  main.c
//  Exam
//
//  Created by Toby on 2017/3/19.
//  Copyright © 2017年 Toby. All rights reserved.
//


#include <stdio.h>
#define NUM 3
typedef struct {
    int num;
    char name[30];
    float salary;
}INFO;
  int main()
{
    int i,j=0;
    FILE *fp,*nfp;
    INFO s[NUM],y[NUM];
    printf("请输入学生信息：\n");
    if ((fp=fopen("/Users/toby/Desktop/编译测试/test5.txt", "w"))==NULL)
    {
        printf("write error\n");
        return 1;
    }
    for (i=0; i<NUM; i++) {
        scanf("%d%s%f",&s[i].num,s[i].name,&s[i].salary);
        fprintf(fp, "%d\t%s\t%f\n",s[i].num,s[i].name,s[i].salary);
    }
    fclose(fp);
    if ((fp=fopen("/Users/toby/Desktop/编译测试/test5.txt", "r"))==NULL)
    {
        printf("read error\n");
        return 1;
    }
    if ((nfp=fopen("/Users/toby/Desktop/编译测试/test5_new.txt", "w"))==NULL)
    {
        printf("write error\n");
        return 1;
    }
    for(i=0;i<NUM;i++){
        fscanf(fp, "%d%s%f",&s[i].num,s[i].name,&s[i].salary);
        if(s[i].salary<300.00) {
        y[j++]=s[i];
        fprintf(nfp, "%d\t%s\t%f\n",y[j-1].num,y[j-1].name,y[j-1].salary);
        }
    }
    fclose(fp);
    fclose(nfp);
}
