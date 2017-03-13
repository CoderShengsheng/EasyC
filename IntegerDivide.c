//
//  main.c
//  Test
//
//  Created by Toby on 2017/3/13.
//  Copyright © 2017年 Toby. All rights reserved.
//

#include <stdio.h>

int main() {
    // 输入一个整数，然后将每一位分解成独立数字
    long n;
    int a[10],s,i=0,j;
    printf("输入一个整数：");
    scanf("%ld",&n);
    while(n>0)
    {
        s=n%10;
        a[i++]=s;
        n=n/10;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d\n",a[j]);
    }
}
