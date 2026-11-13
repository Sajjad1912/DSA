#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
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
int searchLinkedList(struct Node *head, int value)
{
    int index = 1;
    while (head != NULL)
    {
        if (head->data == value)
        {
            return index;
        }
        index++;
        head = head->next;
    }
    return -1;
}
int main()
{
    int a[] = {15,30,45,60,100};
    struct Node *head = NULL;
    head = createLinkedList(a,5);
    struct Node *current = head;
    printf("Index : %d\n",searchLinkedList(head,60));
    return 0;
}