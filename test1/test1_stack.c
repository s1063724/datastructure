//
// Created by 10305 on 2020/2/13.
//
#include <stdio.h>
#include "../stack1.h"

int main(){

    Stack* stk = Stack_init(3,sizeof(int));//初始stack容量
    int x[3] = {5, 1, 2};
    Stack_push(stk, &x[0]);
    printf("%d\n", Stack_size(stk));
    Stack_push(stk, &x[1]);
    printf("%d\n", Stack_size(stk));
    Stack_push(stk, &x[2]);
    printf("%d\n", Stack_size(stk));
    if(Stack_is_full(stk))
        puts("full!");
    Stack_push(stk, &x[2]);
    printf("%d\n", Stack_size(stk));
    Stack_show(stk);
    while (!Stack_is_empty(stk)){
        int tmp;
        Stack_pop(stk, &tmp);
        printf("%d\n", tmp);
        Stack_show(stk);
    }
//    int i;
//    pop (stk, &i);

//    printf("%d", i);

//    return 0;
}
