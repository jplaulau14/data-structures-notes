#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    int width;
    int height;
};

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
    // Heap memory
    int *pHeap = (int *)malloc(5 * sizeof(int));
    pHeap[0] = 2;
    pHeap[1] = 4;
    pHeap[2] = 6;
    pHeap[3] = 8;
    pHeap[4] = 10;
    for (int i = 0; i < 5; i++) {
        printf("*(pHeap + %d): %d\n", i, *(pHeap + i));
    }
    free(pHeap);
    // Data types
    int *pInt;
    char *pChar;
    float *pFloat;
    double *pDouble;
    struct Rectangle *pRect;
    printf("Size of int: %lu bytes\n", sizeof(pInt));
    printf("Size of char: %lu bytes\n", sizeof(pChar));
    printf("Size of float: %lu bytes\n", sizeof(pFloat));
    printf("Size of double: %lu bytes\n", sizeof(pDouble));
    printf("Size of Rectangle: %lu bytes\n", sizeof(pRect));
    return 0;
}
