//
//  main.c
//  shuzu
//
//  Created by Toby on 2017/3/13.
//  Copyright © 2017年 Toby. All rights reserved.
//

#include <stdio.h>
#define num 26
int main() {
    int a[num]={0};
    char c;
    int i;
    printf("请输入一组字符串：\n");
    while ((c=getchar())!='\n'){
        if (c<='Z'&&c>='A')
            a[c-'A']+=1;
        else if (c<='z'&&c>='a')
            a[c-'a']+=1;
    }
    for(i=0;i<num;i++)
        printf("%c:%d\n",'A'+i,a[i]);
    
}
