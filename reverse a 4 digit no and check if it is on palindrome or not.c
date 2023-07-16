#include <stdio.h>

int main() {
    int n, reverse= 0, num, r;

    printf("Enter a 4-digit number: ");
    scanf("%d", &n);

    num = n;

    while (n != 0)
  {
        r = n % 10;
        reverse = reverse * 10 + r;
        n /= 10;
    }
    printf("%d is reverse of %d. \n", reverse, num);

    if (num == reverse)
  {
        printf("%d is a palindrome.\n", num);
    }
  else 
  {
        printf("%d is not a palindrome.\n", num);
    }
}
