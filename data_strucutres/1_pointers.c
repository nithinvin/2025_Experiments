#include <stdio.h>

int main() {
    int a = 65;
    int *p = &a;  // Pointer stores address of 'a'
    char *cp = (char*) &a;
    double *dp = (double*) &a;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Pointer p holds address: %p\n", p);
    printf("Value at pointer p (*p): %d\n", *p);
    printf("Value at pointer cp (*cp): %c\n", *cp);
    printf("Value at pointer dp (*dp): %fc\n", *dp);

    return 0;
}
