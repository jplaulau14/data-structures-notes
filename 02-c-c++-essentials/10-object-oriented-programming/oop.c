#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    int length;
    int breadth;
};

// Default constructor
void initialize(struct Rectangle *r) {
    r->length = 0;
    r->breadth = 0;
}

// Parameterized constructor
void initialize_with_values(struct Rectangle *r, int l, int b) {
    r->length = l;
    r->breadth = b;
}

// Setter functions
void setLength(struct Rectangle *r, int l) {
    r->length = l;
}

void setBreadth(struct Rectangle *r, int b) {
    r->breadth = b;
}

// Getter functions
int getLength(struct Rectangle *r) {
    return r->length;
}

int getBreadth(struct Rectangle *r) {
    return r->breadth;
}

// Area function
int area(struct Rectangle *r) {
    return r->length * r->breadth;
}

int main() {
    struct Rectangle r;
    initialize_with_values(&r, 10, 5);
    printf("Area: %d\n", area(&r));
    setLength(&r, 20);
    printf("Area: %d\n", area(&r));
    return 0;
}
