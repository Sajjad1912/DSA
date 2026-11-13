//Deletion the last node
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};
void LinkedListTreaveral(struct Node * ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next;
    }
}
struct Node * DeletionLastNode(struct Node * head)
{
    struct Node * p = head;
    struct Node * q = p->next;
    
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    
    head->data = 23;
    head->next = second;
    second->data = 45;
    second->next = third;
    third->data = 56;
    third->next = fourth;
    fourth->data = 78;
    fourth->next = NULL;

    printf("Linked list befor deletion\n");
    LinkedListTreaveral(head);
    head = DeletionLastNode(head);
    printf("Linked list after deletion\n");
    LinkedListTreaveral(head);

    return 0;
}