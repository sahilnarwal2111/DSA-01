#include<stdio.h>
#include<stdlib.h>

struct node
    
{
    
    
    int data;
    struct node * next;
};

void linkedListTraversal(struct node * ptr){
    
    while(ptr!= NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct node * insertAtFirst(struct Node *head, int data){
    struct node * ptr = (struct node * )malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct node * insertAtIndex(struct node *head, int data , int index ){
    struct node * ptr = (struct node * )malloc(sizeof(struct node));
    struct node * p = head;
    int i = 0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = data;
    return head;
}

struct node * insertAfterNode(struct node * head, int data, struct node *prevNode){
    struct node * ptr = (struct node * )malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;

}

struct node * insertAtEnd(struct Node *head, int data){
    struct node * ptr = (struct node * )malloc(sizeof(struct node));
    // int i = 0;/
    struct node * p;
    while(p->next!=NULL){
        p = p->next ;
        // i++
    }
    ptr->next = NULL;
    p->next = ptr;
    ptr->data = data;
    return head;
}

struct node * deleteFirstNode(struct node * head){
    struct node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node * deleteAtIndex(struct node * head, int index){
    struct node * p = head;
    struct node * q = head->next;
    int i = 0;
    while(i<index-1){
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct node * deleteLastElement(struct node * head){
    struct node * p = head;
    struct node * q = head->next;
    while(q->next != NULL){
        p = p->next ;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

int main()
{
    struct node * head;
    struct node * second;
    struct node * third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;
    second->data = 8;
    second->next = third;
    third->data = 9;
    third->next = NULL;

    head = insertAtFirst(head, 12);
    head = insertAtIndex(head,67,2);
    head = insertAtEnd(head,67);
    head = insertAfterNode(head,23,second);
    // head = deleteFirstNode(head); 
    // head = deleteAtIndex(head,2);
    head = deleteLastElement(head);
    //Traversing the linked list
    linkedListTraversal(head);
    return 0;
}
