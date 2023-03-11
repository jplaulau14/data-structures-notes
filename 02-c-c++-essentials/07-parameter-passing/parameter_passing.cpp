#include <iostream>
using namespace std;

// Pass by value swapping
void valSwap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Pass by reference swapping
void refSwap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
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
    cout << "x: " << x << ", y: " << y << endl;
    valSwap(x, y);
    cout << "x: " << x << ", y: " << y << endl;
    refSwap(x, y);
    cout << "x: " << x << ", y: " << y << endl;
    x = 10;
    y = 20;
    addSwap(&x, &y);
    cout << "x: " << x << ", y: " << y << endl;
    return 0;
}

