#include <iostream>
using namespace std;

void funRecursion(int n) {
    if (n > 0) {
        cout << n << " ";
        funRecursion(n-1);
    }
}

void funLoop(int n) {
    while (n > 0) {
        cout << n << " ";
        n--;
    }
}

int main() {
    int x = 3;
    funRecursion(x);
    cout << endl;
    funLoop(x);
    cout << endl;
    return 0;
}