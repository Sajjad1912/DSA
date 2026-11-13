#include <stdio.h>

double sum(int n) 
{
  if (n == 1) 
  {
    return 1.0;
  } 
  else 
  {
    double series = (n % 2 == 0) ? -1.0 : 1.0;
    return series / (double)n + sum(n - 1);
  }
}

int main() 
{
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  double result = sum(n);
  printf("The sum of the series is: %lf\n",result);
  return 0;
}