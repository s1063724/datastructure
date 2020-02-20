//
// Created by 10305 on 2020/2/14.
//
#include <stdio.h>

int main(){
    void* anytype;
    char* str = "abcd123";
    int integer = 1;
    int* ptr_integer = &integer;

    anytype = str;

    char* t_str = anytype;
    printf("%s\n", t_str);


    anytype = ptr_integer;
    int* t_int = anytype;
    printf("%d\n", *(int*)anytype);
    return 0;
}