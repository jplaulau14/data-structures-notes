#include <iostream>
using namespace std;

void funRecursion(int n) {
    if (n > 0) {
        funRecursion(n-1);
        cout << n << " ";
    }
}

void funLoopWrong(int n) {
    while (n > 0) {
        cout << n << " ";
        n--;
    }
}

void funLoopRight(int n) {
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i++;
    }
}

int main() {
    int x = 3;
    funRecursion(x);
    cout << endl;
    funLoopWrong(x);
    cout << endl;
    funLoopRight(x);
    cout << endl;
    return 0;
}