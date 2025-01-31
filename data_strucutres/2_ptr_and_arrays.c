#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;  // Points to first element

    printf("First element: %d\n", *p);        // 1
    printf("Second element: %d\n", *(p + 1)); // 2
    printf("Third element: %d\n", *(p + 2));  // 3

    return 0;
}
