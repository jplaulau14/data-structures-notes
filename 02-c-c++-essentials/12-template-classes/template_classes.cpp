#include <iostream>
using namespace std;

template <class T>
class Arithmetic {
    private:
        T a;
        T b;
    public:
        Arithmetic(T a, T b) {
            this->a = a;
            this->b = b;
        }
        T add() {
            return a + b;
        }
        T subtract() ;
        T multiply() {
            return a * b;
        }
        T divide() {
            return a / b;
        }
};

template <class T>
T Arithmetic<T>::subtract() {
    return a - b;
}

int main() {
    Arithmetic<int> a(10, 5);
    cout << "Add: " << a.add() << endl;
    cout << "Subtract: " << a.subtract() << endl;
    cout << "Multiply: " << a.multiply() << endl;
    cout << "Divide: " << a.divide() << endl;
    Arithmetic<float> b(10.5, 5.5);
    cout << "Add: " << b.add() << endl;
    cout << "Subtract: " << b.subtract() << endl;
    cout << "Multiply: " << b.multiply() << endl;
    cout << "Divide: " << b.divide() << endl;
    return 0;
}
