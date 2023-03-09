#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int &r = x;
    cout << "x: " << x << endl;
    cout << "r: " << r << endl;
    cout << "&x: " << &x << endl;
    cout << "&r: " << &r << endl;
    r = 20;
    cout << "x: " << x << endl;
    cout << "r: " << r << endl;
    cout << "&x: " << &x << endl;
    cout << "&r: " << &r << endl;
    int b = 30;
    r = b;
    cout << "x: " << x << endl;
    cout << "r: " << r << endl;
    cout << "b: " << b << endl;
    cout << "&x: " << &x << endl;
    cout << "&r: " << &r << endl;
    cout << "&b: " << &b << endl;
    return 0;
}