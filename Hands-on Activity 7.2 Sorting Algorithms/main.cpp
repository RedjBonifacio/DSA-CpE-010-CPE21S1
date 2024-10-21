#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "sorting_algorithms.h" // Include header file for sorting algorithms

using namespace std;

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 100; // Size of the array
    int arr[SIZE];

    // Seed for random number generation
    srand(static_cast<unsigned>(time(0)));

    // Generate random array
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 1000; // Random values between 0 and 999
    }

    // Display unsorted array
    cout << "Unsorted Array: " << endl;
    printArray(arr, SIZE);
    cout << endl;

    // Create copies for each sorting algorithm
    int arrShell[SIZE], arrMerge[SIZE], arrQuick[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arrShell[i] = arr[i];
        arrMerge[i] = arr[i];
        arrQuick[i] = arr[i];
    }

    // Sort using Shell Sort
    shellSort(arrShell, SIZE);
    cout << "Sorted Array using Shell Sort: " << endl;
    printArray(arrShell, SIZE);
    cout << endl;

    // Sort using Merge Sort
    mergeSort(arrMerge, 0, SIZE - 1);
    cout << "Sorted Array using Merge Sort: " << endl;
    printArray(arrMerge, SIZE);
    cout << endl;

    // Sort using Quick Sort
    quickSort(arrQuick, 0, SIZE - 1);
    cout << "Sorted Array using Quick Sort: " << endl;
    printArray(arrQuick, SIZE);
    cout << endl;

    return 0;
}
