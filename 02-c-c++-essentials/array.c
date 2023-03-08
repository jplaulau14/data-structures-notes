#include <stdio.h>

int main()
{
    int A[5]; // Declare an array of 5 integers
    A[0] = 12; // Assign value to first element
    A[1] = 13; // Assign value to second element
    A[2] = 14; // Assign value to third element
    A[3] = 15; // Assign value to fourth element
    A[4] = 16; // Assign value to fifth element

    printf("%lu\n", sizeof(A)); // Print the size of the array in bytes
    printf("%d\n", A[1]); // Print the value of the second element
    printf("Printing all elements of array\n");
    for (int i = 0; i < 5; i++) // Loop through all elements of the array
    {
        printf("%d\n", A[i]); // Print the value of the current element
    }

    int size;
    printf("Enter size of array\n");
    scanf("%d", &size); // Read the size of the new array from user input
    int B[size]; // Declare an array of the given size
    printf("Enter elements of array\n");
    B[0] = 12; // Assign value to first element
    for (int i = 1; i < size; i++) // Loop through all other elements of the array
    {
        scanf("%d", &B[i]); // Read the value of the current element from user input
    }
    printf("Printing all elements of array\n");
    for (int i = 0; i < size; i++) // Loop through all elements of the array
    {
        printf("%d\n", B[i]); // Print the value of the current element
    }
    return 0;
}
