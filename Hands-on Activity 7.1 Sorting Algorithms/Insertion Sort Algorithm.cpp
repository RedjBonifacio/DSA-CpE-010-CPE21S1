#include <iostream>

template <typename T>
void insertionSort(T arr[], const int N) {
    int K = 0, J;
    T temp;

    while (K < N) {
        temp = arr[K];
        
        J = K - 1;
        
        while (J >= 0 && temp > arr[J]) {
            arr[J + 1] = arr[J];
            J--;
        }
        
        arr[J + 1] = temp;
        
        K++;
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    const int N = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, N);

    std::cout << "Sorted array (Descending Order): ";
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
