#include <iostream>
using namespace std;

struct Rectangle {
    int width;
    int height;
};

int main() {
    int x = 10;
    int *p = &x;
    cout << "x: " << x << endl;
    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;
    int A[5] = {2, 4, 6, 8, 10};
    int *pA = A;
    cout << "A: " << A << endl;
    cout << "pA: " << pA << endl;
    cout << "*pA: " << *pA << endl;
    cout << "*(pA + 1): " << *(pA + 1) << endl;
    cout << "*(pA + 2): " << *(pA + 2) << endl;
    cout << "*(pA + 3): " << *(pA + 3) << endl;
    cout << "*(pA + 4): " << *(pA + 4) << endl;
    // Using for loop
    for (int i = 0; i < 5; i++) {
        cout << "*(pA + " << i << "): " << *(pA + i) << endl;
    }
    // Heap memory
    int *pHeap = new int[5];
    pHeap[0] = 2;
    pHeap[1] = 4;
    pHeap[2] = 6;
    pHeap[3] = 8;
    pHeap[4] = 10;
    for (int i = 0; i < 5; i++) {
        cout << "*(pHeap + " << i << "): " << *(pHeap + i) << endl;
    }
    delete[] pHeap;
    // Data types
    int *pInt;
    char *pChar;
    float *pFloat;
    double *pDouble;
    Rectangle *pRect;
    cout << "Size of int: " << sizeof(pInt) << " bytes" << endl;
    cout << "Size of char: " << sizeof(pChar) << " bytes" << endl;
    cout << "Size of float: " << sizeof(pFloat) << " bytes" << endl;
    cout << "Size of double: " << sizeof(pDouble) << " bytes" << endl;
    cout << "Size of Rectangle: " << sizeof(pRect) << " bytes" << endl;
    return 0;
}