#include<stdio.h>
// stack_usingLinkedList.c
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void linkedListTraversal(struct node * ptr){
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct node * top){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct node * ptr){
    struct node * n = (struct node *)malloc(sizeof(struct node));
    if(n == NULL){
        return 1;
    }
    else return 0;
}

struct node * push(struct node * top, int val){
    if(isFull(top)){
        printf("Overflow!");
    }
    else{
        struct node * n = (struct node *)malloc(sizeof(struct node));
        n->data = val;
        top->next = n;
        top = n;
        return top;
    }
}

int pop(struct node ** top){
    if(isEmpty(*top)){
        printf("Stack Underflow!!");
    }
    else{
        struct node * n = top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;

    }

}


int main()
{
    struct node * top = NULL;
    return 0;
}
