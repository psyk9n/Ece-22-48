#include<stdio.h>
int main()
{
  int i, data[10], sum = 0 ;
  float avg ;
  printf("Enter any 10 integers: \n");
  for(i=0;i<10;i++)
  {
    scanf("%d", &data[i]);
    sum += data[i];
  }
  printf("Sum of the 10 integers is %d . \n", sum);
  avg= sum / 10.0;
  printf("Average of the 10 integers is %f . \n", avg);
}