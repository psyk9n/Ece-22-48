#include <stdio.h>

int main() {
    int arr[] = {4, 5, 3, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReversed array: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
