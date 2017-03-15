//
//  main.c
//  WordCount
//
//  Created by Toby on 2017/3/14.
//  Copyright © 2017年 Toby. All rights reserved.
//
#include <stdio.h>
#define NUM 10
typedef struct {
    int data;
    int pos;
}DATA;
void Input(DATA[]);
void Output(DATA[]);
void Sort(DATA[]);
int main(){
    DATA d[NUM];
    Input(d);
    Sort(d);
    Output(d);
}
void Input(DATA d[]){
    int i;
    printf("Enter the number:\n");
    for (i=0; i<10; i++) {
        scanf("%d",&d[i].data);
        d[i].pos=i+1;
    }
}
void Sort(DATA d[]){
    //冒泡排序，进行从小到大排序。
    int i,j;
    DATA t;
    for(i=0;i<NUM;i++)
        for(j=NUM-i-1;j>0;j--){
            if(d[j].data<d[j-1].data){
                t=d[j];
                d[j]=d[j-1];
                d[j-1]=t;
            }
        }
}
void Output(DATA d[]){
    int i;
    for (i=0;i<NUM;i++){
        printf("%d : %d\n",d[i].data,d[i].pos);
    }
}
