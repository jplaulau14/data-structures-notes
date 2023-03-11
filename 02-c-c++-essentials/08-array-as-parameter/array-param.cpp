#include <iostream>
using namespace std;

void arrParam(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function returning array
int* arrReturn(int size) {
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }
    return arr;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    arrParam(arr, size);
    int *arr2 = arrReturn(size);
    arrParam(arr2, size);
    delete[] arr2;
    return 0;
}