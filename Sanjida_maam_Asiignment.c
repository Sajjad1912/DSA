#include<stdio.h>
void printArray(int * A ,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubbleShort(int * A, int n)
{
    int temp;
    for (int i = 0; i < n-1; i++)// for number of pass
    {
        for (int j = 0; j <n-1-i ; j++)// for comparison in each pass
        {
            if(A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}
int main()
{
    int A[] = {12,54,65,7,98,90,34,54,78,23};
    int n = sizeof(A) / sizeof(A[0]);
    printArray(A,n);
    bubbleShort(A,n);
    printArray(A,n);
    return 0;
}