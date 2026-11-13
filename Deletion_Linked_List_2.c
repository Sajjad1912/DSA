// Deletion a node in between
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node * ptr){
    printf("Element is : ");
    while (ptr != NULL){
        printf("%d -> ",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}

struct Node * deletionBetween(struct Node * head , int index){
    struct Node * p = head;
    struct Node * q = head->next;
    for (int i = 0; i < index-1 ; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
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

    printf("Linked list befor deletion \n");
    linkedListTraversal(head);
    head = deletionBetween(head , 1);
    printf("\nLinked list after deletion\n");
    linkedListTraversal(head);

    return 0;
}