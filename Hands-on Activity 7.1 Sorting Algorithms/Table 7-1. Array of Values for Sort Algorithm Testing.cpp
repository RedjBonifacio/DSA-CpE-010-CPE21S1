#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int maximum = 100;
    int numbers[maximum];

    srand(time(0));

    for (int i = 0; i < maximum; i++) {
        numbers[i] = rand() % 100;
    }

    for (int j = 0; j < maximum; j++) {
        std::cout << numbers[j] << " ";
    }

    std::cout << std::endl;

    return 0;
}
