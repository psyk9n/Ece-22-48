#include<stdio.h>
int main()
{
  int A, B, C;
  printf("Enter two numbers that you want to multiply: \n");
  scanf("%d %d", &A, &B);
  C = A * B;
  printf("The product of two numbers is %d:", C);
}