#include <stdio.h>
#include <string.h>

#define MAX 100

// Stack variables
char stack[MAX];
int top = 0;

// Function to push a character onto the stack
void push(char item) {
    stack[++top] = item;
}

// Function to pop a character from the stack
char pop(){
    return stack[top--];
}

//Revers function
void reverseString(char str[],int len) {
    
    // Push all characters of the string onto the stack
    for (int i = 0; i < len; i++) {
        push(str[i]);
    }
    
    // Pop all characters from the stack and store them back into the string
    for (int i = 0; i < len; i++) {
        str[i] = pop();
    }
}

//Display function
void displayString(char str[]) {
    printf("Reversed String is: %s\n", str);
}

int main() {
    char str[] = {"HELLO"};
    int len = strlen(str);
    printf("\nThe string is : %s\n",str);
    reverseString(str,len);
    displayString(str);
    return 0;
}