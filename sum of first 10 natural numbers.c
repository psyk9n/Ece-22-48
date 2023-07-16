#include<stdio.h>
int main()
{
  int i, n=10, sum = 0;
  printf("First 10 natural numbers are: \n");
  for(i=1;i<=10;i++)
  {
    printf("%d \n",i);
    sum+=i;
  }
  printf("Sum of first 10 natural numbers is %d \n",sum);
}