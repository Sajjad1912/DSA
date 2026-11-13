#include<stdio.h>
#define MAX 6
int Q[MAX];
int front,rear;
int menu(){
    int ch;
    printf("Choose operation : ");
    printf("\n 1. Insert ");
    printf("\n 2. Delete ");
    printf("\n 3. Display ");
    printf("\n 4. End ");
    printf("\n Enter your choice : ");
    scanf("%d",&ch);
    return ch;
}
void insertQ(){
    int data;
    if (rear == MAX){
        printf("\n Queue is full.\n");
        return;
    }
    else{
        printf("\nEnter data : ");
        scanf("%d",&data);
        Q[rear] = data;
        rear++;
        printf("\nData insert in the Queue succefully.");
    }
}
void deletQ(){
    if (rear == front){
        printf("\nQueue is empty.");
        return;
    }
    else{
        printf("\nDeletion element from Queue is %d ",Q[front++]);
    }
}
void displayQ(){
    if (front == rear){
        printf("\n Queue is Empty\n");
        return;
    }
    else{
        printf("Element in Queue are :");
        for (int  i = front; i < rear; i++)
        {
            printf("%d->",Q[i]);
        }
    }
}
int main(){
    int ch;
    do{
        ch = menu();
        switch (ch){
            case 1:
                insertQ();
                break;
            case 2:
               deletQ();
                break;
            case 3:
                displayQ();
                break;
            case 4:
                break;
        }
    } while (1);
}