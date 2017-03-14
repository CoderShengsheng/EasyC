//
//  main.c
//  shuzu
//
//  Created by Toby on 2017/3/13.
//  Copyright © 2017年 Toby. All rights reserved.
//

#include <stdio.h>
#define num 13
int main() {
    float a[num]={0};
    float min,max,sum;
    int i;
    printf("输入一组分数:\n");
    for(i=0;i<13;i++)
        scanf("%f",&a[i]);
    sum=min=max=a[0];
    for(i=1;i<13;i++){
        if(a[i]<min) min=a[i];
        if(a[i]>max) max=a[i];
        sum+=a[i];
    }
    printf("result is %f\n",(sum-min-max)/11);
}
