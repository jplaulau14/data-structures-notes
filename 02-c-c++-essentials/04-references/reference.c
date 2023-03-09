#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    printf("x: %d\n", x);
    printf("*p: %d\n", *p);
    printf("&x: %p\n", (void *)&x);
    printf("p: %p\n", (void *)p);
    int b = 20;
    *p = b;
    printf("x: %d\n", x);
    printf("*p: %d\n", *p);
    printf("b: %d\n", b);
    printf("&x: %p\n", (void *)&x);
    printf("p: %p\n", (void *)p);
    printf("&b: %p\n", (void *)&b);
    return 0;
}
