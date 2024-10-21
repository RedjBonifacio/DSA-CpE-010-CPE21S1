#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// Shell
void shellSort(std::vector<int>& arr) {
    for (int gap = arr.size() / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < arr.size(); i++) {
            int temp = arr[i], j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
}

// Merge
void merge(std::vector<int>& arr, int left, int mid, int right) {
    std::vector<int> L(arr.begin() + left, arr.begin() + mid + 1);
    std::vector<int> R(arr.begin() + mid + 1, arr.begin() + right + 1);
    
    for (int i = left, j = 0, k = 0; i <= right; i++) {
        if (j >= L.size()) arr[i] = R[k++];
        else if (k >= R.size() || L[j] <= R[k]) arr[i] = L[j++];
        else arr[i] = R[k++];
    }
}

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Quick
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high], i = low - 1;
    for (int j = low; j < high; j++)
        if (arr[j] < pivot) std::swap(arr[++i], arr[j]);
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

// Print array
void printArray(const std::vector<int>& arr) {
    for (int num : arr) std::cout << num << " ";
    std::cout << std::endl;
}

// Main function
int main() {
    const int SIZE = 100;
    std::vector<int> arr(SIZE);
    std::srand(std::time(nullptr));

    for (int& num : arr) num = std::rand() % 1000;

    std::cout << "Original array:\n";
    printArray(arr);

    std::vector<int> shellArr = arr; shellSort(shellArr);
    std::cout << "\nShell Sort:\n"; printArray(shellArr);

    std::vector<int> mergeArr = arr; mergeSort(mergeArr, 0, SIZE - 1);
    std::cout << "Merge Sort:\n"; printArray(mergeArr);

    std::vector<int> quickArr = arr; quickSort(quickArr, 0, SIZE - 1);
    std::cout << "Quick Sort:\n"; printArray(quickArr);

    return 0;
}
