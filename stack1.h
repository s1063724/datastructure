//
// Created by 10305 on 2020/2/13.
//

#ifndef DATASTRUCTURE_STACK1_H
#define DATASTRUCTURE_STACK1_H
typedef struct{
    int top;
    int capacity;
    void *arr;

    int size_of_element;
}Stack;


Stack* Stack_init(int capacity, int size_of_element);
int Stack_push(Stack* stack, void* val);
int Stack_pop(Stack* stack, void* element);
void * Stack_peek(Stack* stack, void *val);
int Stack_size(Stack* stack);

void Stack_show(Stack* stack);
int Stack_is_empty(Stack* stack);
int Stack_is_full(Stack* stack);
#endif //DATASTRUCTURE_STACK1_H
