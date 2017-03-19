//
//  main.c
//  Exam
//
//  Created by Toby on 2017/3/19.
//  Copyright © 2017年 Toby. All rights reserved.
//


#include <stdio.h>
#define NUM 20
int delSpa(char *s);
int main(){
    char a[NUM];
    gets(a);
    delSpa(a);
}
int delSpa(char a[]){
    int i,k=0;
    for(i=0;a[i]!='\0';i++){
        if (a[i]!=' ') {
            a[k++]=a[i];
        }
    }
    puts(a);
    return i-k;
}
