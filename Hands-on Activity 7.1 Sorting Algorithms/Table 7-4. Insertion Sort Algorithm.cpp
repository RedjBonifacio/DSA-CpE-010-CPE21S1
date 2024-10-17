#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void display(int arr[], int arr_size) {
    for (int t = 0; t < arr_size; t++) {
        cout << arr[t] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int arr_size) {
    int num_2, key, num_1;
    for (num_2 = 1; num_2 < arr_size; num_2++) {
        key = arr[num_2];
        num_1 = num_2 - 1;

        while (num_1 >= 0 && arr[num_1] > key) {
            arr[num_1 + 1] = arr[num_1];
            num_1 = num_1 - 1;
        }
        arr[num_1 + 1] = key;
    }
}

int main() {
    const int maximum = 100;
    int numbers[maximum];
    srand(time(0));

    for (int i = 0; i < maximum; i++) {
        numbers[i] = rand() % 100;
    }

    cout << "UNSORTED ARRAY" << endl;
    display(numbers, maximum);

    cout << "\nSORTED ARRAY (Insertion Sort)" << endl;
    insertionSort(numbers, maximum);
    display(numbers, maximum);

    return 0;
}
