#include <iostream>
using namespace std;

double hornerLoop(double x, double n) {
    double res = 1;
    for (; n > 0; n--) {
        res =  1 +  x/n * res;
    }

    return res;
}

double hornerRecursion(double x, double n) {
    static double res = 1;
    if (n == 0) {
        return res;
    }

    res = 1 + x/n * res;
    return hornerRecursion(x, n-1);
}

int main() {
    double x = 1;
    double n = 10;
    cout << hornerLoop(x, n) << endl;
    cout << hornerRecursion(x, n) << endl;
}