//
// Created by 10305 on 2020/2/15.
//
#include <stdio.h>
#include <string.h>
int main(){
    int a=55555;
    char str[5]={0,0,0,0,0};
    memcpy(&str,&a,sizeof(int));
    printf("%p\n",str);
    printf("%x\n",str);
    printf("%c,%c,%c,%c\n",str[0],str[1],str[2],str[3]);
    printf("%d,%d,%d,%d\n",str[0],str[1],str[2],str[3]);
    return 0;
}
