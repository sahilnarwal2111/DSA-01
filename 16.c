#include<stdio.h>
#include<stdlib.h>

struct node{
    
    int data;
    struct node * next;
};

void linkedListTraversal(struct node * ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}

void createLinkedList(){}

int main()
{
    struct node * head;
    struct node * second;
    struct node * third;
    //allocating memory in the heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;
    second->data = 8;
    second->next = third;
    third->data = 9;
    third->next = NULL;
    return 0;
}
