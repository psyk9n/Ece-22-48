#include<stdio.h>
int main()
{
  int i, n, prod = 1;
  printf("Enter the number of terms required: \n");
  scanf("%d", &n);
  for(i=1;i<=n;i++)
  {
    prod*=i;
  }
    printf("Product of series is %d.",prod);
}