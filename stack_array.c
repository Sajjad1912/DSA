#include<stdio.h>
#include<stdlib.h>
#define max 6
int stack [max];
int  top = 0;
int menu()
{
    int ch;
    printf("Choose operation: ");
    printf("\n1.push.");
    printf("\n2.pop.");
    printf("\n3.display");
    printf("\n4.end.");
    scanf("%d",&ch);
    return ch;
}

void display()
{
    int i;
    if (top == 0)
    {
        printf("Stack is empty");
    }
    else
    {
        for ( i = 0; i < top; i++)
        {
            printf("%d\t",stack[i]);
        }
        
    }
    
}

void push()
{
    int data;
    if(top == max)
    {
        printf("\nData overflow");
    }
    else
    {
        printf("\nEnter daata : ");
        scanf("%d",&data);
        stack[top] = data;
        top++;
        printf("\nData pushed in the stack succesfully.");
    }
    
}

void pop()
{
    if(top == 0)
    {
        printf("Stack underflow");
    }
    else
    {
        top--;
        printf("Popped data is %d",stack[top]);
    }
}
int main()
{
    int ch;
    do
    {
        ch = menu();
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        }
    } while (1);
    
}
