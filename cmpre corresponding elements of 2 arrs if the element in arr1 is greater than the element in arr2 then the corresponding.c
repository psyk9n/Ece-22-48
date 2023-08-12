#include <stdio.h>

int main() {
    int array1[] = {7, 2, 3, 4, 9};
    int array2[] = {6, 2, 8, 1, 5};

    int length = sizeof(array1)/sizeof(array1[0]);

    printf("Comparing corresponding elements:\n");
    for (int i = 0; i < length; i++) {
        if (array1[i] > array2[i]) {
            printf("Element at index %d in array1 is greater: %d\n", i, array1[i]);
        }
    }

    return 0;
}