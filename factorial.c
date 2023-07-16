#include <stdio.h>

int main() {
    int number;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    printf("Factorial of %d = %d\n", number, factorial);

    return 0;
}


