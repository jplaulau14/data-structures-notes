#include <iostream>
using namespace std;

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
    return 0;
}