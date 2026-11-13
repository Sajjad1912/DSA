#include <stdio.h>

void series(int n)
{
    double result = 0.0, seris;
    for (int i = 1; i <= n; i++)
    {
        seris = 1.0 / i;

        if (i % 2 == 0)
        {
            seris = seris * -1;
        }
        result = result + seris;
    }
    printf("The sum of the series is: %lf\n", result);
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    series(n);
    return 0;
}
