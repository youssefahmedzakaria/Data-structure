#include <iostream>
#include <algorithm>
#include "sortings.h" // Include the header file for the sortings class
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 6}; // Example array to sort
    int n = sizeof(arr)/sizeof(arr[0]); // Size of the array

    sortings s; // Create an object of the sortings class

    // Call the sorting methods on the array
    cout << "Original Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Insertion Sort
    s.insertionSort(arr, n);
    cout << "\nAfter Insertion Sort: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}