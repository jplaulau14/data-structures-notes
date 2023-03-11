#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

// Area function
int area(const struct Rectangle *r) {
    return r->length * r->breadth;
}

void changeLength(struct Rectangle *r, int length) {
    r->length = length;
}

int main() {
    struct Rectangle r = {10, 5};
    printf("Area: %d\n", area(&r));
    changeLength(&r, 20);
    printf("Area: %d\n", area(&r));
    return 0;
}
