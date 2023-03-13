#include <iostream>
using namespace std;

void treeRecursion(int n) {
    if (n > 0) {
        cout << n << " ";
        treeRecursion(n-1);
        treeRecursion(n-1);
    }
}

int main() {
    int x = 3;
    treeRecursion(x);
    cout << endl;
    return 0;
}