//Contract a single linked lists having n node.
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d->",temp->data);
       temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    int n;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    struct Node *head = NULL;
    struct Node *temp = head;
    for (int  i = 0; i <= n; i++)
    {
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data for node %d = ",i);
        scanf("%d",&newNode->data);
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = temp->next;
        }
    }
    printf("Linked Lists : ");
    printList(head);

    return 0;
}