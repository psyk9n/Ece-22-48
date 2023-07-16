#include<stdio.h>

int main()
{
    int number, digit, sum = 0;

    printf("Enter any 4-digit number: \n");
    scanf("%d", &number);

    // Loop to extract each digit and add to the sum
    for (int i = 0; i < 4; i++) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("Sum of the digits: %d\n", sum);
    
    return 0;
}
