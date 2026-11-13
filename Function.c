//Insertion at the end
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

struct Node * insertAtEnd(struct Node * head , int data ){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    ptr->data = data;
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
    head = insertAtEnd(head,10);
    linkedListTraversal(head);

    return 0;
}
