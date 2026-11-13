#include<stdio.h>
int sum(int *a,int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + *(a+i);
    }
    return sum;
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int result = sum(arr,5);
    printf("Sum of array is : %d",result);
}