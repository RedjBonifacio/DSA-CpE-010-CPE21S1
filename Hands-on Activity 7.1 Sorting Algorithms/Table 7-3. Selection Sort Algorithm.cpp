#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int routineSmallest(int arr[], int k, int arr_size){
    int position, j;
    int smallestElem = arr[k];
    position = k;

    for(int j = k + 1; j < arr_size; j++){
        if(arr[j] < smallestElem){
            smallestElem = arr[j];
            position = j;
        }
    }
    return position;
}

void selectionSort(int arr[], int arr_size){
    int pos, temp, pass = 0;
    for(int i = 0; i < arr_size; i++){
        pos = routineSmallest(arr, i, arr_size);
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
        pass++;
    }
}

void display(int arr[], int arr_size){
    for(int t = 0; t < arr_size; t++){
        cout << arr[t] << " ";
    }
    cout << endl;
}

int main(){
    const int maximum = 100;
    int numbers[maximum];
    srand(time(0));
    for(int i = 0; i < maximum; i++){
        numbers[i] = rand() % 100;
    }

    cout << "UNSORTED ARRAY" << endl;
    display(numbers, maximum);

    cout << "\nSORTED ARRAY (Selection Sort)" << endl;
    selectionSort(numbers, maximum);
    display(numbers, maximum);

    return 0;
}
