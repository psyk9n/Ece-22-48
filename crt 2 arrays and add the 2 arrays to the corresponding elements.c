#include <stdio.h>

int main()
{
    int array1[] = {1, 5, 8, 3, 9};
    int array2[] = {2, 7, 4, 9, 1};
    int result[5];

    for (int i = 0; i < 5; i++) {
        result[i] = array1[i] + array2[i];
    }

    printf("Resultant array after sum:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", result[i]);
    }

    return 0;


}