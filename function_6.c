#include<stdio.h>
int Getinteger()
{
    int n;

    printf("Enter a given number : ");
    scanf("%d",&n);

    return n;
}
int main()
{
    int flag;

    int n = Getinteger();
    
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
    return 0;
}