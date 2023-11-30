#include <iostream>
#include <cmath>
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

    
    double numberA;
    std::cout << "Введіть число A: ";
    std::cin >> numberA;

    
    int countLessThanA = 0;
    for (int i = 0; i < n; ++i) {
        if (A[i] < numberA) {
            countLessThanA++;
        }
    }
    std::cout << "Кількість елементів масиву, менших за " << numberA << ": " << countLessThanA << std::endl;

    
    double sumAfterLastNegative = 0.0;
    int lastNegativeIndex = -1;

    for (int i = n - 1; i >= 0; --i) {
        if (A[i] < 0) {
            lastNegativeIndex = i;
            break;
        }
    }

    if (lastNegativeIndex != -1) {
        for (int i = lastNegativeIndex + 1; i < n; ++i) {
            sumAfterLastNegative += static_cast<int>(A[i]);
        }
    }
    else {
        std::cout << "В масиві відсутні від'ємні елементи." << std::endl;
    }

    std::cout << "Сума цілих частин елементів після останнього від’ємного: " << sumAfterLastNegative << std::endl;

    
    double maxElement = A[0];

    
    for (int i = 1; i < n; ++i) {
        if (A[i] > maxElement) {
            maxElement = A[i];
        }
    }

    
    for (int i = 0; i < n; ++i) {
        if (std::abs(A[i] - maxElement) <= 0.2 * maxElement) {
            std::cout << A[i] << " ";
        }
    }

    for (int i = 0; i < n; ++i) {
        if (std::abs(A[i] - maxElement) > 0.2 * maxElement) {
            std::cout << A[i] << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
