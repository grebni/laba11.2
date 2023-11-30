#include <iostream>
#include <climits>
#include <Windows.h>
const int ARRAY_SIZE = 10; 
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int array[ARRAY_SIZE];

    
    std::cout << "Введите элементы массива:" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        std::cin >> array[i];
    }

    
    int maxIndex = 0;
    for (int i = 1; i < ARRAY_SIZE; ++i) {
        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        }
    }

    
    for (int i = 0; i < maxIndex; ++i) {
        if (array[i] < 0) {
            array[i] = 0;
        }
    }

    
    std::cout << "Результат:" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        std::cout << array[i] << " ";
    }

    return 0;
}
