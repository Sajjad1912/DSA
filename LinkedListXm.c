#include <stdio.h>

// Recursive function to print natural numbers up to n
void printNaturalNumbers(int n) {
    if (n > 0) {
        printNaturalNumbers(n - 1); // Recursive call
        printf("%d ", n); // Print the current number
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Natural numbers up to : ");
    printNaturalNumbers(n);

    return 0;
}