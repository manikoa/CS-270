/* Maniko Anthony, Examlet 01*/

#include <iostream> // Include the input/output stream library for basic I/O operations.
using namespace std; // Use the standard namespace.

const int SIZE = 6; // Change the size of the array as needed.

void countEvenOdd(int arr[], int size) 
{
    int evenCount = 0; // Counter for even numbers.
    int oddCount = 0; // Counter for odd numbers.

    for (int i = 0; i < size; i++) // Iterate through the array.
    {
        if (arr[i] % 2 == 0) // Check if the current element is divisible by 2 (even).
        {
            evenCount++; // Increment the even count.
        }
        else // If not divisible by 2, it is odd.
        {
            oddCount++; // Increment the odd count.
        }
    }

    cout << "The array contents: ";
    for (int i = 0; i < size; i++) // Print the array elements.
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "There are " << evenCount << " even integers." << endl; // Print the count of even numbers.
    cout << "There are " << oddCount << " odd integers." << endl; // Print the count of odd numbers.
}

int main() 
{
    int arr[SIZE] = { 10, 23, 11, 6, 15, 20 }; // Initialize the array with values.
    countEvenOdd(arr, SIZE); // Call the function to count even and odd numbers.
    return 0; // Exit the program.
}
