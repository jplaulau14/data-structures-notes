#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void initialize(Rectangle *r, int length, int breadth) {
    r->length = length;
    r->breadth = breadth;
}

int area(Rectangle r) {
    return r.length * r.breadth;
}

void changeLength(Rectangle *r, int length) {
    r->length = length;
}

int main() {
    Rectangle r;
    initialize(&r, 10, 5);
    cout << "Area: " << area(r) << endl;
    changeLength(&r, 20);
    cout << "Area: " << area(r) << endl;
    return 0;
}