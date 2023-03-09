#include <iostream>
using namespace std;

struct Rectangle {
    int width;
    int height;
};

int main() {
    Rectangle rect;
    rect.width = 5;
    rect.height = 10;
    Rectangle *pRect = &rect;
    cout << "rect.width: " << rect.width << endl;
    cout << "rect.height: " << rect.height << endl;
    cout << "pRect->width: " << pRect->width << endl;
    cout << "pRect->height: " << pRect->height << endl;
    pRect->width = 15;
    cout << "rect.width: " << rect.width << endl;
    // Dynamic allocation of memory for a structure
    Rectangle *pRect2;
    pRect2 = new Rectangle;
    pRect2->width = 20;
    pRect2->height = 30;
    cout << "pRect2->width: " << pRect2->width << endl;
    cout << "pRect2->height: " << pRect2->height << endl;
    delete pRect2;
    return 0;
}