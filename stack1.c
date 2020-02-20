#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack1.h"

void _Stack_expend(Stack* stack);
void* _Stack_get_element(Stack* stack,int index);

//stack represent stack
Stack* Stack_init(int capacity,int size_of_element){
    Stack* stk = (Stack*)malloc(sizeof(Stack));

    stk->top = -1;
    stk->capacity = capacity;
    stk->arr=malloc(capacity*size_of_element);
    stk->size_of_element=size_of_element;
    return stk;
}

int Stack_push(Stack* stack, void *val){
    if(Stack_is_full(stack)){
        _Stack_expend(stack);
    }
    stack->top++;
    memcpy(_Stack_get_element(stack, stack->top),val,stack->size_of_element);
    return 1;//表示沒有錯誤
}

int Stack_pop(Stack* stack, void * element){
    if(stack->top == -1){
        return 0;
    }
    memcpy(element,_Stack_get_element(stack, stack->top),stack->size_of_element);
    stack->top--; //先取出資料在降下來
    return 1;
}

void * Stack_peek(Stack* stack, void *val){
    return memcpy(stack->arr+stack->top,val,stack->size_of_element);
}

int Stack_size(Stack* stack){
    return stack->top + 1;
}
void _Stack_expend(Stack* stack){
    void* temp=malloc(stack->capacity*2*stack->size_of_element);
    memcpy(temp,stack->arr,stack->size_of_element*stack->capacity);
    free(stack->arr);  //刪除arr指向的空間記憶體
    stack->arr=temp;  //把arr指向的位置改成temp指向位置
    stack->capacity *= 2; //把容量放大兩倍
}
void Stack_show(Stack* stack){
    for(int i=stack->top;i>=0;i--){
        printf("element[%d] at %p\n",i,_Stack_get_element(stack, i));
    }
}

void* _Stack_get_element(Stack* stack,int index){ //index是指array的第幾個元素
    return stack->arr+index*stack->size_of_element;
}

int Stack_is_empty(Stack* stack){
    return stack->top == -1;
}

int Stack_is_full(Stack* stack){
    return stack->top==stack->capacity - 1;
}
