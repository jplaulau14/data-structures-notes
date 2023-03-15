#include <iostream>
using namespace std;

double taylorSeriesRecursion(int x, int n) {
    static double p = 1;
    static double f = 1;
    double res;

    if (n == 0) {
        return 1;
    } else {
        res = taylorSeriesRecursion(x, n-1);
        p = p * x;
        f = f * n;
        return res + p / f;
    }
}

double taylorSeriesLoop(int x, int n) {
    double res = 1;
    static double X = x;
    static double F = 1;
    for (int i = 1; i <= n; i++) {
        res = res + (X * x) / (F * i);
    }
    return res;
}

int main() {
    int x = 4;
    int n = 15;
    cout << taylorSeriesRecursion(x, n) << endl;
    cout << taylorSeriesLoop(x, n) << endl;
}