//
//  main.c
//  shuzu
//
//  Created by Toby on 2017/3/13.
//  Copyright © 2017年 Toby. All rights reserved.
//

#include <stdio.h>
#define NUM 10
int main() {
    // 统计竞选票数
    int a[NUM]={ 0 };
    int x,j;
    printf("输入选票结果：\n");
    do{
        scanf("%d",&x);
        if(x<0||x>10)
            printf("输入无效");
        else {
            if(x!=0)
                a[x-1]=a[x-1]+1;
        }
    }while (x!=0);
    int m=1;
    for(j=0;j<10;j++){
        if(a[j]>a[m]) m=j;
        printf("%d\t",a[j]);}
    printf("\n Winer is %d\n",m+1);
    
}
