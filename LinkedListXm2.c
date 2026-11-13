#include <stdio.h>

// Recursive function to print odd numbers up to n
void printOddNumbers(int n) {
    if (n > 0) {
        printOddNumbers(n - 1); // Recursive call
        if (n % 2 != 0) {
            printf("%d ", n); // Print the current odd number
        }
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Odd numbers up to %d: ", n);
    printOddNumbers(n);
    printf("\n");

    return 0;
}