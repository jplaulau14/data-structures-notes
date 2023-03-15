#include <iostream>
using namespace std;

int sumRecursion(int n) {
    if (n == 0) {
        return 0;
    }

    return sumRecursion(n - 1) + n;
}

int sumFormula(int n) {
    return n*(n + 1)/2;
}

int sumLoop(int n) {
    int res = 0;
    for (int i = 1; i <= n; i++) {
        res = res + i;
    }

    return res;
}

int main() {
    int n = 6;
    cout << sumRecursion(n) << endl;
    cout << sumFormula(n) << endl;
    cout << sumLoop(n) << endl;
}