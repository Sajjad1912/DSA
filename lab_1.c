#include<stdio.h>
int main()
{
  int array[5]={2,32,4,20,41};
  for(int i = 0; i<5 ;i++)
    {
      printf("%d ",array[i]);
    }
   printf("\n");
  for(int i = 0 ; i<5; i++)
    {
      if(array[i] % 4 == 0)
      {
        array[i];
      }
      else
      {
        array[i] = 0;
      }
      printf("%d ",array[i]);   
    }
}