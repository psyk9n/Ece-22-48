#include<stdio.h>

int main() {
   int a, b, c, max, step, lcm;
   printf("Enter 3 positive numbers :\n");
   scanf("%d%d%d", &a, &b, &c);
   lcm = 0;

   if(a > b > c) {
      max = step = a;}
    else if(b > a > c){
      max = step = b;}
   else{
      max = step = c;}

   while(1) {
      if(max%a == 0 && max%b == 0 && max%c == 0) {
         lcm = max;
         break;    
      }

      max += step;
   }

   printf("LCM is %d", lcm);
   return 0;
}