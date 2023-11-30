#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
const int maxSize = 200;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int array[maxSize];

    
    srand(static_cast<unsigned>(time(0)));
    for (int i = 0; i < maxSize; ++i) {
        array[i] = rand() % 101 - 50;
    }

    
    int countPairs = 0;
    for (int i = 0; i < maxSize - 1; ++i) {
        if (array[i] == array[i + 1]) {
            countPairs++;
        }
    }

    
    std::cout << "Масив:" << std::endl;
    for (int i = 0; i < maxSize; ++i) {
        std::cout << array[i] << " ";
    }

    std::cout << "\nКількість пар сусідніх елементів з однаковими значеннями: " << countPairs << std::endl;

    return 0;
}
