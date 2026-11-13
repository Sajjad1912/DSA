#include<stdio.h>
#define MAX 6
int CQ[MAX];
int front = 0;
int rear = 0;
int count = 0;
int menu(){
    int ch;
    printf("\nChoose operation .");
    printf("\n1. Insert");
    printf("\n2. Delete");
    printf("\n3. Display");
    printf("\n4. End");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);
    return ch;
}
void insertCQ(){
    int data;
    if (count == MAX){
        printf("\nCirculer queue is full.");
    }
    else{
        printf("\nEnter data: ");
        scanf("%d",&data);
        CQ[rear] = data;
        rear = (rear + 1) % MAX;
        count++;
        printf("\nData insert in the circuler queue.");
    }
}
void deleteCQ(){
    if (rear == front){
        printf("\nQueue is full.");
    }
    else{
        printf("\nDeleted element from queue is %d",CQ[front]);
        front = (front + 1) % MAX;
        count--;
    }
}
void displayCQ(){
    if (count == 0){
        printf("\nCirculer queue is empty .");
    }
    else{
        printf("\nElement in circular Queue are : ");
        for (int i =  front; count != 0; count--){
            printf("%d  ",CQ[i]);
            i = (i+1) % MAX;
        } 
    }
}
int main(){
    int ch;
    do{
        ch = menu();
        switch(ch){
            case 1:
                insertCQ();
                break;
            case 2:
                deleteCQ();
                break;
            case 3:
                displayCQ();
                break;
        }
    }while(1);
}