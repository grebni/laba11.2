#include <iostream>
#include <cmath>
#include <Windows.h>
const int maxSize = 100; 

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int A[maxSize];

   
    int n;
    std::cout << "Введіть розмір масиву (n): ";
    std::cin >> n;

    
    std::cout << "Введіть елементи масиву:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> A[i];
    }

    
    int minAbsoluteValue = std::abs(A[0]);
    for (int i = 1; i < n; ++i) {
        int absoluteValue = std::abs(A[i]);
        if (absoluteValue < minAbsoluteValue) {
            minAbsoluteValue = absoluteValue;
        }
    }
    std::cout << "Мінімальний за модулем елемент масиву: " << minAbsoluteValue << std::endl;

   
    int sumAfterZero = 0;
    bool foundZero = false;
    for (int i = 0; i < n; ++i) {
        if (foundZero) {
            sumAfterZero += std::abs(A[i]);
        }
        if (A[i] == 0) {
            foundZero = true;
        }
    }
    std::cout << "Сума модулів елементів після першого нульового елемента: " << sumAfterZero << std::endl;

    
    int B[maxSize];
    int indexB = 0;

    
    for (int i = 0; i < n; i += 2) {
        B[indexB++] = A[i];
    }

    
    for (int i = 1; i < n; i += 2) {
        B[indexB++] = A[i];
    }

    
    std::cout << "Масив після перетворення:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << B[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
