//Insert in between
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node * ptr){
    printf("Element is : ");
    while (ptr != NULL)
    {
        printf("%d -> ",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

struct Node * insertInBetween(struct Node * head , int data ,int index){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;
    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;

    //Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;
    second->data = 8;
    second->next = third;
    third->data = 9;
    third->next = NULL;

    linkedListTraversal(head);
    head = insertInBetween(head,10,2);
    linkedListTraversal(head);

    return 0;
}