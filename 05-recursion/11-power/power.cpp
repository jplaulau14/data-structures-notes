#include <iostream>
using namespace std;

int powerRecursion(int b, int e) {
    if (e == 0) {
        return 1;
    } 
    return powerRecursion(b, e - 1) * b;
}

int powerLoop(int b, int e) {
    int res = 1;
    for (int i = 0; i < e; i++) {
        res = res * b;
    }
    return res;
}

int main() {
    int n = 5;
    int b = 2;
    cout << powerRecursion(b, n) << endl;
    cout << powerLoop(b, n) << endl;
}