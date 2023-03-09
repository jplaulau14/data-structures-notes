#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    printf("x: %d\n", x);
    printf("p: %p\n", (void *)p);
    printf("*p: %d\n", *p);
    int A[5] = {2, 4, 6, 8, 10};
    int *pA = A;
    printf("A: %p\n", (void *)A);
    printf("pA: %p\n", (void *)pA);
    printf("*pA: %d\n", *pA);
    printf("*(pA + 1): %d\n", *(pA + 1));
    printf("*(pA + 2): %d\n", *(pA + 2));
    printf("*(pA + 3): %d\n", *(pA + 3));
    printf("*(pA + 4): %d\n", *(pA + 4));
    // Using for loop
    for (int i = 0; i < 5; i++) {
        printf("*(pA + %d): %d\n", i, *(pA + i));
    }
    return 0;
}
