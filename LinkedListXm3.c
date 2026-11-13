#include <stdio.h>

// Recursive function to print even numbers up to n
void printEvenNumbers(int n) {
    if (n > 0) {
        printEvenNumbers(n - 1); // Recursive call
        if (n % 2 == 0) {
            printf("%d ", n); // Print the current Even number
        }
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Even numbers up to %d: ", n);
    printEvenNumbers(n);
    printf("\n");

    return 0;
}