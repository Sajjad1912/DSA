#include<stdio.h>
#include<stdlib.h>
#define MAX 8
char stack[MAX] = {'a','c','d','f','w','e','r','u'};
int top = 0;
void Pop(){
        printf("\n Popped data is %c",stack[--top]);
}
void Display(){
        printf("\nElement in Stack : ");
        for (int i = 0; i < top; i++)
        {
            printf("%c ",stack[i]);
        }
    
}
int main(){
    int ch;
    printf("\nChoose operation.");
    printf("\n1. Pop");
    printf("\n2. Display");
    printf("\n3.End");
    printf("\n Enter your choice : ");
    scanf("%d",&ch);
    do{
        switch (ch)
        {
        case 1:
            Pop();
            break;
        case 2:
            Display();
            break;
        case 3:
            break;
        }
    } while (1);
    
}