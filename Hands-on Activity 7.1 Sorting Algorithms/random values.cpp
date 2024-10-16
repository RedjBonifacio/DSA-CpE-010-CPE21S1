#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    std::vector<int> arr(100);

    for (int i = 0; i < 100; i++) {
        arr[i] = std::rand() % 1000 + 1;
    }

    std::cout << "Original array: ";
    printArray(arr);

    std::vector<int> bubbleSortedArray = arr;
    bubbleSort(bubbleSortedArray);
    std::cout << "Bubble Sorted array: ";
    printArray(bubbleSortedArray);

    std::vector<int> quickSortedArray = arr;
    quickSort(quickSortedArray, 0, quickSortedArray.size() - 1);
    std::cout << "Quick Sorted array: ";
    printArray(quickSortedArray);

    return 0;
}
