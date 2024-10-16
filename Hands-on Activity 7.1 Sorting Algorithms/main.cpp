// main.cpp

#include <iostream>
#include <random>
#include <algorithm>
#include <cstddef>

template <typename T>
void bubbleSort(T arr[], size_t arrSize) {
    for (size_t i = 0; i < arrSize; i++) {
        for (size_t j = i + 1; j < arrSize; j++) {
            if (arr[j] < arr[i]) {
                std::swap(arr[j], arr[i]);
            }
        }
    }
}

void printArray(int arr[], size_t arrSize) {
    for (size_t i = 0; i < arrSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const size_t arraySize = 100;
    int arr[arraySize];

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, 999);

    for (size_t i = 0; i < arraySize; i++) {
        arr[i] = distr(gen);
    }

    std::cout << "Original Array:\n";
    printArray(arr, arraySize);

    bubbleSort(arr, arraySize);

    std::cout << "Sorted Array:\n";
    printArray(arr, arraySize);

    return 0;
}


