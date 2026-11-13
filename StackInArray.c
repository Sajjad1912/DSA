#include<stdio.h>
#define max 6
int stack [max];
int  top = 0;
int menu(){
    int ch;
    printf("\nChoose operation: ");
    printf("\n1.push.");
    printf("\n2.pop."); 
    printf("\n3.display");
    printf("\n4.end.");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);
    return ch;
}
void push(){
    int data;
    if(top == max){
        printf("\nData overflow");
        return;
    }
    else{
        printf("\nEnter daata : ");
        scanf("%d",&data);
        stack[top] = data;
        top++;
        printf("\nData pushed in the stack succesfully.");
    }
}
void pop(){
    if(top == 0){
        printf("Stack underflow");
        return;
    }
    else{
        printf("Popped data is %d",stack[--top]);
    }
}
void display(){
    if (top == 0){
        printf("Stack is empty");
        return;
    }
    else{
        printf("\n Element in stack.");
        for (int i = 0; i < top; i++){
            printf("%d->",stack[i]);
        }
    }
}
int main(){
    int ch;
    do{
        ch = menu();
        switch (ch){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
        }
    } while (1);
}