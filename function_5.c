#include<stdio.h>
void CheckPrimeNumber()
{
    int n,flag=0;

    printf("Enter a given number : ");
    scanf("%d",&n);

    if (n == 0 || n == 1)
        flag = 1;

    for (int i = 2; i <= n/2; i++)
    {
       if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d is not a Prime Number",n);
    }
    else
    {
        printf("%d is a Prime Number",n);
    }
}
int main()
{
    CheckPrimeNumber();
    return 0;
}