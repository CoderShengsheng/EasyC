//
//  main.c
//  shuzu
//
//  Created by Toby on 2017/3/13.
//  Copyright © 2017年 Toby. All rights reserved.
//

#include <stdio.h>
#define num 10
int main() {
    int a[num]={0};
    int i,key,mid,low=0,high=num-1;
    printf("输入一组数据:\n");
    for(i=0;i<num;i++)
        scanf("%d",&a[i]);
    printf("输入查找的数：\n");
    scanf("%d",&key);
    while(low<high){
        mid=(low+high)/2;
        if(a[mid]==key) break;
        else if(a[mid]<key)
            high=mid-1;
        else low=mid+1;
    }
    if (low>=high) {
        printf("没找到\n");
    }
    else printf("the key is in %d\n",mid);
}
