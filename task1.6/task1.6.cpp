#include <iostream>
#include <cmath>
#include <algorithm>
#include <Windows.h>
const int maxSize = 100; 

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double A[maxSize];

    
    int n;
    std::cout << "Введіть розмір масиву (n): ";
    std::cin >> n;

   
    std::cout << "Введіть елементи масиву:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> A[i];
    }

    
    int countNegative = 0;
    for (int i = 0; i < n; ++i) {
        if (A[i] < 0) {
            countNegative++;
        }
    }
    std::cout << "Кількість від’ємних елементів масиву: " << countNegative << std::endl;

    
    double minAbsElement = std::abs(A[0]);
    int minAbsElementIndex = 0;

    for (int i = 1; i < n; ++i) {
        if (std::abs(A[i]) < minAbsElement) {
            minAbsElement = std::abs(A[i]);
            minAbsElementIndex = i;
        }
    }

    
    double sumAfterMinAbs = 0.0;
    for (int i = minAbsElementIndex + 1; i < n; ++i) {
        sumAfterMinAbs += std::abs(A[i]);
    }
    std::cout << "Сума модулів елементів після мінімального за модулем елемента: " << sumAfterMinAbs << std::endl;

    
    for (int i = 0; i < n; ++i) {
        if (A[i] < 0) {
            A[i] = std::pow(A[i], 2);
        }
    }

    
    std::sort(A, A + n);

    
    std::cout << "Відсортований масив:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
