#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
int Routine_Smallest(T A[], int K, const int arrSize) {
    int position = K;
    T smallestElem = A[K];

    for (int J = K + 1; J < arrSize; J++) {
        if (A[J] < smallestElem) {
            smallestElem = A[J];
            position = J;
        }
    }
    return position;
}

template <typename T>
void selectionSort(T arr[], const int N) {
    for (int i = 0; i < N - 1; i++) {
        int POS = Routine_Smallest(arr, i, N);
        std::swap(arr[i], arr[POS]);
    }
}

void printArray(int arr[], const int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int arraySize = 100;
    int arr[arraySize];
    srand(time(0));
    
    for (int i = 0; i < arraySize; i++) {
        arr[i] = rand() % 1000;
    }

    std::cout << "Original Array:\n";
    printArray(arr, arraySize);

    selectionSort(arr, arraySize);

    std::cout << "Sorted Array:\n";
    printArray(arr, arraySize);

    return 0;
}


