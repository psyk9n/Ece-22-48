#include<stdio.h>
int main()
{
  int A, B, C;
  printf("Enter two numbers : \n");
  scanf("%d %d", &A, &B);
  if(A>B)
  printf("%d is greater than %d", A, B);
  else
  printf("%d is greater than %d", B, A);
}