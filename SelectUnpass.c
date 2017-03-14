//
//  main.c
//  shuzu
//
//  Created by Toby on 2017/3/13.
//  Copyright © 2017年 Toby. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define num 35
int main() {
    int a[num];
    int i,f=0;
    srand(100);
    for(i=0;i<num;i++)
        a[i] = rand()%100+1;
    for (i=0; i<num; i++) {
        printf("%d\n",a[i]);
        if(a[i]<60) f=1;
        }
    if(f!=1) printf("all pass");
    else printf("someone fail");
    
}
