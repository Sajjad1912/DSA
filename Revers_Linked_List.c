#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void reversLinkedList(struct Node *head)
{
    struct Node *prev = NULL, *current = head,*next = NULL;
    while (current != NULL)
    {
        //store the next node
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    while(head != NULL)
    {
        printf("%d->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}
struct Node *createLinkedList(int arr[], int size)
{
    struct Node *head = NULL,*temp = NULL, *current = NULL;
    for (int i = 0; i < size; i++)
    {
       temp = (struct Node *)malloc(sizeof(struct Node));
       temp ->data = arr[i];
       temp->next = NULL;
       if (head == NULL)
       {
            head = temp;
            current = temp;
       }
       else
       {
            current ->next = temp;
            current = current->next;
       }
    }
    return head;
}

int main()
{
    int a[] = {5,10,30};
    struct Node *head;
    head = createLinkedList(a,3);
    struct Node *newHead = head;
    while(head != NULL)
    {
        printf("%d->",head->data);
        head = head->next;
    }
    printf("NULL\n");
    reversLinkedList(newHead);
    return 0;
}