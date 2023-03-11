#include <iostream>

using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;

    public:
        Rectangle() {
            length = 0;
            breadth = 0;
        }

        Rectangle(int l, int b) {
            length = l;
            breadth = b;
        }

        void setLength(int l) {
            length = l;
        }

        int getLength() {
            return length;
        }

        void setBreadth(int b) {
            breadth = b;
        }

        int getBreadth() {
            return breadth;
        }

        int area() {
            return length * breadth;
        }
};

int main() {
    Rectangle r(10, 5);
    cout << "Area: " << r.area() << endl;
    r.setLength(20);
    cout << "Area: " << r.area() << endl;
    return 0;
}
