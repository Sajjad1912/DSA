#include<stdio.h>
int third_function(int x, int y)
{
    return x - y;
}
int second_function(int x, int y)
{
    return x - y;
}
int fist_function(int x, int y)
{
    return x + y;
}
int input()
{
    int n;
    printf("Enter  number :");
    scanf("%d",&n);
    return n;
}
int main()
{
    int n1 = input();
    
    int n2 = input();
    
    n1 = fist_function(n1,n2);
    n2 = second_function(n1,n2);
    n1 = third_function(n1,n2);

    printf("1st number = %d\n",n1);
    printf("2nd number = %d\n",n2);

    return 0;
}