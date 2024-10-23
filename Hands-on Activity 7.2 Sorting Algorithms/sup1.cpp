#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            std::swap(arr[++i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    std::vector<int> arr = {10, 7, 8, 9, 1, 5};

    std::cout << "Original Array: ";
    for (int num : arr) std::cout << num << " ";
    std::cout << std::endl;

    int pivotIndex = partition(arr, 0, arr.size() - 1);
    std::cout << "Pivot Index: " << pivotIndex << " with value " << arr[pivotIndex] << std::endl;

    std::vector<int> leftSubList(arr.begin(), arr.begin() + pivotIndex);
    std::vector<int> rightSubList(arr.begin() + pivotIndex + 1, arr.end());

    insertionSort(leftSubList);
    std::cout << "Sorted Left Sub-list: ";
    for (int num : leftSubList) std::cout << num << " ";
    std::cout << std::endl;

    selectionSort(rightSubList);
    std::cout << "Sorted Right Sub-list: ";
    for (int num : rightSubList) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
