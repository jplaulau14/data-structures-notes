#include <iostream>
using namespace std;

void fun(int n) {
    static int x = 0;
    if (n > 0) {
        x++;
        cout << x << " ";
        fun(n - 1);
    }
}

int main() {
    int x = 3;
    fun(x);
    cout << endl;
    return 0;
}