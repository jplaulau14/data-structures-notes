#include <iostream>
using namespace std;

int factorialRecursion(int n) {
    if (n == 1) {
        return 1;
    }
    return factorialRecursion(n - 1) * n;
}

int factorialLoop(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * i;
    }
    return res;
}

int main() {
    int n = 5;
    cout << factorialRecursion(n) << endl;
    cout << factorialLoop(n) << endl;
}