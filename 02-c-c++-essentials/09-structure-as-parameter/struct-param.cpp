#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

// Area function
int area(Rectangle r) {
    return r.length * r.breadth;
}

void changeLength(Rectangle *r, int length) {
    r->length = length;
}

int main() {
    Rectangle r = {10, 5};
    cout << "Area: " << area(r) << endl;
    changeLength(&r, 20);
    cout << "Area: " << area(r) << endl;
    return 0;
}