#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    int * arr;
};

int isEmpty(struct stack * s){
    if(s->top == -1){
        return 1;
    }
    else{
    return 0;}
}
int isFull(struct stack * s){
    if(s->top == s->size-1){
        return 1;
    }
    else{

    return 0;
    }
}

void push(struct stack * s, int n){
    if(isFull(s)){
        printf("Stack is Full!!\n");
    }
    else{
        s->top++;
        s->arr[s->top] = n;
        }
}

int pop(struct stack * s){
    if(isEmpty(s)){
        printf("Underflow ! Stack is Empty\n");
    }
    else{
        int val = s->arr[s->top];
        s->top--;
        return val;
    }
}

int main()
{
    struct stack s;
    s.size = 80;
    s.top = -1;
    s.arr = (int *)malloc(sizeof(int)*s.size);
    s.arr[0] = 7;
    s.top++;

    push(&s,34);

    // if(isEmpty(&s)){
    //     printf("Stack is Empty!\n");
    // }
    // else{
    //     printf("Stack is not Empty!\n");
    // }
    // if(isFull(&s)){
    //     printf("Stack is Full!!\n");
    // }
    // else{
    //     printf("Stack is not full!!\n");
    // }
    return 0;
}