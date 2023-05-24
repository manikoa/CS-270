#include <iostream>
using namespace std;

int main() 
{
    // Declare and initialize test-case array
    int data[] = { 20, 15, 18, 9, 6, 13, 7, 2, 16, 1 };
    int n = sizeof(data) / sizeof(data[0]);

    // Perform selection sort
    int comparisons = 0;
    int swaps = 0;
    for (int i = 0; i < n - 1; i++) 
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) 
        {
            // Count number of comparisons
            comparisons++;
            if (data[j] < data[min_idx]) 
            {
                min_idx = j;
            }
        }
        if (min_idx != i) 
        {
            // Swap elements
            swaps++;
            int temp = data[i];
            data[i] = data[min_idx];
            data[min_idx] = temp;
        }
    }

    // Print results
    cout << "Unsorted data: ";
    for (int i = 0; i < n; i++) 
    {
        cout << data[i] << " ";
    }
    cout << endl;

    cout << "Number of elements: " << n << endl;

    cout << "Sorted data: ";
    for (int i = 0; i < n; i++) 
    {
        cout << data[i] << " ";
    }
    cout << endl;

    cout << "Number of comparisons: " << comparisons << endl;
    cout << "Number of swaps: " << swaps << endl;

    return 0;
}
