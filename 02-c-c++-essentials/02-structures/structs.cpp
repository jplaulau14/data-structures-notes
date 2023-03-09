#include <iostream>
using namespace std;

struct Rectangle {
    int width;
    int height;
};

int main() {
    Rectangle rect;
    rect.width = 10;
    rect.height = 20;
    cout << "Area: " << rect.width * rect.height << endl;
    cout << "Size of Rectangle: " << sizeof(rect) << " bytes" << endl;
    return 0;
}