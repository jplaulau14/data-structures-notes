#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;
    public:
        Rectangle() {
            length = breadth = 1;
        }
        Rectangle(int l, int b);
        int area() {
            return length * breadth;
        }
        int perimeter();
        int getLength() {
            return length;
        }
        void setLength(int l) {
            length = l;
        }
        int getBreadth() {
            return breadth;
        }
        void setBreadth(int b) {
            breadth = b;
        }
        ~Rectangle() {
            cout << "Rectangle destroyed" << endl;
        }
};

Rectangle::Rectangle(int l, int b) {
    length = l;
    breadth = b;
}

int Rectangle::perimeter() {
    return 2 * (length + breadth);
}

int main() {
    Rectangle r(10, 5);
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    r.setLength(20);
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    return 0;
}