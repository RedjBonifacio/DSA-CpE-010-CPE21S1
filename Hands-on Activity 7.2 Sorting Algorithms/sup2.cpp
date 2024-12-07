#include <iostream>
#include <vector>
#include <ctime>

void merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    std::vector<int> L(n1), R(n2);
    
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];
    
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int quickPartition(std::vector<int>& arr, int low, int high) {
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
        int pivotIndex = quickPartition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    std::vector<int> array = {4, 34, 29, 48, 53, 87, 12, 30, 44, 25, 93, 67, 43, 19, 74};

    std::vector<int> quickArr = array;

    double start_s = clock();
    quickSort(quickArr, 0, quickArr.size() - 1);
    double stop_s = clock();
    std::cout << "Sorted Array using Quick Sort: ";
    for (int num : quickArr) std::cout << num << " ";
    std::cout << std::endl;
    std::cout << "Quick Sort time: " << (stop_s - start_s) / (CLOCKS_PER_SEC / 1000) << " milliseconds." << std::endl;

    std::vector<int> mergeArr = array;

    start_s = clock();
    mergeSort(mergeArr, 0, mergeArr.size() - 1);
    stop_s = clock();
    std::cout << "Sorted Array using Merge Sort: ";
    for (int num : mergeArr) std::cout << num << " ";
    std::cout << std::endl;
    std::cout << "Merge Sort time: " << (stop_s - start_s) / (CLOCKS_PER_SEC / 1000) << " milliseconds." << std::endl;

    return 0;
}

