#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p1 , *p2;
    p1 = (int *)malloc(5 * sizeof(int));
    p2 = (int *)calloc(5 , sizeof(int));
    if (p1 == NULL || p2 == NULL)
    {
        printf("Memory not allocated.\n");
    }
    else
    {
        printf("Memory allocated successful.\n");
        p1 = realloc(p1,30);
        printf("Memory reallocation successfully.\n");
    }
}