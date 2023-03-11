#include <stdio.h>

// Pass by value swapping
void valSwap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Pass by reference swapping
void refSwap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Pass by address swapping
void addSwap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;
    printf("x: %d, y: %d\n", x, y);
    valSwap(x, y);
    printf("x: %d, y: %d\n", x, y);
    refSwap(&x, &y);
    printf("x: %d, y: %d\n", x, y);
    x = 10;
    y = 20;
    addSwap(&x, &y);
    printf("x: %d, y: %d\n", x, y);
    return 0;
}
