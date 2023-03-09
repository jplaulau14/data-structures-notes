#include <iostream>

using namespace std;

int main()
{
    int A[5]; // Declare an array of 5 integers
    A[0] = 12; // Assign value to first element
    A[1] = 13; // Assign value to second element
    A[2] = 14; // Assign value to third element
    A[3] = 15; // Assign value to fourth element
    A[4] = 16; // Assign value to fifth element

    cout << sizeof(A) << endl; // Print the size of the array in bytes
    cout << A[1] << endl; // Print the value of the second element
    cout << "Printing all elements of array" << endl;
    for (int i = 0; i < 5; i++) // Loop through all elements of the array
    {
        cout << A[i] << endl; // Print the value of the current element
    }

    int size;
    cout << "Enter size of array" << endl;
    cin >> size; // Read the size of the new array from user input
    int B[size]; // Declare an array of the given size
    cout << "Enter elements of array" << endl;
    B[0] = 12; // Assign value to first element
    for (int i = 1; i < size; i++) // Loop through all other elements of the array
    {
        cin >> B[i]; // Read the value of the current element from user input
    }
    cout << "Printing all elements of array" << endl;
    for (int i = 0; i < size; i++) // Loop through all elements of the array
    {
        cout << B[i] << endl; // Print the value of the current element
    }
    return 0;
}
