//
//  main.c
//  shuzu
//
//  Created by Toby on 2017/3/13.
//  Copyright © 2017年 Toby. All rights reserved.
//

#include <stdio.h>
#define NUM 2
typedef struct {
    int year;
    int month;
    int day;
} DATA;
typedef struct {
    int num;
    char  name[30];
    DATA birth;
    char major[24];
}STUINFO;
void InputInfo(STUINFO[]);
void OutputInfo(STUINFO[]);
void SearchInfo(STUINFO[],DATA);
int main() {
    STUINFO s[NUM];
    DATA data;
    InputInfo(s);
    OutputInfo(s);
    printf("Enter birthday:\n");
    scanf("%d,%d",&data.month,&data.day);
    SearchInfo(s,data);
}
void InputInfo(STUINFO s[]){
    int i;
    printf("Enter the massege:\n");
    for(i=0;i<NUM;i++){
        s[i].num=i+1;
        scanf("%s",s[i].name);
        scanf("%d",&s[i].birth.year);
        scanf("%d",&s[i].birth.month);
        scanf("%d",&s[i].birth.day);
        scanf("%s",s[i].major);
    }
}
void OutputInfo(STUINFO s[]){
    int i;
    for (i=0; i<NUM; i++) {
        printf("Name：%s\t",s[i].name);
        printf("Birthday:%d-%d-%d\t",s[i].birth.year,s[i].birth.month,s[i].birth.day);
        printf("Major：%s\n",s[i].major);
    }
}
void SearchInfo(STUINFO s[],DATA data){
    int i;
    for (i=0;i<NUM;i++){
        if(s[i].birth.month>data.month){
            printf("num:%d\tname:%s\tbirthday:%d-%d-%d\tmajor:%s\n",s[i].num,s[i].name,s[i].birth.year,   s[i].birth.month,s[i].birth.day,s[i].major);
        }
        else if (s[i].birth.month==data.month&&s[i].birth.day>data.day) {
            printf("num:%d\tname:%s\tbirthday:%d-%d-%d\tmajor:%s\n",s[i].num,s[i].name,s[i].birth.year,   s[i].birth.month,s[i].birth.day,s[i].major);
        }
    }
}
