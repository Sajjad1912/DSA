//Insert in between
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};
void LinkedListTreaversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next;
    }
    
}
struct Node * insertAtInddex(struct Node *head , int data, int index)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
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
int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;

    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));

    head->data = 1912;
    head->next = second;
    second->data = 1213;
    second->next = third;
    third->data = 2356;
    third->next = NULL;

    printf("Linked List befor insertion\n");
    LinkedListTreaversal(head);
    insertAtInddex(head,35,1);
    printf("Linked List after insertion\n");
    LinkedListTreaversal(head);

    return 0;
}