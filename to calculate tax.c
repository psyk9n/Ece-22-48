#include<stdio.h>
int main()
{
  int income;
  printf("Enter total income: \n");
  scanf("%d",&income);
  if(income<100000)
  {
       printf("No Tax.");  
  }
  else if(income<=150000)
  {
       printf("10% Tax.");  
  }
  else if(income<=200000)
  {
       printf("20% Tax.");  
  }
  else if(income>300000)
  {
       printf("35% Tax.");  
  }
  else
  {
    printf("Invalid");
  }
}