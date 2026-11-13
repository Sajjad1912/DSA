#include<stdio.h>
int CheckPrimNumber(int n)
{
    if (n == 0 || n == 1)
        return 1;
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            return 1;
            break;
        }
    }
    return 0; 
}
int main()
{
    int n;
    printf("Enter a given number : ");
    scanf("%d",&n);

    int flag = CheckPrimNumber(n);

    if (flag == 1)
    {
       printf("%d is not a prime number",n);
    }
    else
    {
        printf("%d is a prime number",n);
    }
    return 0;
}