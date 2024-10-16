#include <iostream>
#include <algorithm> // for std::swap

template <typename T>
void bubbleSort(T arr[], size_t arrSize) {
    for (size_t i = 0; i < arrSize - 1; i++) {
        // Step 2: For j = i + 1 to arrSize - 1, repeat
        for (size_t j = i + 1; j < arrSize; j++) {
            // Step 3: if arr[j] > arr[i], swap arr[j] and arr[i]
            if (arr[j] > arr[i]) {
                std::swap(arr[j], arr[i]);
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    size_t arrSize = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, arrSize);

    std::cout << "Sorted array (Descending Order): ";
    for (size_t i = 0; i < arrSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
